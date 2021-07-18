/********************************************************************************
** Form generated from reading UI file 'newadd.ui'
**
** Created by: Qt User Interface Compiler version 5.12.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_NEWADD_H
#define UI_NEWADD_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>

QT_BEGIN_NAMESPACE

class Ui_NewAdd
{
public:
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QLineEdit *lineEdit;
    QLineEdit *lineEdit_2;
    QLineEdit *lineEdit_3;
    QRadioButton *radioButton;
    QRadioButton *radioButton_2;
    QPushButton *pushButton;

    void setupUi(QDialog *NewAdd)
    {
        if (NewAdd->objectName().isEmpty())
            NewAdd->setObjectName(QString::fromUtf8("NewAdd"));
        NewAdd->resize(500, 400);
        NewAdd->setMinimumSize(QSize(500, 400));
        NewAdd->setMaximumSize(QSize(500, 400));
        label = new QLabel(NewAdd);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(70, 60, 71, 41));
        QFont font;
        font.setPointSize(14);
        label->setFont(font);
        label->setFrameShape(QFrame::NoFrame);
        label->setAlignment(Qt::AlignCenter);
        label_2 = new QLabel(NewAdd);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(70, 130, 71, 41));
        label_2->setFont(font);
        label_2->setAlignment(Qt::AlignCenter);
        label_3 = new QLabel(NewAdd);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(70, 200, 71, 41));
        label_3->setFont(font);
        label_3->setAlignment(Qt::AlignCenter);
        label_4 = new QLabel(NewAdd);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(70, 270, 71, 41));
        label_4->setFont(font);
        label_4->setAlignment(Qt::AlignCenter);
        lineEdit = new QLineEdit(NewAdd);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));
        lineEdit->setGeometry(QRect(162, 62, 231, 41));
        lineEdit->setFont(font);
        lineEdit_2 = new QLineEdit(NewAdd);
        lineEdit_2->setObjectName(QString::fromUtf8("lineEdit_2"));
        lineEdit_2->setGeometry(QRect(160, 200, 231, 41));
        lineEdit_2->setFont(font);
        lineEdit_3 = new QLineEdit(NewAdd);
        lineEdit_3->setObjectName(QString::fromUtf8("lineEdit_3"));
        lineEdit_3->setGeometry(QRect(160, 270, 231, 41));
        lineEdit_3->setFont(font);
        radioButton = new QRadioButton(NewAdd);
        radioButton->setObjectName(QString::fromUtf8("radioButton"));
        radioButton->setGeometry(QRect(170, 140, 51, 21));
        QFont font1;
        font1.setPointSize(10);
        radioButton->setFont(font1);
        radioButton_2 = new QRadioButton(NewAdd);
        radioButton_2->setObjectName(QString::fromUtf8("radioButton_2"));
        radioButton_2->setGeometry(QRect(240, 140, 51, 21));
        radioButton_2->setFont(font1);
        pushButton = new QPushButton(NewAdd);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(180, 330, 151, 41));
        pushButton->setFont(font);

        retranslateUi(NewAdd);

        QMetaObject::connectSlotsByName(NewAdd);
    } // setupUi

    void retranslateUi(QDialog *NewAdd)
    {
        NewAdd->setWindowTitle(QApplication::translate("NewAdd", "Dialog", nullptr));
        label->setText(QApplication::translate("NewAdd", "\345\247\223\345\220\215", nullptr));
        label_2->setText(QApplication::translate("NewAdd", "\346\200\247\345\210\253", nullptr));
        label_3->setText(QApplication::translate("NewAdd", "\347\224\265\350\257\235", nullptr));
        label_4->setText(QApplication::translate("NewAdd", "\351\202\256\347\256\261", nullptr));
        radioButton->setText(QApplication::translate("NewAdd", "\347\224\267", nullptr));
        radioButton_2->setText(QApplication::translate("NewAdd", "\345\245\263", nullptr));
        pushButton->setText(QApplication::translate("NewAdd", "\344\277\235\345\255\230", nullptr));
    } // retranslateUi

};

namespace Ui {
    class NewAdd: public Ui_NewAdd {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_NEWADD_H
