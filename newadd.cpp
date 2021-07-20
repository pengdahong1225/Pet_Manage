#include "newadd.h"
#include "ui_newadd.h"
#include<QDebug>
#include<QToolTip>

NewAdd::NewAdd(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::NewAdd)
{
    ui->setupUi(this);
    this->setWindowTitle("新添用户");
    this->setAttribute(Qt::WA_DeleteOnClose,true);  //退出即析构
    ui->pushButton->setStyleSheet("background-color: #114357");
    connect(ui->pushButton,&QPushButton::clicked,this,&NewAdd::Load);
}

NewAdd::~NewAdd()
{
    delete ui;
}

void NewAdd::Load()
{
    if(ui->lineEdit->text().isEmpty())
    {
        QString na = QString("<b style=\"background:white;color:black;\"><font size=3>%1</font></b>");
        QToolTip::showText(ui->lineEdit->mapToGlobal(QPoint(20,10)),na.arg("Please Input name"));
        return;
    }
    else if (!ui->radioButton->isChecked() && !ui->radioButton_2->isChecked()) {
        QString na = QString("<b style=\"background:white;color:black;\"><font size=3>%1</font></b>");
        QToolTip::showText(ui->radioButton->mapToGlobal(QPoint(20,10)),na.arg("Check a Sex"));
        return;
    }
    else if(ui->lineEdit_2->text().isEmpty())
    {
        QString na = QString("<b style=\"background:white;color:black;\"><font size=3>%1</font></b>");
        QToolTip::showText(ui->lineEdit_2->mapToGlobal(QPoint(20,10)),na.arg("Input phone number"));
        return;
    }
    else if(ui->lineEdit_3->text().isEmpty())
    {
        QString na = QString("<b style=\"background:white;color:black;\"><font size=3>%1</font></b>");
        QToolTip::showText(ui->lineEdit_2->mapToGlobal(QPoint(20,10)),na.arg("Input phone postbox"));
        return;
    }
    this->user_in.name = ui->lineEdit->text();
    if(ui->radioButton->isChecked())
        this->user_in.sex = 1;
    else if(ui->radioButton_2->isChecked())
        this->user_in.sex = -1;
    this->user_in.phone_number = ui->lineEdit_2->text();
    this->user_in.postbox = ui->lineEdit_3->text();
    emit Load_Ok();
}
