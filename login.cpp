#include "login.h"
#include "ui_login.h"
#include"mainwindow.h"
#include<QDebug>
#include<QMessageBox>
#include<QToolTip>
#include<QSqlQuery>
#include<QFile>
#include<QTextStream>
#include<QPixmap>
#include<QJsonArray>
#include<QJsonDocument>
#include<QJsonObject>
#include<QMovie>
#include<QMouseEvent>
#include<QGraphicsView>
#include<QGraphicsScene>
#include<QGraphicsProxyWidget>
#include<QWidget>


LOGIN::LOGIN(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::LOGIN)
{
    ui->setupUi(this);
    this->setWindowFlags(Qt::FramelessWindowHint);
    this->setAttribute(Qt::WA_DeleteOnClose,true);   //关闭窗口后自动关闭本对象，析构
    connect(ui->tob_min,&QToolButton::clicked,this,[=](){
        this->showMinimized();
    });
    connect(ui->tob_exit,&QToolButton::clicked,this,[=](){
        exit(0);
    });
    ui->lineEdit_name->setClearButtonEnabled(true);
    ui->lineEdit_passwd->setClearButtonEnabled(true);
    ui->lineEdit_name->setPlaceholderText("手机号/用户名");
    ui->lineEdit_passwd->setPlaceholderText("密码");
    ui->pbn_login->setShortcut(QKeySequence::InsertParagraphSeparator);//回车
    ui->lineEdit_name->installEventFilter(this);
    ui->lineEdit_passwd->installEventFilter(this);
    //美化
    ui->label_Uimg->setPixmap(QPixmap(":/prefix1/image/用户.png"));
    ui->label_Uimg->setScaledContents(true);
    ui->label_Pimg->setPixmap(QPixmap(":/prefix1/image/密码.png"));
    ui->label_Pimg->setScaledContents(true);
    ui->label_logo->setPixmap(QPixmap(":/prefix1/image/logo.png"));
    ui->label_logo->setScaledContents(true);

    movie = new QMovie("../image/background.gif");
    ui->label_gif->setMovie(movie);
    ui->label_gif->setScaledContents(true);
    movie->start();

    CssFile.setFileName("../QSS/login.qss");
    CssFile.open(QFile::ReadOnly);
    QTextStream filetext(&CssFile);
    QString stylesheet = filetext.readAll();
    this->setStyleSheet(stylesheet);
    CssFile.close();
}

LOGIN::~LOGIN()
{
    delete movie;
    delete ui;
}

QString LOGIN::Ret_passwd(QString name) const
{
    QFile from_passwd("../Users/passwd.json");
    from_passwd.open(QIODevice::ReadOnly|QIODevice::Text);
    QByteArray array = from_passwd.readAll();
    from_passwd.close();

    int flag = 0;
    QJsonDocument document = QJsonDocument ::fromJson(array);
    QJsonObject jsonobject = document.object();
    QJsonObject::Iterator iterjson = jsonobject.begin();
    while(iterjson != jsonobject.end())
    {
        if(iterjson.key() == name)
        {
            flag = 1;
            break;
        }
        iterjson++;
    }
    if(flag == 1)
        return iterjson.value().toString();
    return QString();
}

void LOGIN::mousePressEvent(QMouseEvent *e)
{
    bPressFlag = true;
    beginDrag = e->pos();
    QWidget::mousePressEvent(e);
}

void LOGIN::mouseMoveEvent(QMouseEvent *e)
{
    if(bPressFlag)
    {
        QPoint relaPos(QCursor::pos() - beginDrag);
        move(relaPos);
    }
    QWidget::mouseMoveEvent(e);
}

bool LOGIN::eventFilter(QObject *watch, QEvent *e)
{
    if(watch == ui->lineEdit_name)
    {
        QString name = ui->lineEdit_name->text();
        if(e->type() == QEvent::FocusOut)
        {
            ui->lineEdit_name->clearFocus();
            QString passwd = this->Ret_passwd(name);
            ui->lineEdit_passwd->setText(passwd);
            return true;
        }
    }
    return QWidget::eventFilter(watch,e);
}

void LOGIN::on_pbn_login_clicked()
{
    QString Get_name = ui->lineEdit_name->text();
    QString Get_passwd = ui->lineEdit_passwd->text();
    if(Get_name.isEmpty())
    {
        QString na = QString("<b style=\"background:white;color:black;\"><font size=3>%1</font></b>");
        QToolTip::showText(ui->lineEdit_name->mapToGlobal(QPoint(20,10)),na.arg("请你输入用户名再登录"));
    }
    else if(Get_passwd.isEmpty())
    {
        QString pa = QString("<b style=\"background:white;color:black;\"><font size=3>%1</font></b>");
        QToolTip::showText(ui->lineEdit_passwd->mapToGlobal(QPoint(20,10)),pa.arg("请你输入密码再登录"));
    }
    else {
        if(connect_sql(db))
        {
            //连接成功
            bool is_ok= false;
            QSqlQuery query(db);
            query.exec("select * from petmanager");
            while(query.next())
            {
                QString _getname = query.value(0).toString();
                QString _getpasswd = query.value(1).toString();
                if(Get_name == _getname && Get_passwd == _getpasswd){
                    is_ok = true;
                    break;
                }
                else {
                    QString st = QString("<b style=\"background:white;color:red;\"><font size=4>%1</font></b>");
                    QToolTip::showText(ui->lineEdit_name->mapToGlobal(QPoint(50,20)),st.arg("请检查账户密码后再次登录"));
                }
            }
            if(is_ok)
            {
                db.close();
                if(ui->checkBox->isChecked())//保存密码
                {
                    bool flag = false;

                    QFile from_passwd("../Users/passwd.json");
                    from_passwd.open(QIODevice::ReadOnly|QIODevice::Text);
                    QByteArray array = from_passwd.readAll();
                    from_passwd.close();

                    QJsonDocument document = QJsonDocument ::fromJson(array);
                    QJsonObject jsonobject = document.object();
                    QJsonObject::Iterator iterjson = jsonobject.begin();
                    while(iterjson != jsonobject.end())
                    {
                        if(iterjson.key() == Get_name)
                        {
                            flag = true;
                            break;
                        }
                        iterjson++;
                    }
                    if(flag == false)
                    {
                        jsonobject.insert(Get_name,Get_passwd);
                        document.setObject(jsonobject);
                        QFile to_passwd("../Users/passwd.json");
                        to_passwd.open(QIODevice::WriteOnly|QIODevice::Truncate);
                        to_passwd.write(document.toJson());
                        to_passwd.close();
                    }
                }
                emit send_success();
                this->close();
            }
        }
        else {
            QMessageBox::warning(this,"warning","请检查网络",QMessageBox::Ok);
            db.close();
        }
    }
}
