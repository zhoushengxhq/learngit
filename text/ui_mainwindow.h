/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.11.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QVBoxLayout *verticalLayout;
    QWidget *titleWidget;
    QGridLayout *gridLayout;
    QSpacerItem *horizontalSpacer_4;
    QHBoxLayout *horizontalLayout;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QLabel *label;
    QHBoxLayout *horizontalLayout_2;
    QSpacerItem *horizontalSpacer_2;
    QPushButton *pushButton_SignIn_2;
    QSpacerItem *horizontalSpacer_3;
    QPushButton *pushButton_SignIn;
    QSpacerItem *horizontalSpacer;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(380, 280);
        QPalette palette;
        QBrush brush(QColor(255, 255, 255, 255));
        brush.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Base, brush);
        palette.setBrush(QPalette::Active, QPalette::Window, brush);
        palette.setBrush(QPalette::Active, QPalette::Shadow, brush);
        palette.setBrush(QPalette::Active, QPalette::ToolTipBase, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Base, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Window, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Shadow, brush);
        palette.setBrush(QPalette::Inactive, QPalette::ToolTipBase, brush);
        palette.setBrush(QPalette::Disabled, QPalette::Base, brush);
        palette.setBrush(QPalette::Disabled, QPalette::Window, brush);
        palette.setBrush(QPalette::Disabled, QPalette::Shadow, brush);
        palette.setBrush(QPalette::Disabled, QPalette::ToolTipBase, brush);
        MainWindow->setPalette(palette);
        QFont font;
        font.setFamily(QString::fromUtf8("\345\271\274\345\234\206"));
        font.setPointSize(9);
        MainWindow->setFont(font);
        MainWindow->setStyleSheet(QStringLiteral(""));
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        QPalette palette1;
        centralWidget->setPalette(palette1);
        centralWidget->setStyleSheet(QStringLiteral("#centralWidget{border-left:1px solid rgb(70,255,255);border-top:1px solid rgb(70,255,255);border-right:1px solid rgb(70,255,255)}"));
        verticalLayout = new QVBoxLayout(centralWidget);
        verticalLayout->setSpacing(0);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        titleWidget = new QWidget(centralWidget);
        titleWidget->setObjectName(QStringLiteral("titleWidget"));
        gridLayout = new QGridLayout(titleWidget);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        horizontalSpacer_4 = new QSpacerItem(268, 17, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_4, 0, 0, 1, 1);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(-1, 6, 6, -1);
        pushButton = new QPushButton(titleWidget);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setMaximumSize(QSize(20, 20));
        QFont font1;
        font1.setBold(true);
        font1.setWeight(75);
        pushButton->setFont(font1);
        pushButton->setTabletTracking(false);

        horizontalLayout->addWidget(pushButton);

        pushButton_2 = new QPushButton(titleWidget);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setMaximumSize(QSize(20, 20));
        pushButton_2->setFont(font1);

        horizontalLayout->addWidget(pushButton_2);


        gridLayout->addLayout(horizontalLayout, 0, 1, 1, 1);

        label = new QLabel(titleWidget);
        label->setObjectName(QStringLiteral("label"));
        label->setMinimumSize(QSize(0, 0));
        QFont font2;
        font2.setFamily(QString::fromUtf8("\345\215\216\346\226\207\350\241\214\346\245\267"));
        font2.setPointSize(28);
        font2.setBold(true);
        font2.setUnderline(false);
        font2.setWeight(75);
        label->setFont(font2);
        label->setScaledContents(true);
        label->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(label, 1, 0, 1, 2);

        gridLayout->setRowStretch(0, 1);
        gridLayout->setRowStretch(1, 100);
        gridLayout->setColumnStretch(0, 100);
        gridLayout->setColumnStretch(1, 1);
        gridLayout->setRowMinimumHeight(0, 1);
        gridLayout->setRowMinimumHeight(1, 100);

        verticalLayout->addWidget(titleWidget);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 50, 0, 50);
        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_2);

        pushButton_SignIn_2 = new QPushButton(centralWidget);
        pushButton_SignIn_2->setObjectName(QStringLiteral("pushButton_SignIn_2"));
        pushButton_SignIn_2->setMinimumSize(QSize(100, 30));
        QFont font3;
        font3.setFamily(QString::fromUtf8("\345\271\274\345\234\206"));
        font3.setPointSize(11);
        font3.setBold(false);
        font3.setWeight(50);
        pushButton_SignIn_2->setFont(font3);

        horizontalLayout_2->addWidget(pushButton_SignIn_2);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_3);

        pushButton_SignIn = new QPushButton(centralWidget);
        pushButton_SignIn->setObjectName(QStringLiteral("pushButton_SignIn"));
        pushButton_SignIn->setMinimumSize(QSize(100, 30));
        QPalette palette2;
        pushButton_SignIn->setPalette(palette2);
        pushButton_SignIn->setFont(font3);

        horizontalLayout_2->addWidget(pushButton_SignIn);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer);


        verticalLayout->addLayout(horizontalLayout_2);

        verticalLayout->setStretch(0, 1);
        verticalLayout->setStretch(1, 8);
        MainWindow->setCentralWidget(centralWidget);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        statusBar->setMouseTracking(true);
        statusBar->setSizeGripEnabled(true);
        MainWindow->setStatusBar(statusBar);

        retranslateUi(MainWindow);
        QObject::connect(pushButton, SIGNAL(clicked()), MainWindow, SLOT(showMinimized()));
        QObject::connect(pushButton_2, SIGNAL(clicked()), MainWindow, SLOT(close()));

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", nullptr));
        pushButton->setText(QApplication::translate("MainWindow", "\357\274\215", nullptr));
        pushButton_2->setText(QApplication::translate("MainWindow", "\303\227", nullptr));
        label->setText(QApplication::translate("MainWindow", "\345\205\203\344\273\243\345\220\215\344\272\272\344\277\241\346\201\257\346\237\245\350\257\242\347\263\273\347\273\237", nullptr));
        pushButton_SignIn_2->setText(QApplication::translate("MainWindow", "\347\256\241\347\220\206\345\221\230\347\231\273\345\275\225", nullptr));
        pushButton_SignIn->setText(QApplication::translate("MainWindow", "\347\224\250\346\210\267\347\231\273\345\275\225", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
