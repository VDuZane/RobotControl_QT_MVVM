/********************************************************************************
** Form generated from reading UI file 'MotorControl_UI.ui'
**
** Created by: Qt User Interface Compiler version 5.15.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MOTORCONTROL_UI_H
#define UI_MOTORCONTROL_UI_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QScrollBar>
#include <QtWidgets/QSlider>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QGroupBox *groupBox;
    QWidget *gridLayoutWidget;
    QGridLayout *gridLayout;
    QPushButton *Disable_Button;
    QPushButton *Enable_Button;
    QSpacerItem *horizontalSpacer;
    QWidget *formLayoutWidget;
    QFormLayout *formLayout;
    QLabel *label;
    QSlider *Velocity_Cmd;
    QLabel *label_2;
    QHBoxLayout *horizontalLayout;
    QSlider *Pose_Cmd;
    QSpacerItem *verticalSpacer_7;
    QPushButton *Execute;
    QPushButton *Stop;
    QPushButton *E_Stop;
    QWidget *gridLayoutWidget_3;
    QGridLayout *gridLayout_3;
    QRadioButton *radioButton_6;
    QRadioButton *radioButton;
    QRadioButton *radioButton_2;
    QRadioButton *radioButton_5;
    QRadioButton *radioButton_3;
    QRadioButton *radioButton_7;
    QRadioButton *radioButton_4;
    QPushButton *Exit;
    QGroupBox *groupBox_2;
    QWidget *gridLayoutWidget_2;
    QGridLayout *gridLayout_2;
    QPushButton *Motor2_Disable;
    QPushButton *Motor4_Disable;
    QLabel *Motor6;
    QPushButton *Motor6_Disable;
    QLabel *Motor2;
    QPushButton *Motor3_Enable;
    QSlider *Motor6_Pose_Cmd;
    QPushButton *Motor5_Enable;
    QSpacerItem *verticalSpacer_5;
    QLabel *Motor7;
    QPushButton *Motor6_Enable;
    QPushButton *Motor3_Disable;
    QSlider *Motor1_Pose_Cmd;
    QPushButton *Motor1_Enable;
    QPushButton *Motor2_Enable;
    QLabel *Motor5;
    QSlider *Motor3_Pose_Cmd;
    QSpacerItem *verticalSpacer_2;
    QLabel *Motor4;
    QLabel *Motor3;
    QSpacerItem *verticalSpacer;
    QPushButton *Motor7_Disable;
    QLabel *Motor1;
    QSpacerItem *verticalSpacer_3;
    QPushButton *Motor5_Disable;
    QSpacerItem *verticalSpacer_4;
    QSlider *Motor2_Pose_Cmd;
    QPushButton *Motor1_Disable;
    QSlider *Motor7_Pose_Cmd;
    QPushButton *Motor4_Enable;
    QSlider *Motor5_Pose_Cmd;
    QPushButton *Motor7_Enable;
    QSlider *Motor4_Pose_Cmd;
    QSpacerItem *verticalSpacer_6;
    QPushButton *Enable_Button_2;
    QPushButton *Disable_Button_2;
    QPushButton *Disable_Button_3;
    QPushButton *NextDialog;
    QScrollBar *horizontalScrollBar;
    QScrollBar *verticalScrollBar;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(897, 558);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        groupBox = new QGroupBox(centralwidget);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setGeometry(QRect(460, 20, 371, 351));
        gridLayoutWidget = new QWidget(groupBox);
        gridLayoutWidget->setObjectName(QString::fromUtf8("gridLayoutWidget"));
        gridLayoutWidget->setGeometry(QRect(10, 150, 341, 41));
        gridLayout = new QGridLayout(gridLayoutWidget);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        Disable_Button = new QPushButton(gridLayoutWidget);
        Disable_Button->setObjectName(QString::fromUtf8("Disable_Button"));

        gridLayout->addWidget(Disable_Button, 0, 2, 1, 1);

        Enable_Button = new QPushButton(gridLayoutWidget);
        Enable_Button->setObjectName(QString::fromUtf8("Enable_Button"));

        gridLayout->addWidget(Enable_Button, 0, 0, 1, 1);

        horizontalSpacer = new QSpacerItem(110, 22, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer, 0, 1, 1, 1);

        formLayoutWidget = new QWidget(groupBox);
        formLayoutWidget->setObjectName(QString::fromUtf8("formLayoutWidget"));
        formLayoutWidget->setGeometry(QRect(10, 270, 341, 51));
        formLayout = new QFormLayout(formLayoutWidget);
        formLayout->setObjectName(QString::fromUtf8("formLayout"));
        formLayout->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(formLayoutWidget);
        label->setObjectName(QString::fromUtf8("label"));

        formLayout->setWidget(2, QFormLayout::LabelRole, label);

        Velocity_Cmd = new QSlider(formLayoutWidget);
        Velocity_Cmd->setObjectName(QString::fromUtf8("Velocity_Cmd"));
        Velocity_Cmd->setMinimum(-100);
        Velocity_Cmd->setMaximum(100);
        Velocity_Cmd->setOrientation(Qt::Horizontal);

        formLayout->setWidget(2, QFormLayout::FieldRole, Velocity_Cmd);

        label_2 = new QLabel(formLayoutWidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        formLayout->setWidget(0, QFormLayout::LabelRole, label_2);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(20);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        Pose_Cmd = new QSlider(formLayoutWidget);
        Pose_Cmd->setObjectName(QString::fromUtf8("Pose_Cmd"));
        Pose_Cmd->setOrientation(Qt::Horizontal);

        horizontalLayout->addWidget(Pose_Cmd);


        formLayout->setLayout(0, QFormLayout::FieldRole, horizontalLayout);

        verticalSpacer_7 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        formLayout->setItem(1, QFormLayout::FieldRole, verticalSpacer_7);

        Execute = new QPushButton(groupBox);
        Execute->setObjectName(QString::fromUtf8("Execute"));
        Execute->setGeometry(QRect(10, 200, 91, 41));
        Stop = new QPushButton(groupBox);
        Stop->setObjectName(QString::fromUtf8("Stop"));
        Stop->setGeometry(QRect(130, 200, 91, 41));
        E_Stop = new QPushButton(groupBox);
        E_Stop->setObjectName(QString::fromUtf8("E_Stop"));
        E_Stop->setGeometry(QRect(260, 200, 91, 41));
        gridLayoutWidget_3 = new QWidget(groupBox);
        gridLayoutWidget_3->setObjectName(QString::fromUtf8("gridLayoutWidget_3"));
        gridLayoutWidget_3->setGeometry(QRect(10, 30, 341, 112));
        gridLayout_3 = new QGridLayout(gridLayoutWidget_3);
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        gridLayout_3->setContentsMargins(0, 0, 0, 0);
        radioButton_6 = new QRadioButton(gridLayoutWidget_3);
        radioButton_6->setObjectName(QString::fromUtf8("radioButton_6"));

        gridLayout_3->addWidget(radioButton_6, 1, 1, 1, 1);

        radioButton = new QRadioButton(gridLayoutWidget_3);
        radioButton->setObjectName(QString::fromUtf8("radioButton"));

        gridLayout_3->addWidget(radioButton, 0, 0, 1, 1);

        radioButton_2 = new QRadioButton(gridLayoutWidget_3);
        radioButton_2->setObjectName(QString::fromUtf8("radioButton_2"));

        gridLayout_3->addWidget(radioButton_2, 1, 0, 1, 1);

        radioButton_5 = new QRadioButton(gridLayoutWidget_3);
        radioButton_5->setObjectName(QString::fromUtf8("radioButton_5"));

        gridLayout_3->addWidget(radioButton_5, 0, 1, 1, 1);

        radioButton_3 = new QRadioButton(gridLayoutWidget_3);
        radioButton_3->setObjectName(QString::fromUtf8("radioButton_3"));

        gridLayout_3->addWidget(radioButton_3, 2, 0, 1, 1);

        radioButton_7 = new QRadioButton(gridLayoutWidget_3);
        radioButton_7->setObjectName(QString::fromUtf8("radioButton_7"));

        gridLayout_3->addWidget(radioButton_7, 2, 1, 1, 1);

        radioButton_4 = new QRadioButton(gridLayoutWidget_3);
        radioButton_4->setObjectName(QString::fromUtf8("radioButton_4"));

        gridLayout_3->addWidget(radioButton_4, 3, 0, 1, 1);

        Exit = new QPushButton(centralwidget);
        Exit->setObjectName(QString::fromUtf8("Exit"));
        Exit->setGeometry(QRect(580, 420, 89, 25));
        groupBox_2 = new QGroupBox(centralwidget);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        groupBox_2->setGeometry(QRect(10, 20, 431, 391));
        gridLayoutWidget_2 = new QWidget(groupBox_2);
        gridLayoutWidget_2->setObjectName(QString::fromUtf8("gridLayoutWidget_2"));
        gridLayoutWidget_2->setGeometry(QRect(10, 70, 411, 311));
        gridLayout_2 = new QGridLayout(gridLayoutWidget_2);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        gridLayout_2->setContentsMargins(0, 0, 0, 0);
        Motor2_Disable = new QPushButton(gridLayoutWidget_2);
        Motor2_Disable->setObjectName(QString::fromUtf8("Motor2_Disable"));

        gridLayout_2->addWidget(Motor2_Disable, 2, 2, 1, 1);

        Motor4_Disable = new QPushButton(gridLayoutWidget_2);
        Motor4_Disable->setObjectName(QString::fromUtf8("Motor4_Disable"));

        gridLayout_2->addWidget(Motor4_Disable, 6, 2, 1, 1);

        Motor6 = new QLabel(gridLayoutWidget_2);
        Motor6->setObjectName(QString::fromUtf8("Motor6"));

        gridLayout_2->addWidget(Motor6, 10, 0, 1, 1);

        Motor6_Disable = new QPushButton(gridLayoutWidget_2);
        Motor6_Disable->setObjectName(QString::fromUtf8("Motor6_Disable"));

        gridLayout_2->addWidget(Motor6_Disable, 10, 2, 1, 1);

        Motor2 = new QLabel(gridLayoutWidget_2);
        Motor2->setObjectName(QString::fromUtf8("Motor2"));

        gridLayout_2->addWidget(Motor2, 2, 0, 1, 1);

        Motor3_Enable = new QPushButton(gridLayoutWidget_2);
        Motor3_Enable->setObjectName(QString::fromUtf8("Motor3_Enable"));

        gridLayout_2->addWidget(Motor3_Enable, 4, 1, 1, 1);

        Motor6_Pose_Cmd = new QSlider(gridLayoutWidget_2);
        Motor6_Pose_Cmd->setObjectName(QString::fromUtf8("Motor6_Pose_Cmd"));
        Motor6_Pose_Cmd->setOrientation(Qt::Horizontal);

        gridLayout_2->addWidget(Motor6_Pose_Cmd, 10, 4, 1, 1);

        Motor5_Enable = new QPushButton(gridLayoutWidget_2);
        Motor5_Enable->setObjectName(QString::fromUtf8("Motor5_Enable"));

        gridLayout_2->addWidget(Motor5_Enable, 8, 1, 1, 1);

        verticalSpacer_5 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_2->addItem(verticalSpacer_5, 9, 2, 1, 1);

        Motor7 = new QLabel(gridLayoutWidget_2);
        Motor7->setObjectName(QString::fromUtf8("Motor7"));

        gridLayout_2->addWidget(Motor7, 12, 0, 1, 1);

        Motor6_Enable = new QPushButton(gridLayoutWidget_2);
        Motor6_Enable->setObjectName(QString::fromUtf8("Motor6_Enable"));

        gridLayout_2->addWidget(Motor6_Enable, 10, 1, 1, 1);

        Motor3_Disable = new QPushButton(gridLayoutWidget_2);
        Motor3_Disable->setObjectName(QString::fromUtf8("Motor3_Disable"));

        gridLayout_2->addWidget(Motor3_Disable, 4, 2, 1, 1);

        Motor1_Pose_Cmd = new QSlider(gridLayoutWidget_2);
        Motor1_Pose_Cmd->setObjectName(QString::fromUtf8("Motor1_Pose_Cmd"));
        Motor1_Pose_Cmd->setOrientation(Qt::Horizontal);

        gridLayout_2->addWidget(Motor1_Pose_Cmd, 0, 4, 1, 1);

        Motor1_Enable = new QPushButton(gridLayoutWidget_2);
        Motor1_Enable->setObjectName(QString::fromUtf8("Motor1_Enable"));

        gridLayout_2->addWidget(Motor1_Enable, 0, 1, 1, 1);

        Motor2_Enable = new QPushButton(gridLayoutWidget_2);
        Motor2_Enable->setObjectName(QString::fromUtf8("Motor2_Enable"));

        gridLayout_2->addWidget(Motor2_Enable, 2, 1, 1, 1);

        Motor5 = new QLabel(gridLayoutWidget_2);
        Motor5->setObjectName(QString::fromUtf8("Motor5"));

        gridLayout_2->addWidget(Motor5, 8, 0, 1, 1);

        Motor3_Pose_Cmd = new QSlider(gridLayoutWidget_2);
        Motor3_Pose_Cmd->setObjectName(QString::fromUtf8("Motor3_Pose_Cmd"));
        Motor3_Pose_Cmd->setOrientation(Qt::Horizontal);

        gridLayout_2->addWidget(Motor3_Pose_Cmd, 4, 4, 1, 1);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_2->addItem(verticalSpacer_2, 3, 2, 1, 1);

        Motor4 = new QLabel(gridLayoutWidget_2);
        Motor4->setObjectName(QString::fromUtf8("Motor4"));

        gridLayout_2->addWidget(Motor4, 6, 0, 1, 1);

        Motor3 = new QLabel(gridLayoutWidget_2);
        Motor3->setObjectName(QString::fromUtf8("Motor3"));

        gridLayout_2->addWidget(Motor3, 4, 0, 1, 1);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_2->addItem(verticalSpacer, 1, 2, 1, 1);

        Motor7_Disable = new QPushButton(gridLayoutWidget_2);
        Motor7_Disable->setObjectName(QString::fromUtf8("Motor7_Disable"));

        gridLayout_2->addWidget(Motor7_Disable, 12, 2, 1, 1);

        Motor1 = new QLabel(gridLayoutWidget_2);
        Motor1->setObjectName(QString::fromUtf8("Motor1"));

        gridLayout_2->addWidget(Motor1, 0, 0, 1, 1);

        verticalSpacer_3 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_2->addItem(verticalSpacer_3, 5, 2, 1, 1);

        Motor5_Disable = new QPushButton(gridLayoutWidget_2);
        Motor5_Disable->setObjectName(QString::fromUtf8("Motor5_Disable"));

        gridLayout_2->addWidget(Motor5_Disable, 8, 2, 1, 1);

        verticalSpacer_4 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_2->addItem(verticalSpacer_4, 7, 2, 1, 1);

        Motor2_Pose_Cmd = new QSlider(gridLayoutWidget_2);
        Motor2_Pose_Cmd->setObjectName(QString::fromUtf8("Motor2_Pose_Cmd"));
        Motor2_Pose_Cmd->setOrientation(Qt::Horizontal);

        gridLayout_2->addWidget(Motor2_Pose_Cmd, 2, 4, 1, 1);

        Motor1_Disable = new QPushButton(gridLayoutWidget_2);
        Motor1_Disable->setObjectName(QString::fromUtf8("Motor1_Disable"));

        gridLayout_2->addWidget(Motor1_Disable, 0, 2, 1, 1);

        Motor7_Pose_Cmd = new QSlider(gridLayoutWidget_2);
        Motor7_Pose_Cmd->setObjectName(QString::fromUtf8("Motor7_Pose_Cmd"));
        Motor7_Pose_Cmd->setOrientation(Qt::Horizontal);

        gridLayout_2->addWidget(Motor7_Pose_Cmd, 12, 4, 1, 1);

        Motor4_Enable = new QPushButton(gridLayoutWidget_2);
        Motor4_Enable->setObjectName(QString::fromUtf8("Motor4_Enable"));

        gridLayout_2->addWidget(Motor4_Enable, 6, 1, 1, 1);

        Motor5_Pose_Cmd = new QSlider(gridLayoutWidget_2);
        Motor5_Pose_Cmd->setObjectName(QString::fromUtf8("Motor5_Pose_Cmd"));
        Motor5_Pose_Cmd->setOrientation(Qt::Horizontal);

        gridLayout_2->addWidget(Motor5_Pose_Cmd, 8, 4, 1, 1);

        Motor7_Enable = new QPushButton(gridLayoutWidget_2);
        Motor7_Enable->setObjectName(QString::fromUtf8("Motor7_Enable"));

        gridLayout_2->addWidget(Motor7_Enable, 12, 1, 1, 1);

        Motor4_Pose_Cmd = new QSlider(gridLayoutWidget_2);
        Motor4_Pose_Cmd->setObjectName(QString::fromUtf8("Motor4_Pose_Cmd"));
        Motor4_Pose_Cmd->setOrientation(Qt::Horizontal);

        gridLayout_2->addWidget(Motor4_Pose_Cmd, 6, 4, 1, 1);

        verticalSpacer_6 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_2->addItem(verticalSpacer_6, 11, 2, 1, 1);

        Enable_Button_2 = new QPushButton(groupBox_2);
        Enable_Button_2->setObjectName(QString::fromUtf8("Enable_Button_2"));
        Enable_Button_2->setGeometry(QRect(30, 30, 80, 25));
        Disable_Button_2 = new QPushButton(groupBox_2);
        Disable_Button_2->setObjectName(QString::fromUtf8("Disable_Button_2"));
        Disable_Button_2->setGeometry(QRect(140, 30, 80, 25));
        Disable_Button_3 = new QPushButton(groupBox_2);
        Disable_Button_3->setObjectName(QString::fromUtf8("Disable_Button_3"));
        Disable_Button_3->setGeometry(QRect(270, 30, 80, 25));
        NextDialog = new QPushButton(centralwidget);
        NextDialog->setObjectName(QString::fromUtf8("NextDialog"));
        NextDialog->setGeometry(QRect(470, 420, 89, 25));
        horizontalScrollBar = new QScrollBar(centralwidget);
        horizontalScrollBar->setObjectName(QString::fromUtf8("horizontalScrollBar"));
        horizontalScrollBar->setGeometry(QRect(0, 485, 871, 20));
        horizontalScrollBar->setOrientation(Qt::Horizontal);
        verticalScrollBar = new QScrollBar(centralwidget);
        verticalScrollBar->setObjectName(QString::fromUtf8("verticalScrollBar"));
        verticalScrollBar->setGeometry(QRect(870, -1, 20, 511));
        verticalScrollBar->setOrientation(Qt::Vertical);
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 897, 28));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        groupBox->setTitle(QCoreApplication::translate("MainWindow", "Motor Control", nullptr));
        Disable_Button->setText(QCoreApplication::translate("MainWindow", "Disable", nullptr));
        Enable_Button->setText(QCoreApplication::translate("MainWindow", "Enable", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "Velocity:  0.00", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "Pose      :  0.00", nullptr));
        Execute->setText(QCoreApplication::translate("MainWindow", "Execute", nullptr));
        Stop->setText(QCoreApplication::translate("MainWindow", "Stop", nullptr));
        E_Stop->setText(QCoreApplication::translate("MainWindow", "E-Stop", nullptr));
        radioButton_6->setText(QCoreApplication::translate("MainWindow", "Motor 6", nullptr));
        radioButton->setText(QCoreApplication::translate("MainWindow", "Motor 1", nullptr));
        radioButton_2->setText(QCoreApplication::translate("MainWindow", "Motor 2", nullptr));
        radioButton_5->setText(QCoreApplication::translate("MainWindow", "Motor 5", nullptr));
        radioButton_3->setText(QCoreApplication::translate("MainWindow", "Motor 3", nullptr));
        radioButton_7->setText(QCoreApplication::translate("MainWindow", "Motor 7", nullptr));
        radioButton_4->setText(QCoreApplication::translate("MainWindow", "Motor 4", nullptr));
        Exit->setText(QCoreApplication::translate("MainWindow", "Exit", nullptr));
        groupBox_2->setTitle(QCoreApplication::translate("MainWindow", "Robot Control", nullptr));
        Motor2_Disable->setText(QCoreApplication::translate("MainWindow", "Disable", nullptr));
        Motor4_Disable->setText(QCoreApplication::translate("MainWindow", "Disable", nullptr));
        Motor6->setText(QCoreApplication::translate("MainWindow", "Motor 6", nullptr));
        Motor6_Disable->setText(QCoreApplication::translate("MainWindow", "Disable", nullptr));
        Motor2->setText(QCoreApplication::translate("MainWindow", "Motor 2", nullptr));
        Motor3_Enable->setText(QCoreApplication::translate("MainWindow", "Enable", nullptr));
        Motor5_Enable->setText(QCoreApplication::translate("MainWindow", "Enable", nullptr));
        Motor7->setText(QCoreApplication::translate("MainWindow", "Motor 7", nullptr));
        Motor6_Enable->setText(QCoreApplication::translate("MainWindow", "Enable", nullptr));
        Motor3_Disable->setText(QCoreApplication::translate("MainWindow", "Disable", nullptr));
        Motor1_Enable->setText(QCoreApplication::translate("MainWindow", "Enable", nullptr));
        Motor2_Enable->setText(QCoreApplication::translate("MainWindow", "Enable", nullptr));
        Motor5->setText(QCoreApplication::translate("MainWindow", "Motor 5", nullptr));
        Motor4->setText(QCoreApplication::translate("MainWindow", "Motor 4", nullptr));
        Motor3->setText(QCoreApplication::translate("MainWindow", "Motor 3", nullptr));
        Motor7_Disable->setText(QCoreApplication::translate("MainWindow", "Disable", nullptr));
        Motor1->setText(QCoreApplication::translate("MainWindow", "Motor 1", nullptr));
        Motor5_Disable->setText(QCoreApplication::translate("MainWindow", "Disable", nullptr));
        Motor1_Disable->setText(QCoreApplication::translate("MainWindow", "Disable", nullptr));
        Motor4_Enable->setText(QCoreApplication::translate("MainWindow", "Enable", nullptr));
        Motor7_Enable->setText(QCoreApplication::translate("MainWindow", "Enable", nullptr));
        Enable_Button_2->setText(QCoreApplication::translate("MainWindow", "Enable", nullptr));
        Disable_Button_2->setText(QCoreApplication::translate("MainWindow", "Disable", nullptr));
        Disable_Button_3->setText(QCoreApplication::translate("MainWindow", "Stop", nullptr));
        NextDialog->setText(QCoreApplication::translate("MainWindow", "ShowCurve", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MOTORCONTROL_UI_H
