/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.12.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QGroupBox *groupBox_2;
    QWidget *widget;
    QVBoxLayout *verticalLayout;
    QComboBox *comboBox;
    QPushButton *pbn_temperature;
    QPushButton *pbn_history;
    QPushButton *pbn_manage;
    QPushButton *pbn_video;
    QPushButton *pbn_his_video;
    QPushButton *pbn_CustManage;
    QStackedWidget *stackedWidget;
    QWidget *page_0;
    QLabel *label;
    QWidget *page_1;
    QGroupBox *groupBox;
    QLabel *label_video;
    QToolButton *tbn_close;
    QGroupBox *groupBox_4;
    QFrame *frame;
    QLabel *label_IsDoor;
    QLabel *label_door;
    QLabel *label_IsUse;
    QGroupBox *groupBox_6;
    QLabel *label_disinfect;
    QLabel *label_foodtime;
    QLabel *label_watertime;
    QLabel *label_humidity;
    QLabel *label_temperature;
    QLabel *label_ShowTem;
    QLabel *label_Showhumi;
    QLabel *label_foodtime2;
    QLabel *label_watertime2;
    QLabel *label_disinfect2;
    QWidget *page_2;
    QGroupBox *groupBox_5;
    QLabel *label_video_2;
    QGroupBox *groupBox_10;
    QFrame *frame_2;
    QLabel *label_IsDoor_2;
    QLabel *label_door_2;
    QLabel *label_IsUse_2;
    QGroupBox *groupBox_13;
    QLabel *label_disinfect_2;
    QLabel *label_foodtime_2;
    QLabel *label_watertime_2;
    QLabel *label_humidity_2;
    QLabel *label_temperature_2;
    QLabel *label_ShowTem_2;
    QLabel *label_Showhumi_2;
    QLabel *label_foodtime2_2;
    QLabel *label_watertime2_2;
    QLabel *label_disinfect2_2;
    QWidget *page_3;
    QGroupBox *groupBox_7;
    QLabel *label_video_3;
    QGroupBox *groupBox_14;
    QFrame *frame_3;
    QLabel *label_IsDoor_3;
    QLabel *label_door_3;
    QLabel *label_IsUse_3;
    QGroupBox *groupBox_15;
    QLabel *label_disinfect_3;
    QLabel *label_foodtime_3;
    QLabel *label_watertime_3;
    QLabel *label_humidity_3;
    QLabel *label_temperature_3;
    QLabel *label_ShowTem_3;
    QLabel *label_Showhumi_3;
    QLabel *label_foodtime2_3;
    QLabel *label_watertime2_3;
    QLabel *label_disinfect2_3;
    QWidget *page_4;
    QGroupBox *groupBox_8;
    QWidget *page_5;
    QGroupBox *groupBox_9;
    QWidget *page_6;
    QGroupBox *groupBox_11;
    QTableWidget *tableWidget;
    QPushButton *pbn_add;
    QPushButton *pbn_delete;
    QLineEdit *lineEdit_search;
    QPushButton *pbn_edit;
    QStatusBar *statusBar;
    QMenuBar *menuBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(1149, 688);
        MainWindow->setMinimumSize(QSize(1149, 688));
        MainWindow->setMaximumSize(QSize(1149, 688));
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        groupBox_2 = new QGroupBox(centralWidget);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        groupBox_2->setGeometry(QRect(10, 20, 131, 611));
        QFont font;
        font.setPointSize(11);
        groupBox_2->setFont(font);
        widget = new QWidget(groupBox_2);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(10, 40, 111, 341));
        QFont font1;
        font1.setPointSize(10);
        widget->setFont(font1);
        verticalLayout = new QVBoxLayout(widget);
        verticalLayout->setSpacing(8);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setSizeConstraint(QLayout::SetDefaultConstraint);
        verticalLayout->setContentsMargins(0, 0, 2, 2);
        comboBox = new QComboBox(widget);
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->setObjectName(QString::fromUtf8("comboBox"));
        QFont font2;
        font2.setPointSize(12);
        comboBox->setFont(font2);
        comboBox->setCursor(QCursor(Qt::ArrowCursor));
        comboBox->setContextMenuPolicy(Qt::NoContextMenu);
        comboBox->setAcceptDrops(false);
        comboBox->setLayoutDirection(Qt::LeftToRight);
        comboBox->setAutoFillBackground(true);
        comboBox->setEditable(false);
        comboBox->setMaxVisibleItems(10);
        comboBox->setMaxCount(10);
        comboBox->setSizeAdjustPolicy(QComboBox::AdjustToContentsOnFirstShow);
        comboBox->setDuplicatesEnabled(false);
        comboBox->setFrame(true);

        verticalLayout->addWidget(comboBox);

        pbn_temperature = new QPushButton(widget);
        pbn_temperature->setObjectName(QString::fromUtf8("pbn_temperature"));
        QSizePolicy sizePolicy(QSizePolicy::Minimum, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(pbn_temperature->sizePolicy().hasHeightForWidth());
        pbn_temperature->setSizePolicy(sizePolicy);
        pbn_temperature->setFont(font);
        pbn_temperature->setCursor(QCursor(Qt::PointingHandCursor));
        pbn_temperature->setFocusPolicy(Qt::StrongFocus);
        pbn_temperature->setToolTipDuration(-1);
        pbn_temperature->setAutoFillBackground(true);
        pbn_temperature->setAutoDefault(false);
        pbn_temperature->setFlat(false);

        verticalLayout->addWidget(pbn_temperature);

        pbn_history = new QPushButton(widget);
        pbn_history->setObjectName(QString::fromUtf8("pbn_history"));
        sizePolicy.setHeightForWidth(pbn_history->sizePolicy().hasHeightForWidth());
        pbn_history->setSizePolicy(sizePolicy);
        pbn_history->setFont(font);
        pbn_history->setCursor(QCursor(Qt::PointingHandCursor));
        pbn_history->setAutoFillBackground(true);

        verticalLayout->addWidget(pbn_history);

        pbn_manage = new QPushButton(widget);
        pbn_manage->setObjectName(QString::fromUtf8("pbn_manage"));
        sizePolicy.setHeightForWidth(pbn_manage->sizePolicy().hasHeightForWidth());
        pbn_manage->setSizePolicy(sizePolicy);
        pbn_manage->setFont(font);
        pbn_manage->setCursor(QCursor(Qt::PointingHandCursor));

        verticalLayout->addWidget(pbn_manage);

        pbn_video = new QPushButton(widget);
        pbn_video->setObjectName(QString::fromUtf8("pbn_video"));
        sizePolicy.setHeightForWidth(pbn_video->sizePolicy().hasHeightForWidth());
        pbn_video->setSizePolicy(sizePolicy);
        pbn_video->setFont(font);
        pbn_video->setCursor(QCursor(Qt::PointingHandCursor));

        verticalLayout->addWidget(pbn_video);

        pbn_his_video = new QPushButton(widget);
        pbn_his_video->setObjectName(QString::fromUtf8("pbn_his_video"));
        sizePolicy.setHeightForWidth(pbn_his_video->sizePolicy().hasHeightForWidth());
        pbn_his_video->setSizePolicy(sizePolicy);
        pbn_his_video->setFont(font);
        pbn_his_video->setCursor(QCursor(Qt::PointingHandCursor));

        verticalLayout->addWidget(pbn_his_video);

        pbn_CustManage = new QPushButton(groupBox_2);
        pbn_CustManage->setObjectName(QString::fromUtf8("pbn_CustManage"));
        pbn_CustManage->setGeometry(QRect(10, 390, 109, 51));
        sizePolicy.setHeightForWidth(pbn_CustManage->sizePolicy().hasHeightForWidth());
        pbn_CustManage->setSizePolicy(sizePolicy);
        pbn_CustManage->setFont(font2);
        pbn_CustManage->setCursor(QCursor(Qt::PointingHandCursor));
        pbn_CustManage->setTabletTracking(false);
        pbn_CustManage->setCheckable(false);
        pbn_CustManage->setAutoExclusive(false);
        stackedWidget = new QStackedWidget(centralWidget);
        stackedWidget->setObjectName(QString::fromUtf8("stackedWidget"));
        stackedWidget->setGeometry(QRect(150, 10, 981, 631));
        stackedWidget->setFont(font);
        page_0 = new QWidget();
        page_0->setObjectName(QString::fromUtf8("page_0"));
        label = new QLabel(page_0);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(430, 290, 101, 61));
        stackedWidget->addWidget(page_0);
        page_1 = new QWidget();
        page_1->setObjectName(QString::fromUtf8("page_1"));
        groupBox = new QGroupBox(page_1);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setGeometry(QRect(10, 10, 811, 611));
        groupBox->setFocusPolicy(Qt::NoFocus);
        label_video = new QLabel(groupBox);
        label_video->setObjectName(QString::fromUtf8("label_video"));
        label_video->setGeometry(QRect(10, 30, 791, 571));
        QFont font3;
        font3.setPointSize(14);
        label_video->setFont(font3);
        label_video->setFrameShape(QFrame::WinPanel);
        label_video->setFrameShadow(QFrame::Plain);
        label_video->setAlignment(Qt::AlignCenter);
        tbn_close = new QToolButton(groupBox);
        tbn_close->setObjectName(QString::fromUtf8("tbn_close"));
        tbn_close->setGeometry(QRect(740, 40, 48, 41));
        groupBox_4 = new QGroupBox(page_1);
        groupBox_4->setObjectName(QString::fromUtf8("groupBox_4"));
        groupBox_4->setGeometry(QRect(830, 10, 141, 141));
        groupBox_4->setFont(font);
        frame = new QFrame(groupBox_4);
        frame->setObjectName(QString::fromUtf8("frame"));
        frame->setGeometry(QRect(10, 30, 120, 101));
        frame->setFont(font);
        frame->setFrameShape(QFrame::WinPanel);
        frame->setFrameShadow(QFrame::Raised);
        label_IsDoor = new QLabel(frame);
        label_IsDoor->setObjectName(QString::fromUtf8("label_IsDoor"));
        label_IsDoor->setGeometry(QRect(50, 60, 61, 31));
        QFont font4;
        font4.setPointSize(12);
        font4.setBold(true);
        font4.setWeight(75);
        label_IsDoor->setFont(font4);
        label_IsDoor->setAlignment(Qt::AlignCenter);
        label_door = new QLabel(frame);
        label_door->setObjectName(QString::fromUtf8("label_door"));
        label_door->setGeometry(QRect(10, 60, 31, 31));
        label_door->setFont(font4);
        label_door->setAlignment(Qt::AlignCenter);
        label_IsUse = new QLabel(frame);
        label_IsUse->setObjectName(QString::fromUtf8("label_IsUse"));
        label_IsUse->setGeometry(QRect(20, 20, 81, 21));
        label_IsUse->setFont(font4);
        label_IsUse->setAlignment(Qt::AlignCenter);
        groupBox_6 = new QGroupBox(page_1);
        groupBox_6->setObjectName(QString::fromUtf8("groupBox_6"));
        groupBox_6->setGeometry(QRect(830, 180, 151, 441));
        groupBox_6->setFont(font);
        label_disinfect = new QLabel(groupBox_6);
        label_disinfect->setObjectName(QString::fromUtf8("label_disinfect"));
        label_disinfect->setGeometry(QRect(10, 360, 131, 31));
        label_disinfect->setFont(font4);
        label_disinfect->setFrameShape(QFrame::WinPanel);
        label_disinfect->setFrameShadow(QFrame::Raised);
        label_disinfect->setAlignment(Qt::AlignCenter);
        label_foodtime = new QLabel(groupBox_6);
        label_foodtime->setObjectName(QString::fromUtf8("label_foodtime"));
        label_foodtime->setGeometry(QRect(10, 200, 131, 31));
        label_foodtime->setFont(font4);
        label_foodtime->setFrameShape(QFrame::WinPanel);
        label_foodtime->setFrameShadow(QFrame::Raised);
        label_foodtime->setAlignment(Qt::AlignCenter);
        label_watertime = new QLabel(groupBox_6);
        label_watertime->setObjectName(QString::fromUtf8("label_watertime"));
        label_watertime->setGeometry(QRect(10, 280, 131, 31));
        label_watertime->setFont(font4);
        label_watertime->setFrameShape(QFrame::WinPanel);
        label_watertime->setFrameShadow(QFrame::Raised);
        label_watertime->setAlignment(Qt::AlignCenter);
        label_humidity = new QLabel(groupBox_6);
        label_humidity->setObjectName(QString::fromUtf8("label_humidity"));
        label_humidity->setGeometry(QRect(30, 120, 71, 31));
        label_humidity->setFont(font4);
        label_humidity->setFrameShape(QFrame::WinPanel);
        label_humidity->setFrameShadow(QFrame::Raised);
        label_humidity->setAlignment(Qt::AlignCenter);
        label_temperature = new QLabel(groupBox_6);
        label_temperature->setObjectName(QString::fromUtf8("label_temperature"));
        label_temperature->setGeometry(QRect(30, 40, 71, 31));
        label_temperature->setFont(font4);
        label_temperature->setFrameShape(QFrame::WinPanel);
        label_temperature->setFrameShadow(QFrame::Raised);
        label_temperature->setAlignment(Qt::AlignCenter);
        label_ShowTem = new QLabel(groupBox_6);
        label_ShowTem->setObjectName(QString::fromUtf8("label_ShowTem"));
        label_ShowTem->setGeometry(QRect(20, 80, 101, 31));
        label_ShowTem->setFrameShape(QFrame::Box);
        label_Showhumi = new QLabel(groupBox_6);
        label_Showhumi->setObjectName(QString::fromUtf8("label_Showhumi"));
        label_Showhumi->setGeometry(QRect(20, 160, 101, 31));
        label_Showhumi->setFrameShape(QFrame::Box);
        label_foodtime2 = new QLabel(groupBox_6);
        label_foodtime2->setObjectName(QString::fromUtf8("label_foodtime2"));
        label_foodtime2->setGeometry(QRect(20, 240, 101, 31));
        label_foodtime2->setFrameShape(QFrame::Box);
        label_watertime2 = new QLabel(groupBox_6);
        label_watertime2->setObjectName(QString::fromUtf8("label_watertime2"));
        label_watertime2->setGeometry(QRect(20, 320, 101, 31));
        label_watertime2->setFrameShape(QFrame::Box);
        label_disinfect2 = new QLabel(groupBox_6);
        label_disinfect2->setObjectName(QString::fromUtf8("label_disinfect2"));
        label_disinfect2->setGeometry(QRect(20, 400, 101, 31));
        label_disinfect2->setFrameShape(QFrame::Box);
        stackedWidget->addWidget(page_1);
        page_2 = new QWidget();
        page_2->setObjectName(QString::fromUtf8("page_2"));
        groupBox_5 = new QGroupBox(page_2);
        groupBox_5->setObjectName(QString::fromUtf8("groupBox_5"));
        groupBox_5->setGeometry(QRect(10, 10, 811, 611));
        groupBox_5->setFocusPolicy(Qt::NoFocus);
        label_video_2 = new QLabel(groupBox_5);
        label_video_2->setObjectName(QString::fromUtf8("label_video_2"));
        label_video_2->setGeometry(QRect(10, 30, 791, 571));
        label_video_2->setFont(font3);
        label_video_2->setFrameShape(QFrame::WinPanel);
        label_video_2->setFrameShadow(QFrame::Plain);
        label_video_2->setAlignment(Qt::AlignCenter);
        groupBox_10 = new QGroupBox(page_2);
        groupBox_10->setObjectName(QString::fromUtf8("groupBox_10"));
        groupBox_10->setGeometry(QRect(830, 10, 141, 141));
        groupBox_10->setFont(font);
        frame_2 = new QFrame(groupBox_10);
        frame_2->setObjectName(QString::fromUtf8("frame_2"));
        frame_2->setGeometry(QRect(10, 30, 120, 101));
        frame_2->setFont(font);
        frame_2->setFrameShape(QFrame::WinPanel);
        frame_2->setFrameShadow(QFrame::Raised);
        label_IsDoor_2 = new QLabel(frame_2);
        label_IsDoor_2->setObjectName(QString::fromUtf8("label_IsDoor_2"));
        label_IsDoor_2->setGeometry(QRect(50, 60, 61, 31));
        label_IsDoor_2->setFont(font4);
        label_IsDoor_2->setAlignment(Qt::AlignCenter);
        label_door_2 = new QLabel(frame_2);
        label_door_2->setObjectName(QString::fromUtf8("label_door_2"));
        label_door_2->setGeometry(QRect(10, 60, 31, 31));
        label_door_2->setFont(font4);
        label_door_2->setAlignment(Qt::AlignCenter);
        label_IsUse_2 = new QLabel(frame_2);
        label_IsUse_2->setObjectName(QString::fromUtf8("label_IsUse_2"));
        label_IsUse_2->setGeometry(QRect(20, 20, 81, 21));
        label_IsUse_2->setFont(font4);
        label_IsUse_2->setAlignment(Qt::AlignCenter);
        groupBox_13 = new QGroupBox(page_2);
        groupBox_13->setObjectName(QString::fromUtf8("groupBox_13"));
        groupBox_13->setGeometry(QRect(830, 180, 151, 441));
        groupBox_13->setFont(font);
        label_disinfect_2 = new QLabel(groupBox_13);
        label_disinfect_2->setObjectName(QString::fromUtf8("label_disinfect_2"));
        label_disinfect_2->setGeometry(QRect(10, 360, 131, 31));
        label_disinfect_2->setFont(font4);
        label_disinfect_2->setFrameShape(QFrame::WinPanel);
        label_disinfect_2->setFrameShadow(QFrame::Raised);
        label_disinfect_2->setAlignment(Qt::AlignCenter);
        label_foodtime_2 = new QLabel(groupBox_13);
        label_foodtime_2->setObjectName(QString::fromUtf8("label_foodtime_2"));
        label_foodtime_2->setGeometry(QRect(10, 200, 131, 31));
        label_foodtime_2->setFont(font4);
        label_foodtime_2->setFrameShape(QFrame::WinPanel);
        label_foodtime_2->setFrameShadow(QFrame::Raised);
        label_foodtime_2->setAlignment(Qt::AlignCenter);
        label_watertime_2 = new QLabel(groupBox_13);
        label_watertime_2->setObjectName(QString::fromUtf8("label_watertime_2"));
        label_watertime_2->setGeometry(QRect(10, 280, 131, 31));
        label_watertime_2->setFont(font4);
        label_watertime_2->setFrameShape(QFrame::WinPanel);
        label_watertime_2->setFrameShadow(QFrame::Raised);
        label_watertime_2->setAlignment(Qt::AlignCenter);
        label_humidity_2 = new QLabel(groupBox_13);
        label_humidity_2->setObjectName(QString::fromUtf8("label_humidity_2"));
        label_humidity_2->setGeometry(QRect(30, 120, 71, 31));
        label_humidity_2->setFont(font4);
        label_humidity_2->setFrameShape(QFrame::WinPanel);
        label_humidity_2->setFrameShadow(QFrame::Raised);
        label_humidity_2->setAlignment(Qt::AlignCenter);
        label_temperature_2 = new QLabel(groupBox_13);
        label_temperature_2->setObjectName(QString::fromUtf8("label_temperature_2"));
        label_temperature_2->setGeometry(QRect(30, 40, 71, 31));
        label_temperature_2->setFont(font4);
        label_temperature_2->setFrameShape(QFrame::WinPanel);
        label_temperature_2->setFrameShadow(QFrame::Raised);
        label_temperature_2->setAlignment(Qt::AlignCenter);
        label_ShowTem_2 = new QLabel(groupBox_13);
        label_ShowTem_2->setObjectName(QString::fromUtf8("label_ShowTem_2"));
        label_ShowTem_2->setGeometry(QRect(20, 80, 101, 31));
        label_ShowTem_2->setFrameShape(QFrame::Box);
        label_Showhumi_2 = new QLabel(groupBox_13);
        label_Showhumi_2->setObjectName(QString::fromUtf8("label_Showhumi_2"));
        label_Showhumi_2->setGeometry(QRect(20, 160, 101, 31));
        label_Showhumi_2->setFrameShape(QFrame::Box);
        label_foodtime2_2 = new QLabel(groupBox_13);
        label_foodtime2_2->setObjectName(QString::fromUtf8("label_foodtime2_2"));
        label_foodtime2_2->setGeometry(QRect(20, 240, 101, 31));
        label_foodtime2_2->setFrameShape(QFrame::Box);
        label_watertime2_2 = new QLabel(groupBox_13);
        label_watertime2_2->setObjectName(QString::fromUtf8("label_watertime2_2"));
        label_watertime2_2->setGeometry(QRect(20, 320, 101, 31));
        label_watertime2_2->setFrameShape(QFrame::Box);
        label_disinfect2_2 = new QLabel(groupBox_13);
        label_disinfect2_2->setObjectName(QString::fromUtf8("label_disinfect2_2"));
        label_disinfect2_2->setGeometry(QRect(20, 400, 101, 31));
        label_disinfect2_2->setFrameShape(QFrame::Box);
        stackedWidget->addWidget(page_2);
        page_3 = new QWidget();
        page_3->setObjectName(QString::fromUtf8("page_3"));
        groupBox_7 = new QGroupBox(page_3);
        groupBox_7->setObjectName(QString::fromUtf8("groupBox_7"));
        groupBox_7->setGeometry(QRect(10, 10, 811, 611));
        groupBox_7->setFocusPolicy(Qt::NoFocus);
        label_video_3 = new QLabel(groupBox_7);
        label_video_3->setObjectName(QString::fromUtf8("label_video_3"));
        label_video_3->setGeometry(QRect(10, 30, 791, 571));
        label_video_3->setFont(font3);
        label_video_3->setFrameShape(QFrame::WinPanel);
        label_video_3->setFrameShadow(QFrame::Plain);
        label_video_3->setAlignment(Qt::AlignCenter);
        groupBox_14 = new QGroupBox(page_3);
        groupBox_14->setObjectName(QString::fromUtf8("groupBox_14"));
        groupBox_14->setGeometry(QRect(830, 10, 141, 141));
        groupBox_14->setFont(font);
        frame_3 = new QFrame(groupBox_14);
        frame_3->setObjectName(QString::fromUtf8("frame_3"));
        frame_3->setGeometry(QRect(10, 30, 120, 101));
        frame_3->setFont(font);
        frame_3->setFrameShape(QFrame::WinPanel);
        frame_3->setFrameShadow(QFrame::Raised);
        label_IsDoor_3 = new QLabel(frame_3);
        label_IsDoor_3->setObjectName(QString::fromUtf8("label_IsDoor_3"));
        label_IsDoor_3->setGeometry(QRect(50, 60, 61, 31));
        label_IsDoor_3->setFont(font4);
        label_IsDoor_3->setAlignment(Qt::AlignCenter);
        label_door_3 = new QLabel(frame_3);
        label_door_3->setObjectName(QString::fromUtf8("label_door_3"));
        label_door_3->setGeometry(QRect(10, 60, 31, 31));
        label_door_3->setFont(font4);
        label_door_3->setAlignment(Qt::AlignCenter);
        label_IsUse_3 = new QLabel(frame_3);
        label_IsUse_3->setObjectName(QString::fromUtf8("label_IsUse_3"));
        label_IsUse_3->setGeometry(QRect(20, 20, 81, 21));
        label_IsUse_3->setFont(font4);
        label_IsUse_3->setAlignment(Qt::AlignCenter);
        groupBox_15 = new QGroupBox(page_3);
        groupBox_15->setObjectName(QString::fromUtf8("groupBox_15"));
        groupBox_15->setGeometry(QRect(830, 180, 151, 441));
        groupBox_15->setFont(font);
        label_disinfect_3 = new QLabel(groupBox_15);
        label_disinfect_3->setObjectName(QString::fromUtf8("label_disinfect_3"));
        label_disinfect_3->setGeometry(QRect(10, 360, 131, 31));
        label_disinfect_3->setFont(font4);
        label_disinfect_3->setFrameShape(QFrame::WinPanel);
        label_disinfect_3->setFrameShadow(QFrame::Raised);
        label_disinfect_3->setAlignment(Qt::AlignCenter);
        label_foodtime_3 = new QLabel(groupBox_15);
        label_foodtime_3->setObjectName(QString::fromUtf8("label_foodtime_3"));
        label_foodtime_3->setGeometry(QRect(10, 200, 131, 31));
        label_foodtime_3->setFont(font4);
        label_foodtime_3->setFrameShape(QFrame::WinPanel);
        label_foodtime_3->setFrameShadow(QFrame::Raised);
        label_foodtime_3->setAlignment(Qt::AlignCenter);
        label_watertime_3 = new QLabel(groupBox_15);
        label_watertime_3->setObjectName(QString::fromUtf8("label_watertime_3"));
        label_watertime_3->setGeometry(QRect(10, 280, 131, 31));
        label_watertime_3->setFont(font4);
        label_watertime_3->setFrameShape(QFrame::WinPanel);
        label_watertime_3->setFrameShadow(QFrame::Raised);
        label_watertime_3->setAlignment(Qt::AlignCenter);
        label_humidity_3 = new QLabel(groupBox_15);
        label_humidity_3->setObjectName(QString::fromUtf8("label_humidity_3"));
        label_humidity_3->setGeometry(QRect(30, 120, 71, 31));
        label_humidity_3->setFont(font4);
        label_humidity_3->setFrameShape(QFrame::WinPanel);
        label_humidity_3->setFrameShadow(QFrame::Raised);
        label_humidity_3->setAlignment(Qt::AlignCenter);
        label_temperature_3 = new QLabel(groupBox_15);
        label_temperature_3->setObjectName(QString::fromUtf8("label_temperature_3"));
        label_temperature_3->setGeometry(QRect(30, 40, 71, 31));
        label_temperature_3->setFont(font4);
        label_temperature_3->setFrameShape(QFrame::WinPanel);
        label_temperature_3->setFrameShadow(QFrame::Raised);
        label_temperature_3->setAlignment(Qt::AlignCenter);
        label_ShowTem_3 = new QLabel(groupBox_15);
        label_ShowTem_3->setObjectName(QString::fromUtf8("label_ShowTem_3"));
        label_ShowTem_3->setGeometry(QRect(20, 80, 101, 31));
        label_ShowTem_3->setFrameShape(QFrame::Box);
        label_Showhumi_3 = new QLabel(groupBox_15);
        label_Showhumi_3->setObjectName(QString::fromUtf8("label_Showhumi_3"));
        label_Showhumi_3->setGeometry(QRect(20, 160, 101, 31));
        label_Showhumi_3->setFrameShape(QFrame::Box);
        label_foodtime2_3 = new QLabel(groupBox_15);
        label_foodtime2_3->setObjectName(QString::fromUtf8("label_foodtime2_3"));
        label_foodtime2_3->setGeometry(QRect(20, 240, 101, 31));
        label_foodtime2_3->setFrameShape(QFrame::Box);
        label_watertime2_3 = new QLabel(groupBox_15);
        label_watertime2_3->setObjectName(QString::fromUtf8("label_watertime2_3"));
        label_watertime2_3->setGeometry(QRect(20, 320, 101, 31));
        label_watertime2_3->setFrameShape(QFrame::Box);
        label_disinfect2_3 = new QLabel(groupBox_15);
        label_disinfect2_3->setObjectName(QString::fromUtf8("label_disinfect2_3"));
        label_disinfect2_3->setGeometry(QRect(20, 400, 101, 31));
        label_disinfect2_3->setFrameShape(QFrame::Box);
        stackedWidget->addWidget(page_3);
        page_4 = new QWidget();
        page_4->setObjectName(QString::fromUtf8("page_4"));
        groupBox_8 = new QGroupBox(page_4);
        groupBox_8->setObjectName(QString::fromUtf8("groupBox_8"));
        groupBox_8->setGeometry(QRect(10, 10, 971, 611));
        groupBox_8->setFocusPolicy(Qt::NoFocus);
        stackedWidget->addWidget(page_4);
        page_5 = new QWidget();
        page_5->setObjectName(QString::fromUtf8("page_5"));
        groupBox_9 = new QGroupBox(page_5);
        groupBox_9->setObjectName(QString::fromUtf8("groupBox_9"));
        groupBox_9->setGeometry(QRect(10, 10, 971, 611));
        groupBox_9->setFocusPolicy(Qt::NoFocus);
        stackedWidget->addWidget(page_5);
        page_6 = new QWidget();
        page_6->setObjectName(QString::fromUtf8("page_6"));
        groupBox_11 = new QGroupBox(page_6);
        groupBox_11->setObjectName(QString::fromUtf8("groupBox_11"));
        groupBox_11->setGeometry(QRect(10, 10, 961, 611));
        groupBox_11->setFocusPolicy(Qt::NoFocus);
        tableWidget = new QTableWidget(groupBox_11);
        tableWidget->setObjectName(QString::fromUtf8("tableWidget"));
        tableWidget->setGeometry(QRect(0, 80, 961, 531));
        tableWidget->setFont(font4);
        pbn_add = new QPushButton(groupBox_11);
        pbn_add->setObjectName(QString::fromUtf8("pbn_add"));
        pbn_add->setGeometry(QRect(20, 30, 91, 41));
        pbn_add->setFont(font2);
        pbn_add->setCursor(QCursor(Qt::PointingHandCursor));
        pbn_delete = new QPushButton(groupBox_11);
        pbn_delete->setObjectName(QString::fromUtf8("pbn_delete"));
        pbn_delete->setGeometry(QRect(130, 30, 101, 41));
        pbn_delete->setFont(font2);
        pbn_delete->setCursor(QCursor(Qt::PointingHandCursor));
        lineEdit_search = new QLineEdit(groupBox_11);
        lineEdit_search->setObjectName(QString::fromUtf8("lineEdit_search"));
        lineEdit_search->setGeometry(QRect(680, 30, 261, 41));
        lineEdit_search->setFont(font3);
        pbn_edit = new QPushButton(groupBox_11);
        pbn_edit->setObjectName(QString::fromUtf8("pbn_edit"));
        pbn_edit->setGeometry(QRect(250, 30, 101, 41));
        pbn_edit->setFont(font2);
        pbn_edit->setCursor(QCursor(Qt::PointingHandCursor));
        stackedWidget->addWidget(page_6);
        MainWindow->setCentralWidget(centralWidget);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        MainWindow->setStatusBar(statusBar);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 1149, 25));
        MainWindow->setMenuBar(menuBar);

        retranslateUi(MainWindow);

        pbn_temperature->setDefault(false);
        stackedWidget->setCurrentIndex(6);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", nullptr));
        groupBox_2->setTitle(QApplication::translate("MainWindow", "\344\270\232\345\212\241\347\256\241\347\220\206", nullptr));
        comboBox->setItemText(0, QApplication::translate("MainWindow", "\351\200\211\346\213\251\347\252\227\345\217\243", nullptr));
        comboBox->setItemText(1, QApplication::translate("MainWindow", "1", nullptr));
        comboBox->setItemText(2, QApplication::translate("MainWindow", "2", nullptr));
        comboBox->setItemText(3, QApplication::translate("MainWindow", "3", nullptr));

        comboBox->setCurrentText(QApplication::translate("MainWindow", "\351\200\211\346\213\251\347\252\227\345\217\243", nullptr));
#ifndef QT_NO_TOOLTIP
        pbn_temperature->setToolTip(QString());
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_STATUSTIP
        pbn_temperature->setStatusTip(QString());
#endif // QT_NO_STATUSTIP
        pbn_temperature->setText(QApplication::translate("MainWindow", "\350\216\267\345\217\226\346\270\251\346\271\277\345\272\246", nullptr));
#ifndef QT_NO_STATUSTIP
        pbn_history->setStatusTip(QString());
#endif // QT_NO_STATUSTIP
        pbn_history->setText(QApplication::translate("MainWindow", "\345\216\206\345\217\262\350\256\260\345\275\225", nullptr));
#ifndef QT_NO_STATUSTIP
        pbn_manage->setStatusTip(QString());
#endif // QT_NO_STATUSTIP
        pbn_manage->setText(QApplication::translate("MainWindow", "\344\272\221\345\217\260\346\223\215\344\275\234", nullptr));
#ifndef QT_NO_STATUSTIP
        pbn_video->setStatusTip(QString());
#endif // QT_NO_STATUSTIP
        pbn_video->setText(QApplication::translate("MainWindow", "\346\211\223\345\274\200\347\233\221\346\216\247", nullptr));
#ifndef QT_NO_STATUSTIP
        pbn_his_video->setStatusTip(QString());
#endif // QT_NO_STATUSTIP
        pbn_his_video->setText(QApplication::translate("MainWindow", "\345\216\206\345\217\262\350\247\206\351\242\221", nullptr));
#ifndef QT_NO_STATUSTIP
        pbn_CustManage->setStatusTip(QString());
#endif // QT_NO_STATUSTIP
        pbn_CustManage->setText(QApplication::translate("MainWindow", "\345\256\242\346\210\267\347\256\241\347\220\206", nullptr));
        label->setText(QApplication::translate("MainWindow", "\346\234\252\351\200\211\346\213\251\347\252\227\345\217\243", nullptr));
        groupBox->setTitle(QApplication::translate("MainWindow", "\347\252\227\345\217\243\344\270\200", nullptr));
        label_video->setText(QApplication::translate("MainWindow", "\347\233\221\346\216\247", nullptr));
        tbn_close->setText(QApplication::translate("MainWindow", "\345\205\263\351\227\255", nullptr));
        groupBox_4->setTitle(QApplication::translate("MainWindow", "\350\257\246\347\273\206\344\277\241\346\201\257", nullptr));
        label_IsDoor->setText(QApplication::translate("MainWindow", "\345\205\263\351\227\255", nullptr));
        label_door->setText(QApplication::translate("MainWindow", "\351\227\250:", nullptr));
        label_IsUse->setText(QApplication::translate("MainWindow", "\346\234\252\350\242\253\344\275\277\347\224\250", nullptr));
        groupBox_6->setTitle(QApplication::translate("MainWindow", "\347\212\266\346\200\201", nullptr));
        label_disinfect->setText(QApplication::translate("MainWindow", "\344\270\212\346\254\241\346\266\210\346\257\222\346\227\266\351\227\264", nullptr));
        label_foodtime->setText(QApplication::translate("MainWindow", "\344\270\212\346\254\241\346\212\225\351\243\237\346\227\266\351\227\264", nullptr));
        label_watertime->setText(QApplication::translate("MainWindow", "\344\270\212\346\254\241\345\226\202\346\260\264\346\227\266\351\227\264", nullptr));
        label_humidity->setText(QApplication::translate("MainWindow", "\346\271\277\345\272\246", nullptr));
        label_temperature->setText(QApplication::translate("MainWindow", "\346\270\251\345\272\246", nullptr));
        label_ShowTem->setText(QString());
        label_Showhumi->setText(QString());
        label_foodtime2->setText(QString());
        label_watertime2->setText(QString());
        label_disinfect2->setText(QString());
        groupBox_5->setTitle(QApplication::translate("MainWindow", "\347\252\227\345\217\243\344\272\214", nullptr));
        label_video_2->setText(QApplication::translate("MainWindow", "\347\233\221\346\216\247", nullptr));
        groupBox_10->setTitle(QApplication::translate("MainWindow", "\350\257\246\347\273\206\344\277\241\346\201\257", nullptr));
        label_IsDoor_2->setText(QApplication::translate("MainWindow", "\345\205\263\351\227\255", nullptr));
        label_door_2->setText(QApplication::translate("MainWindow", "\351\227\250:", nullptr));
        label_IsUse_2->setText(QApplication::translate("MainWindow", "\346\234\252\350\242\253\344\275\277\347\224\250", nullptr));
        groupBox_13->setTitle(QApplication::translate("MainWindow", "\347\212\266\346\200\201", nullptr));
        label_disinfect_2->setText(QApplication::translate("MainWindow", "\344\270\212\346\254\241\346\266\210\346\257\222\346\227\266\351\227\264", nullptr));
        label_foodtime_2->setText(QApplication::translate("MainWindow", "\344\270\212\346\254\241\346\212\225\351\243\237\346\227\266\351\227\264", nullptr));
        label_watertime_2->setText(QApplication::translate("MainWindow", "\344\270\212\346\254\241\345\226\202\346\260\264\346\227\266\351\227\264", nullptr));
        label_humidity_2->setText(QApplication::translate("MainWindow", "\346\271\277\345\272\246", nullptr));
        label_temperature_2->setText(QApplication::translate("MainWindow", "\346\270\251\345\272\246", nullptr));
        label_ShowTem_2->setText(QString());
        label_Showhumi_2->setText(QString());
        label_foodtime2_2->setText(QString());
        label_watertime2_2->setText(QString());
        label_disinfect2_2->setText(QString());
        groupBox_7->setTitle(QApplication::translate("MainWindow", "\347\252\227\345\217\243\344\270\211", nullptr));
        label_video_3->setText(QApplication::translate("MainWindow", "\347\233\221\346\216\247", nullptr));
        groupBox_14->setTitle(QApplication::translate("MainWindow", "\350\257\246\347\273\206\344\277\241\346\201\257", nullptr));
        label_IsDoor_3->setText(QApplication::translate("MainWindow", "\345\205\263\351\227\255", nullptr));
        label_door_3->setText(QApplication::translate("MainWindow", "\351\227\250:", nullptr));
        label_IsUse_3->setText(QApplication::translate("MainWindow", "\346\234\252\350\242\253\344\275\277\347\224\250", nullptr));
        groupBox_15->setTitle(QApplication::translate("MainWindow", "\347\212\266\346\200\201", nullptr));
        label_disinfect_3->setText(QApplication::translate("MainWindow", "\344\270\212\346\254\241\346\266\210\346\257\222\346\227\266\351\227\264", nullptr));
        label_foodtime_3->setText(QApplication::translate("MainWindow", "\344\270\212\346\254\241\346\212\225\351\243\237\346\227\266\351\227\264", nullptr));
        label_watertime_3->setText(QApplication::translate("MainWindow", "\344\270\212\346\254\241\345\226\202\346\260\264\346\227\266\351\227\264", nullptr));
        label_humidity_3->setText(QApplication::translate("MainWindow", "\346\271\277\345\272\246", nullptr));
        label_temperature_3->setText(QApplication::translate("MainWindow", "\346\270\251\345\272\246", nullptr));
        label_ShowTem_3->setText(QString());
        label_Showhumi_3->setText(QString());
        label_foodtime2_3->setText(QString());
        label_watertime2_3->setText(QString());
        label_disinfect2_3->setText(QString());
        groupBox_8->setTitle(QApplication::translate("MainWindow", "\345\216\206\345\217\262\346\223\215\344\275\234\350\256\260\345\275\225", nullptr));
        groupBox_9->setTitle(QApplication::translate("MainWindow", "\344\272\221\345\217\260\346\223\215\344\275\234", nullptr));
        groupBox_11->setTitle(QApplication::translate("MainWindow", "\345\256\242\346\210\267\347\256\241\347\220\206", nullptr));
        pbn_add->setText(QApplication::translate("MainWindow", "\346\267\273\345\212\240", nullptr));
        pbn_delete->setText(QApplication::translate("MainWindow", "\345\210\240\351\231\244", nullptr));
        lineEdit_search->setText(QString());
        pbn_edit->setText(QApplication::translate("MainWindow", "\347\274\226\350\276\221", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
