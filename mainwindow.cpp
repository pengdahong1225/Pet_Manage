#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "imysql.h"
#include<opencv.h>
#include<QFile>
#include<QTextStream>
#include<QKeyEvent>
#include<QMessageBox>
#include<QDebug>
#include<QFileDialog>
#include<opencv2/opencv.hpp>
#include<QSqlQuery>

#if _MSC_VER >= 1600
#pragma execution_character_set("utf-8")
#endif

int8_t video_status;/*-1关闭 1打开 0关闭请求*/

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    this->setWindowTitle("管理员系统");
    this->setAttribute(Qt::WA_DeleteOnClose,true);//退出即析构
    ui->statusBar->showMessage("当前管理员：彭大宏/18048155008");
    video_status = -1;
    ui->tbn_close->hide();

    //美化
    CssFile.setFileName("../QSS/mainwindow.qss");
    CssFile.open(QFile::ReadOnly);
    QTextStream filetext(&CssFile);
    QString style = filetext.readAll();
    this->setStyleSheet(style);
    CssFile.close();

    //stackwidget切换
    void (QComboBox::*psetpage)(int page) = &QComboBox::currentIndexChanged;
    connect(ui->comboBox,psetpage,this,&MainWindow::set_stack);
    ui->stackedWidget->setCurrentIndex(0);
    connect(ui->pbn_history,&QPushButton::clicked,[&]()->void{
                ui->comboBox->setCurrentIndex(0);
                ui->stackedWidget->setCurrentIndex(4);
            });
    connect(ui->pbn_manage,&QPushButton::clicked,[&]()->void{
                ui->comboBox->setCurrentIndex(0);
                ui->stackedWidget->setCurrentIndex(5);
            });
    connect(ui->pbn_CustManage,&QPushButton::clicked,[&]()->void{
                ui->comboBox->setCurrentIndex(0);
                ui->stackedWidget->setCurrentIndex(6);
            });
    connect(ui->pbn_video,&QPushButton::clicked,this,&MainWindow::OpenVideo);
    connect(ui->pbn_his_video,&QPushButton::clicked,this,&MainWindow::history_video);
    connect(ui->pbn_CustManage,&QPushButton::clicked,this,&MainWindow::Init_CustManage);
    ui->lineEdit_search->setPlaceholderText("输入姓名搜索");
    ui->pbn_add->setIcon(QIcon("../image/add.png"));
    ui->pbn_delete->setIcon(QIcon("../image/delete.png"));
    ui->pbn_edit->setIcon(QIcon("../image/edit.png"));
    QAction *action_search = new QAction(this);
    action_search->setIcon(QIcon("../image/search.png"));
    ui->lineEdit_search->addAction(action_search,QLineEdit::LeadingPosition);
    ui->tableWidget->setColumnCount(6);
    ui->tableWidget->setEditTriggers(QAbstractItemView::NoEditTriggers);
    ui->tableWidget->horizontalHeader()->setSectionResizeMode(QHeaderView::Stretch);
    ui->tableWidget->setHorizontalHeaderLabels(QStringList()<<"姓名"<<"性别"<<"联系电话"
                                               <<"邮箱"<<"是否使用中"<<"最近登录时间");
}

void MainWindow::set_stack(int page)
{
    ui->stackedWidget->setCurrentIndex(page--);
}

void MainWindow::OpenVideo()
{
    if(video_status == 1)
    {
        QMessageBox msgbox(QMessageBox::NoIcon,"warning","摄像头已经打开");
        msgbox.exec();
        return;
    }
    ui->tbn_close->show();
    this->UDP_OBJ = new UdpThread(this);
    connect(this->UDP_OBJ,&UdpThread::finished,this,
            &MainWindow::finishedThreadBtnSlot);
    connect(this->UDP_OBJ,&UdpThread::recevie_success,this,&MainWindow::recevie_ok);
    UDP_OBJ->start();
    video_status = 1;
    connect(this,&MainWindow::close_signal,UDP_OBJ,&UdpThread::close_slots);
    ui->label_video->setText("加载中...");
    connect(ui->tbn_close,&QToolButton::clicked,[&](){
        video_status = 0;
        this->UDP_OBJ->m_udpSocket->abort();
        this->UDP_OBJ->m_udpSocket->close();
        emit close_signal();
    });
}
void MainWindow::finishedThreadBtnSlot()
{
    this->UDP_OBJ->quit();
    delete UDP_OBJ;
    video_status = -1;
    ui->tbn_close->hide();
    ui->label_video->setText("监控");
}
void MainWindow::recevie_ok(QImage image)
{
    ui->label_video->setScaledContents(true);
    ui->label_video->setPixmap(QPixmap::fromImage(image));
}
void MainWindow::history_video()
{
    QString filename = QFileDialog::getOpenFileName(nullptr,"Open a video","../video","Video Files(*.mp4)");
    if(filename.isEmpty())
        return;
    cv::VideoCapture capture(filename.toStdString());
    cv::Mat frame;
    while(true)
    {
        capture.read(frame);
        if (frame.empty())
        {
            break;
        }
        imshow("frame", frame);
        int c = cv::waitKey(30);
        if(c == 27)
        {
            break;
        }
    }
    capture.release();
}

void MainWindow::Init_CustManage()
{
    if(connect_sql(db))
    {
        QSqlQuery query(db);
        query.exec("select * from pet_user");
        int size = query.size();
        ui->tableWidget->setRowCount(size);
        QStringList user_list;
        uint8_t row = 0;
        while(query.next())
        {
            for(uint8_t col=0;col<6;col++)
            {
                user_list << query.value(col).toString();
            }
            for (uint8_t col=0;col<6;col++) {
                ui->tableWidget->setItem(row,col,new QTableWidgetItem(user_list[col]));
                ui->tableWidget->item(row,col)->setTextAlignment(Qt::AlignHCenter | Qt::AlignVCenter);
            }
            user_list.clear();
            row++;
        }
    }
    ui->tableWidget->horizontalHeader()->setSectionResizeMode(0,QHeaderView::ResizeToContents);
    ui->tableWidget->horizontalHeader()->setSectionResizeMode(1,QHeaderView::ResizeToContents);
    ui->tableWidget->horizontalHeader()->setSectionResizeMode(2,QHeaderView::ResizeToContents);
    ui->tableWidget->horizontalHeader()->setSectionResizeMode(3,QHeaderView::ResizeToContents);
    ui->tableWidget->horizontalHeader()->setSectionResizeMode(4,QHeaderView::ResizeToContents);
    db.close();

    connect(ui->pbn_add,&QPushButton::clicked,this,&MainWindow::add_user);
    connect(ui->pbn_delete,&QPushButton::clicked,this,&MainWindow::delete_user);
    connect(ui->pbn_edit,&QPushButton::clicked,this,&MainWindow::edit_user);
}

void MainWindow::add_user()
{
    Obj_Add = new NewAdd(this);
    connect(Obj_Add,&NewAdd::Load_Ok,this,&MainWindow::Load_New);
    Obj_Add->show();
}

void MainWindow::Load_New()
{
    QStringList new_user;
    new_user << Obj_Add->user_in.name;
    if(Obj_Add->user_in.sex == 1)
        new_user << "男";
    else
        new_user << "女";
    new_user << Obj_Add->user_in.phone_number << Obj_Add->user_in.postbox << QString("否");
    //入数据库
    if(connect_sql(db))
    {
        QSqlQuery query(db);
        QString sql = QString("insert into pet_user(Uname,Usex,UPhone,Upostbox,Useing) values('%1','%2','%3','%4','%5')").arg(new_user[0]).arg(new_user[1]).arg(new_user[2]).arg(new_user[3]).arg(new_user[4]);
        bool ret = query.exec(sql);
        qDebug()<<ret;
        Obj_Add->close();
    }
    else {
        QMessageBox::warning(this,"插入","请检查网络",QMessageBox::Ok);
    }
}

void MainWindow::delete_user()
{

}

void MainWindow::edit_user()
{

}

MainWindow::~MainWindow()
{
    delete ui;
}
void MainWindow::receive_login()
{
    this->show();
}
