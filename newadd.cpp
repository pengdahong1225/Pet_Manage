#include "newadd.h"
#include "ui_newadd.h"
#include<QDebug>
NewAdd::NewAdd(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::NewAdd)
{
    ui->setupUi(this);
    this->setWindowTitle("新添用户");
    this->setAttribute(Qt::WA_DeleteOnClose,true);//退出即析构
    ui->pushButton->setStyleSheet("background-color: #114357");
}

NewAdd::~NewAdd()
{
    delete ui;
}
