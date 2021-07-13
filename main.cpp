#include "mainwindow.h"
#include  "login.h"
#include <QApplication>
#include <QDebug>
#include<QObject>
#if _MSC_VER >= 1600
#pragma execution_character_set("utf-8")
#endif
int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    //LOGIN *S = new LOGIN;
    //S->show();
    MainWindow *w = new MainWindow;
    //QObject::connect(S,&LOGIN::send_success,w,&MainWindow::receive_login);
    w->show();

    return a.exec();
}
