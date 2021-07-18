/********************************************************************************
** Form generated from reading UI file 'login.ui'
**
** Created by: Qt User Interface Compiler version 5.12.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LOGIN_H
#define UI_LOGIN_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_LOGIN
{
public:
    QPushButton *pbn_login;
    QLineEdit *lineEdit_name;
    QLineEdit *lineEdit_passwd;
    QCheckBox *checkBox;
    QLabel *label_Uimg;
    QLabel *label_Pimg;
    QWidget *widget;
    QLabel *label_gif;
    QToolButton *tob_min;
    QToolButton *tob_exit;
    QLabel *label_logo;

    void setupUi(QWidget *LOGIN)
    {
        if (LOGIN->objectName().isEmpty())
            LOGIN->setObjectName(QString::fromUtf8("LOGIN"));
        LOGIN->resize(500, 420);
        LOGIN->setMinimumSize(QSize(500, 420));
        LOGIN->setMaximumSize(QSize(500, 420));
        pbn_login = new QPushButton(LOGIN);
        pbn_login->setObjectName(QString::fromUtf8("pbn_login"));
        pbn_login->setGeometry(QRect(120, 330, 271, 41));
        QFont font;
        font.setPointSize(14);
        pbn_login->setFont(font);
        pbn_login->setCursor(QCursor(Qt::PointingHandCursor));
        lineEdit_name = new QLineEdit(LOGIN);
        lineEdit_name->setObjectName(QString::fromUtf8("lineEdit_name"));
        lineEdit_name->setGeometry(QRect(120, 190, 271, 41));
        QFont font1;
        font1.setPointSize(13);
        lineEdit_name->setFont(font1);
        lineEdit_name->setEchoMode(QLineEdit::Normal);
        lineEdit_name->setAlignment(Qt::AlignBottom|Qt::AlignLeading|Qt::AlignLeft);
        lineEdit_passwd = new QLineEdit(LOGIN);
        lineEdit_passwd->setObjectName(QString::fromUtf8("lineEdit_passwd"));
        lineEdit_passwd->setGeometry(QRect(120, 250, 271, 41));
        lineEdit_passwd->setFont(font1);
        lineEdit_passwd->setEchoMode(QLineEdit::Password);
        lineEdit_passwd->setAlignment(Qt::AlignBottom|Qt::AlignLeading|Qt::AlignLeft);
        lineEdit_passwd->setCursorMoveStyle(Qt::LogicalMoveStyle);
        checkBox = new QCheckBox(LOGIN);
        checkBox->setObjectName(QString::fromUtf8("checkBox"));
        checkBox->setGeometry(QRect(130, 300, 93, 21));
        QFont font2;
        font2.setBold(true);
        font2.setWeight(75);
        checkBox->setFont(font2);
        checkBox->setCursor(QCursor(Qt::PointingHandCursor));
        label_Uimg = new QLabel(LOGIN);
        label_Uimg->setObjectName(QString::fromUtf8("label_Uimg"));
        label_Uimg->setGeometry(QRect(70, 190, 41, 41));
        label_Uimg->setFrameShape(QFrame::NoFrame);
        label_Pimg = new QLabel(LOGIN);
        label_Pimg->setObjectName(QString::fromUtf8("label_Pimg"));
        label_Pimg->setGeometry(QRect(70, 250, 41, 41));
        label_Pimg->setFrameShape(QFrame::NoFrame);
        widget = new QWidget(LOGIN);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(0, 0, 501, 171));
        label_gif = new QLabel(widget);
        label_gif->setObjectName(QString::fromUtf8("label_gif"));
        label_gif->setGeometry(QRect(0, 0, 501, 171));
        label_gif->setFrameShape(QFrame::NoFrame);
        tob_min = new QToolButton(widget);
        tob_min->setObjectName(QString::fromUtf8("tob_min"));
        tob_min->setGeometry(QRect(440, 0, 31, 21));
        QFont font3;
        font3.setPointSize(14);
        font3.setBold(true);
        font3.setWeight(75);
        tob_min->setFont(font3);
        tob_min->setAutoFillBackground(true);
        tob_min->setCheckable(false);
        tob_exit = new QToolButton(widget);
        tob_exit->setObjectName(QString::fromUtf8("tob_exit"));
        tob_exit->setGeometry(QRect(470, 0, 31, 21));
        QFont font4;
        font4.setPointSize(14);
        font4.setBold(false);
        font4.setItalic(false);
        font4.setWeight(50);
        tob_exit->setFont(font4);
        tob_exit->setLayoutDirection(Qt::LeftToRight);
        tob_exit->setAutoFillBackground(true);
        label_logo = new QLabel(widget);
        label_logo->setObjectName(QString::fromUtf8("label_logo"));
        label_logo->setGeometry(QRect(10, 10, 41, 41));
        label_logo->setAlignment(Qt::AlignCenter);

        retranslateUi(LOGIN);

        QMetaObject::connectSlotsByName(LOGIN);
    } // setupUi

    void retranslateUi(QWidget *LOGIN)
    {
        LOGIN->setWindowTitle(QApplication::translate("LOGIN", "Form", nullptr));
        pbn_login->setText(QApplication::translate("LOGIN", "\347\231\273\345\275\225", nullptr));
        lineEdit_name->setPlaceholderText(QString());
        lineEdit_passwd->setPlaceholderText(QString());
        checkBox->setText(QApplication::translate("LOGIN", "\350\256\260\344\275\217\345\257\206\347\240\201", nullptr));
        label_Uimg->setText(QString());
        label_Pimg->setText(QString());
        label_gif->setText(QString());
        tob_min->setText(QApplication::translate("LOGIN", "-", nullptr));
        tob_exit->setText(QApplication::translate("LOGIN", "X", nullptr));
        label_logo->setText(QApplication::translate("LOGIN", "LOGO", nullptr));
    } // retranslateUi

};

namespace Ui {
    class LOGIN: public Ui_LOGIN {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LOGIN_H
