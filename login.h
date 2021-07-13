#ifndef LOGIN_H
#define LOGIN_H

#if _MSC_VER >= 1600
#pragma execution_character_set("utf-8")
#endif

#include <QWidget>
#include<QString>
#include<QSqlDatabase>
#include<QFile>
#include"imysql.h"

namespace Ui {
class LOGIN;
}

class LOGIN : public QWidget
{
    Q_OBJECT
public:
    explicit LOGIN(QWidget *parent = nullptr);
    ~LOGIN();
    QString Ret_passwd(QString name) const;
protected:
    void mousePressEvent(QMouseEvent *e);
    void mouseMoveEvent(QMouseEvent *e);
    bool eventFilter(QObject *watch,QEvent *e);
private slots:
    void on_pbn_login_clicked();
signals:
    void send_success();
private:
    Ui::LOGIN *ui;
    QMovie *movie;
    QSqlDatabase db;
    QFile CssFile;
    bool bPressFlag;
    QPoint beginDrag;
};

#endif // LOGIN_H
