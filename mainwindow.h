#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include<QFile>
#include"video.h"

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = nullptr);
    ~MainWindow();
    //bool event(QEvent *e);//重写事件分发器
public slots:
    void receive_login();
    void set_stack(int page);
    void OpenVideo();
    void finishedThreadBtnSlot();
    void recevie_ok(QImage image);
    void history_video();
signals:
    void close_signal();
private:
    Ui::MainWindow *ui;
    QFile CssFile;
    UdpThread *UDP_OBJ;
};

#endif // MAINWINDOW_H
