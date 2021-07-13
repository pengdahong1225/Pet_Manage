#include "mainwindow.h"
#include "ui_mainwindow.h"
#include<opencv.h>
#include <QFile>
#include <QTextStream>
#include<QKeyEvent>
#include<QMessageBox>
#include<QDebug>
#include<QFileDialog>
#include<opencv2/opencv.hpp>
#if _MSC_VER >= 1600
#pragma execution_character_set("utf-8")
#endif

int video_status;/*-1关闭 1打开 0关闭请求*/

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    this->setWindowTitle("萌之苑管理系统");
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
                ui->stackedWidget->setCurrentIndex(4);
            });
    connect(ui->pbn_manage,&QPushButton::clicked,[&]()->void{
                ui->stackedWidget->setCurrentIndex(5);
            });
    connect(ui->pbn_CustManage,&QPushButton::clicked,[&]()->void{
                ui->stackedWidget->setCurrentIndex(6);
            });
    connect(ui->pbn_SerManage,&QPushButton::clicked,[&]()->void{
                ui->stackedWidget->setCurrentIndex(7);
            });
    connect(ui->pbn_video,&QPushButton::clicked,this,&MainWindow::OpenVideo);
    connect(ui->pbn_his_video,&QPushButton::clicked,this,&MainWindow::history_video);
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
MainWindow::~MainWindow()
{
    delete ui;
}
void MainWindow::receive_login()
{
    this->show();
}
