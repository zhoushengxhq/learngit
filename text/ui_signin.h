/********************************************************************************
** Form generated from reading UI file 'signin.ui'
**
** Created by: Qt User Interface Compiler version 5.11.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SIGNIN_H
#define UI_SIGNIN_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTableView>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_SignIn
{
public:
    QVBoxLayout *verticalLayout_3;
    QStackedWidget *stackedWidget;
    QWidget *page;
    QVBoxLayout *verticalLayout_2;
    QWidget *titleWidget_2;
    QGridLayout *gridLayout_5;
    QSpacerItem *horizontalSpacer_4;
    QHBoxLayout *horizontalLayout_4;
    QPushButton *pushButton_4;
    QPushButton *pushButton_3;
    QLabel *label_9;
    QGridLayout *gridLayout_2;
    QLabel *label_3;
    QLineEdit *lineEdit_UserName_2;
    QLabel *label_4;
    QLabel *label_5;
    QLineEdit *lineEdit_PassWord_3;
    QLabel *label_6;
    QLineEdit *lineEdit_Phone;
    QLabel *label_7;
    QLineEdit *lineEdit_Address;
    QLineEdit *lineEdit_PassWord_2;
    QHBoxLayout *horizontalLayout_3;
    QSpacerItem *horizontalSpacer_3;
    QPushButton *pushButton_Confirm_2;
    QPushButton *pushButton_Cancel_2;
    QWidget *page_3;
    QVBoxLayout *verticalLayout_8;
    QVBoxLayout *verticalLayout_5;
    QHBoxLayout *horizontalLayout_8;
    QSpacerItem *horizontalSpacer_5;
    QHBoxLayout *horizontalLayout_7;
    QPushButton *pushButton_5;
    QPushButton *pushButton_6;
    QTabWidget *tabWidget;
    QWidget *tabWidgetPage1;
    QVBoxLayout *verticalLayout_6;
    QTableView *tableView_Emperor;
    QWidget *tabWidgetPage2;
    QVBoxLayout *verticalLayout_10;
    QTableView *tableView_Celebrity;
    QVBoxLayout *verticalLayout_7;
    QHBoxLayout *horizontalLayout_10;
    QLineEdit *lineEdit;
    QPushButton *pushButton_7;
    QWidget *page_4;
    QVBoxLayout *verticalLayout_13;
    QVBoxLayout *verticalLayout_12;
    QHBoxLayout *horizontalLayout_13;
    QSpacerItem *horizontalSpacer_6;
    QHBoxLayout *horizontalLayout_12;
    QPushButton *pushButton_9;
    QPushButton *pushButton_8;
    QHBoxLayout *horizontalLayout_11;
    QLabel *label_11;
    QGridLayout *gridLayout_3;
    QLabel *label_Name;
    QLabel *label_Time;
    QLabel *label_14;
    QLabel *label_12;
    QVBoxLayout *verticalLayout_11;
    QLabel *label_16;
    QLabel *label_Experience;
    QWidget *page_2;
    QVBoxLayout *verticalLayout;
    QWidget *titleWidget;
    QGridLayout *gridLayout_4;
    QSpacerItem *horizontalSpacer_2;
    QHBoxLayout *horizontalLayout;
    QPushButton *pushButton_2;
    QPushButton *pushButton;
    QLabel *label_8;
    QHBoxLayout *horizontalLayout_9;
    QLabel *label_10;
    QGridLayout *gridLayout;
    QLabel *label;
    QLineEdit *lineEdit_UserName;
    QLabel *label_2;
    QLineEdit *lineEdit_PassWord;
    QHBoxLayout *horizontalLayout_2;
    QSpacerItem *horizontalSpacer;
    QPushButton *pushButton_Confirm;
    QPushButton *pushButton_Cancel;
    QPushButton *pushButton_Register;

    void setupUi(QDialog *SignIn)
    {
        if (SignIn->objectName().isEmpty())
            SignIn->setObjectName(QStringLiteral("SignIn"));
        SignIn->setEnabled(true);
        SignIn->resize(508, 336);
        SignIn->setCursor(QCursor(Qt::ArrowCursor));
        SignIn->setStyleSheet(QStringLiteral("#stackedWidget{border-left:1px solid rgb(70,255,255);border-top:1px solid rgb(70,255,255);border-right:1px solid rgb(70,255,255)}"));
        verticalLayout_3 = new QVBoxLayout(SignIn);
        verticalLayout_3->setSpacing(0);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        verticalLayout_3->setContentsMargins(0, 0, 0, 0);
        stackedWidget = new QStackedWidget(SignIn);
        stackedWidget->setObjectName(QStringLiteral("stackedWidget"));
        stackedWidget->setEnabled(true);
        QPalette palette;
        QBrush brush(QColor(0, 0, 0, 255));
        brush.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Text, brush);
        QBrush brush1(QColor(255, 255, 255, 255));
        brush1.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::ButtonText, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette.setBrush(QPalette::Inactive, QPalette::ButtonText, brush1);
        QBrush brush2(QColor(255, 255, 255, 127));
        brush2.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Disabled, QPalette::Text, brush2);
        palette.setBrush(QPalette::Disabled, QPalette::ButtonText, brush2);
        stackedWidget->setPalette(palette);
        QFont font;
        font.setFamily(QString::fromUtf8("\345\271\274\345\234\206"));
        font.setPointSize(11);
        font.setBold(false);
        font.setWeight(50);
        stackedWidget->setFont(font);
        stackedWidget->setStyleSheet(QStringLiteral("#stackedWidget{border-left:1px solid rgb(70,255,255);border-top:1px solid rgb(70,255,255);border-right:1px solid rgb(70,255,255)}"));
        stackedWidget->setLineWidth(0);
        page = new QWidget();
        page->setObjectName(QStringLiteral("page"));
        verticalLayout_2 = new QVBoxLayout(page);
        verticalLayout_2->setSpacing(0);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        titleWidget_2 = new QWidget(page);
        titleWidget_2->setObjectName(QStringLiteral("titleWidget_2"));
        gridLayout_5 = new QGridLayout(titleWidget_2);
        gridLayout_5->setObjectName(QStringLiteral("gridLayout_5"));
        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_5->addItem(horizontalSpacer_4, 0, 0, 1, 1);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setSpacing(10);
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        horizontalLayout_4->setContentsMargins(-1, 6, 6, -1);
        pushButton_4 = new QPushButton(titleWidget_2);
        pushButton_4->setObjectName(QStringLiteral("pushButton_4"));
        pushButton_4->setMaximumSize(QSize(20, 20));
        QPalette palette1;
        palette1.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        palette1.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette1.setBrush(QPalette::Disabled, QPalette::ButtonText, brush2);
        pushButton_4->setPalette(palette1);
        QFont font1;
        font1.setBold(true);
        font1.setWeight(75);
        pushButton_4->setFont(font1);

        horizontalLayout_4->addWidget(pushButton_4);

        pushButton_3 = new QPushButton(titleWidget_2);
        pushButton_3->setObjectName(QStringLiteral("pushButton_3"));
        pushButton_3->setMaximumSize(QSize(20, 20));
        QPalette palette2;
        palette2.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        palette2.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette2.setBrush(QPalette::Disabled, QPalette::ButtonText, brush2);
        pushButton_3->setPalette(palette2);
        pushButton_3->setFont(font1);

        horizontalLayout_4->addWidget(pushButton_3);


        gridLayout_5->addLayout(horizontalLayout_4, 0, 1, 1, 1);

        label_9 = new QLabel(titleWidget_2);
        label_9->setObjectName(QStringLiteral("label_9"));
        label_9->setMinimumSize(QSize(0, 0));
        QFont font2;
        font2.setFamily(QString::fromUtf8("\345\215\216\346\226\207\350\241\214\346\245\267"));
        font2.setPointSize(48);
        font2.setBold(true);
        font2.setWeight(75);
        label_9->setFont(font2);
        label_9->setAlignment(Qt::AlignCenter);

        gridLayout_5->addWidget(label_9, 1, 0, 1, 2);


        verticalLayout_2->addWidget(titleWidget_2);

        gridLayout_2 = new QGridLayout();
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        gridLayout_2->setVerticalSpacing(10);
        gridLayout_2->setContentsMargins(20, 10, 20, 6);
        label_3 = new QLabel(page);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setFont(font);

        gridLayout_2->addWidget(label_3, 0, 0, 1, 1);

        lineEdit_UserName_2 = new QLineEdit(page);
        lineEdit_UserName_2->setObjectName(QStringLiteral("lineEdit_UserName_2"));
        lineEdit_UserName_2->setFont(font);

        gridLayout_2->addWidget(lineEdit_UserName_2, 0, 1, 1, 1);

        label_4 = new QLabel(page);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setFont(font);

        gridLayout_2->addWidget(label_4, 1, 0, 1, 1);

        label_5 = new QLabel(page);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setFont(font);

        gridLayout_2->addWidget(label_5, 2, 0, 1, 1);

        lineEdit_PassWord_3 = new QLineEdit(page);
        lineEdit_PassWord_3->setObjectName(QStringLiteral("lineEdit_PassWord_3"));
        lineEdit_PassWord_3->setFont(font);
        lineEdit_PassWord_3->setEchoMode(QLineEdit::Password);

        gridLayout_2->addWidget(lineEdit_PassWord_3, 2, 1, 1, 1);

        label_6 = new QLabel(page);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setFont(font);

        gridLayout_2->addWidget(label_6, 3, 0, 1, 1);

        lineEdit_Phone = new QLineEdit(page);
        lineEdit_Phone->setObjectName(QStringLiteral("lineEdit_Phone"));
        lineEdit_Phone->setFont(font);

        gridLayout_2->addWidget(lineEdit_Phone, 3, 1, 1, 1);

        label_7 = new QLabel(page);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setFont(font);

        gridLayout_2->addWidget(label_7, 4, 0, 1, 1);

        lineEdit_Address = new QLineEdit(page);
        lineEdit_Address->setObjectName(QStringLiteral("lineEdit_Address"));
        lineEdit_Address->setFont(font);

        gridLayout_2->addWidget(lineEdit_Address, 4, 1, 1, 1);

        lineEdit_PassWord_2 = new QLineEdit(page);
        lineEdit_PassWord_2->setObjectName(QStringLiteral("lineEdit_PassWord_2"));
        lineEdit_PassWord_2->setFont(font);
        lineEdit_PassWord_2->setEchoMode(QLineEdit::Password);

        gridLayout_2->addWidget(lineEdit_PassWord_2, 1, 1, 1, 1);

        gridLayout_2->setRowStretch(0, 1);
        gridLayout_2->setRowStretch(1, 1);
        gridLayout_2->setRowStretch(2, 1);
        gridLayout_2->setRowStretch(3, 1);
        gridLayout_2->setRowStretch(4, 1);

        verticalLayout_2->addLayout(gridLayout_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setSpacing(10);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        horizontalLayout_3->setContentsMargins(-1, -1, 20, 10);
        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_3);

        pushButton_Confirm_2 = new QPushButton(page);
        pushButton_Confirm_2->setObjectName(QStringLiteral("pushButton_Confirm_2"));
        pushButton_Confirm_2->setMinimumSize(QSize(80, 21));
        QPalette palette3;
        palette3.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        palette3.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette3.setBrush(QPalette::Disabled, QPalette::ButtonText, brush2);
        pushButton_Confirm_2->setPalette(palette3);
        QFont font3;
        font3.setFamily(QString::fromUtf8("\345\271\274\345\234\206"));
        font3.setPointSize(10);
        font3.setBold(false);
        font3.setWeight(50);
        pushButton_Confirm_2->setFont(font3);

        horizontalLayout_3->addWidget(pushButton_Confirm_2);

        pushButton_Cancel_2 = new QPushButton(page);
        pushButton_Cancel_2->setObjectName(QStringLiteral("pushButton_Cancel_2"));
        pushButton_Cancel_2->setMinimumSize(QSize(80, 21));
        QPalette palette4;
        palette4.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        palette4.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette4.setBrush(QPalette::Disabled, QPalette::ButtonText, brush2);
        pushButton_Cancel_2->setPalette(palette4);
        pushButton_Cancel_2->setFont(font3);

        horizontalLayout_3->addWidget(pushButton_Cancel_2);


        verticalLayout_2->addLayout(horizontalLayout_3);

        stackedWidget->addWidget(page);
        page_3 = new QWidget();
        page_3->setObjectName(QStringLiteral("page_3"));
        verticalLayout_8 = new QVBoxLayout(page_3);
        verticalLayout_8->setSpacing(0);
        verticalLayout_8->setObjectName(QStringLiteral("verticalLayout_8"));
        verticalLayout_8->setContentsMargins(0, 0, 0, 0);
        verticalLayout_5 = new QVBoxLayout();
        verticalLayout_5->setObjectName(QStringLiteral("verticalLayout_5"));
        horizontalLayout_8 = new QHBoxLayout();
        horizontalLayout_8->setObjectName(QStringLiteral("horizontalLayout_8"));
        horizontalLayout_8->setContentsMargins(-1, 6, 6, -1);
        horizontalSpacer_5 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_8->addItem(horizontalSpacer_5);

        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setSpacing(10);
        horizontalLayout_7->setObjectName(QStringLiteral("horizontalLayout_7"));
        horizontalLayout_7->setContentsMargins(-1, 6, 6, -1);
        pushButton_5 = new QPushButton(page_3);
        pushButton_5->setObjectName(QStringLiteral("pushButton_5"));
        pushButton_5->setMaximumSize(QSize(20, 20));
        QPalette palette5;
        palette5.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        palette5.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette5.setBrush(QPalette::Disabled, QPalette::ButtonText, brush2);
        pushButton_5->setPalette(palette5);
        QFont font4;
        font4.setPointSize(10);
        font4.setBold(true);
        font4.setWeight(75);
        pushButton_5->setFont(font4);

        horizontalLayout_7->addWidget(pushButton_5);

        pushButton_6 = new QPushButton(page_3);
        pushButton_6->setObjectName(QStringLiteral("pushButton_6"));
        pushButton_6->setMaximumSize(QSize(20, 20));
        QPalette palette6;
        palette6.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        palette6.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette6.setBrush(QPalette::Disabled, QPalette::ButtonText, brush2);
        pushButton_6->setPalette(palette6);
        pushButton_6->setFont(font4);

        horizontalLayout_7->addWidget(pushButton_6);


        horizontalLayout_8->addLayout(horizontalLayout_7);


        verticalLayout_5->addLayout(horizontalLayout_8);

        tabWidget = new QTabWidget(page_3);
        tabWidget->setObjectName(QStringLiteral("tabWidget"));
        QFont font5;
        font5.setFamily(QString::fromUtf8("\345\215\216\346\226\207\350\241\214\346\245\267"));
        font5.setPointSize(14);
        tabWidget->setFont(font5);
        tabWidgetPage1 = new QWidget();
        tabWidgetPage1->setObjectName(QStringLiteral("tabWidgetPage1"));
        verticalLayout_6 = new QVBoxLayout(tabWidgetPage1);
        verticalLayout_6->setSpacing(0);
        verticalLayout_6->setObjectName(QStringLiteral("verticalLayout_6"));
        verticalLayout_6->setContentsMargins(0, 0, 0, 0);
        tableView_Emperor = new QTableView(tabWidgetPage1);
        tableView_Emperor->setObjectName(QStringLiteral("tableView_Emperor"));
        QFont font6;
        font6.setFamily(QString::fromUtf8("\345\215\216\346\226\207\346\245\267\344\275\223"));
        font6.setPointSize(12);
        tableView_Emperor->setFont(font6);

        verticalLayout_6->addWidget(tableView_Emperor);

        tabWidget->addTab(tabWidgetPage1, QString());
        tabWidgetPage2 = new QWidget();
        tabWidgetPage2->setObjectName(QStringLiteral("tabWidgetPage2"));
        verticalLayout_10 = new QVBoxLayout(tabWidgetPage2);
        verticalLayout_10->setSpacing(0);
        verticalLayout_10->setObjectName(QStringLiteral("verticalLayout_10"));
        verticalLayout_10->setContentsMargins(0, 0, 0, 0);
        tableView_Celebrity = new QTableView(tabWidgetPage2);
        tableView_Celebrity->setObjectName(QStringLiteral("tableView_Celebrity"));
        tableView_Celebrity->setFont(font6);

        verticalLayout_10->addWidget(tableView_Celebrity);

        verticalLayout_7 = new QVBoxLayout();
        verticalLayout_7->setObjectName(QStringLiteral("verticalLayout_7"));
        horizontalLayout_10 = new QHBoxLayout();
        horizontalLayout_10->setSpacing(15);
        horizontalLayout_10->setObjectName(QStringLiteral("horizontalLayout_10"));
        horizontalLayout_10->setContentsMargins(10, 6, 10, 6);
        lineEdit = new QLineEdit(tabWidgetPage2);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));
        QPalette palette7;
        palette7.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        palette7.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette7.setBrush(QPalette::Disabled, QPalette::ButtonText, brush2);
        lineEdit->setPalette(palette7);
        QFont font7;
        font7.setFamily(QString::fromUtf8("\345\215\216\346\226\207\350\241\214\346\245\267"));
        font7.setPointSize(10);
        lineEdit->setFont(font7);

        horizontalLayout_10->addWidget(lineEdit);

        pushButton_7 = new QPushButton(tabWidgetPage2);
        pushButton_7->setObjectName(QStringLiteral("pushButton_7"));
        pushButton_7->setMinimumSize(QSize(80, 22));
        QPalette palette8;
        palette8.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        palette8.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette8.setBrush(QPalette::Disabled, QPalette::ButtonText, brush2);
        pushButton_7->setPalette(palette8);
        QFont font8;
        font8.setFamily(QString::fromUtf8("\345\215\216\346\226\207\350\241\214\346\245\267"));
        font8.setPointSize(11);
        font8.setBold(false);
        font8.setWeight(50);
        pushButton_7->setFont(font8);

        horizontalLayout_10->addWidget(pushButton_7);


        verticalLayout_7->addLayout(horizontalLayout_10);


        verticalLayout_10->addLayout(verticalLayout_7);

        tabWidget->addTab(tabWidgetPage2, QString());

        verticalLayout_5->addWidget(tabWidget);

        verticalLayout_5->setStretch(0, 1);
        verticalLayout_5->setStretch(1, 70);

        verticalLayout_8->addLayout(verticalLayout_5);

        stackedWidget->addWidget(page_3);
        page_4 = new QWidget();
        page_4->setObjectName(QStringLiteral("page_4"));
        verticalLayout_13 = new QVBoxLayout(page_4);
        verticalLayout_13->setSpacing(0);
        verticalLayout_13->setObjectName(QStringLiteral("verticalLayout_13"));
        verticalLayout_13->setContentsMargins(0, 0, 0, 0);
        verticalLayout_12 = new QVBoxLayout();
        verticalLayout_12->setObjectName(QStringLiteral("verticalLayout_12"));
        horizontalLayout_13 = new QHBoxLayout();
        horizontalLayout_13->setObjectName(QStringLiteral("horizontalLayout_13"));
        horizontalSpacer_6 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_13->addItem(horizontalSpacer_6);

        horizontalLayout_12 = new QHBoxLayout();
        horizontalLayout_12->setSpacing(10);
        horizontalLayout_12->setObjectName(QStringLiteral("horizontalLayout_12"));
        horizontalLayout_12->setContentsMargins(-1, 6, 6, -1);
        pushButton_9 = new QPushButton(page_4);
        pushButton_9->setObjectName(QStringLiteral("pushButton_9"));
        pushButton_9->setMaximumSize(QSize(20, 20));
        QPalette palette9;
        palette9.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        palette9.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette9.setBrush(QPalette::Disabled, QPalette::ButtonText, brush2);
        pushButton_9->setPalette(palette9);
        pushButton_9->setFont(font1);

        horizontalLayout_12->addWidget(pushButton_9);

        pushButton_8 = new QPushButton(page_4);
        pushButton_8->setObjectName(QStringLiteral("pushButton_8"));
        pushButton_8->setMaximumSize(QSize(20, 20));
        QPalette palette10;
        palette10.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        palette10.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette10.setBrush(QPalette::Disabled, QPalette::ButtonText, brush2);
        pushButton_8->setPalette(palette10);
        pushButton_8->setFont(font1);

        horizontalLayout_12->addWidget(pushButton_8);


        horizontalLayout_13->addLayout(horizontalLayout_12);


        verticalLayout_12->addLayout(horizontalLayout_13);

        horizontalLayout_11 = new QHBoxLayout();
        horizontalLayout_11->setSpacing(30);
        horizontalLayout_11->setObjectName(QStringLiteral("horizontalLayout_11"));
        horizontalLayout_11->setContentsMargins(30, 10, 20, 10);
        label_11 = new QLabel(page_4);
        label_11->setObjectName(QStringLiteral("label_11"));
        label_11->setMaximumSize(QSize(70, 80));
        label_11->setPixmap(QPixmap(QString::fromUtf8(":/jpg/image/login.jpg")));
        label_11->setScaledContents(true);

        horizontalLayout_11->addWidget(label_11);

        gridLayout_3 = new QGridLayout();
        gridLayout_3->setObjectName(QStringLiteral("gridLayout_3"));
        gridLayout_3->setHorizontalSpacing(0);
        gridLayout_3->setVerticalSpacing(10);
        label_Name = new QLabel(page_4);
        label_Name->setObjectName(QStringLiteral("label_Name"));
        label_Name->setFont(font6);

        gridLayout_3->addWidget(label_Name, 0, 1, 1, 1);

        label_Time = new QLabel(page_4);
        label_Time->setObjectName(QStringLiteral("label_Time"));
        label_Time->setFont(font6);

        gridLayout_3->addWidget(label_Time, 1, 1, 1, 1);

        label_14 = new QLabel(page_4);
        label_14->setObjectName(QStringLiteral("label_14"));
        QFont font9;
        font9.setPointSize(16);
        label_14->setFont(font9);
        label_14->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_3->addWidget(label_14, 1, 0, 1, 1);

        label_12 = new QLabel(page_4);
        label_12->setObjectName(QStringLiteral("label_12"));
        label_12->setFont(font9);
        label_12->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_3->addWidget(label_12, 0, 0, 1, 1);

        gridLayout_3->setRowStretch(0, 1);
        gridLayout_3->setRowStretch(1, 1);
        gridLayout_3->setColumnStretch(0, 1);
        gridLayout_3->setColumnStretch(1, 5);

        horizontalLayout_11->addLayout(gridLayout_3);

        horizontalLayout_11->setStretch(0, 1);
        horizontalLayout_11->setStretch(1, 5);

        verticalLayout_12->addLayout(horizontalLayout_11);

        verticalLayout_11 = new QVBoxLayout();
        verticalLayout_11->setObjectName(QStringLiteral("verticalLayout_11"));
        verticalLayout_11->setContentsMargins(30, 10, 30, -1);
        label_16 = new QLabel(page_4);
        label_16->setObjectName(QStringLiteral("label_16"));
        label_16->setFont(font9);

        verticalLayout_11->addWidget(label_16);

        label_Experience = new QLabel(page_4);
        label_Experience->setObjectName(QStringLiteral("label_Experience"));
        label_Experience->setFont(font6);
        label_Experience->setWordWrap(true);

        verticalLayout_11->addWidget(label_Experience);

        verticalLayout_11->setStretch(0, 1);
        verticalLayout_11->setStretch(1, 7);

        verticalLayout_12->addLayout(verticalLayout_11);

        verticalLayout_12->setStretch(0, 1);
        verticalLayout_12->setStretch(1, 4);
        verticalLayout_12->setStretch(2, 8);

        verticalLayout_13->addLayout(verticalLayout_12);

        stackedWidget->addWidget(page_4);
        page_2 = new QWidget();
        page_2->setObjectName(QStringLiteral("page_2"));
        verticalLayout = new QVBoxLayout(page_2);
        verticalLayout->setSpacing(0);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        titleWidget = new QWidget(page_2);
        titleWidget->setObjectName(QStringLiteral("titleWidget"));
        gridLayout_4 = new QGridLayout(titleWidget);
        gridLayout_4->setObjectName(QStringLiteral("gridLayout_4"));
        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_4->addItem(horizontalSpacer_2, 0, 0, 1, 1);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(-1, 3, 3, 0);
        pushButton_2 = new QPushButton(titleWidget);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setMaximumSize(QSize(20, 20));
        QPalette palette11;
        palette11.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        palette11.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette11.setBrush(QPalette::Disabled, QPalette::ButtonText, brush2);
        pushButton_2->setPalette(palette11);
        pushButton_2->setFont(font1);

        horizontalLayout->addWidget(pushButton_2);

        pushButton = new QPushButton(titleWidget);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setMaximumSize(QSize(20, 20));
        QPalette palette12;
        palette12.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        palette12.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette12.setBrush(QPalette::Disabled, QPalette::ButtonText, brush2);
        pushButton->setPalette(palette12);
        pushButton->setFont(font1);

        horizontalLayout->addWidget(pushButton);


        gridLayout_4->addLayout(horizontalLayout, 0, 1, 1, 1);

        label_8 = new QLabel(titleWidget);
        label_8->setObjectName(QStringLiteral("label_8"));
        label_8->setMinimumSize(QSize(0, 0));
        QFont font10;
        font10.setFamily(QString::fromUtf8("\345\215\216\346\226\207\350\241\214\346\245\267"));
        font10.setPointSize(36);
        font10.setBold(true);
        font10.setItalic(false);
        font10.setWeight(75);
        label_8->setFont(font10);
        label_8->setAlignment(Qt::AlignCenter);

        gridLayout_4->addWidget(label_8, 1, 0, 1, 2);


        verticalLayout->addWidget(titleWidget);

        horizontalLayout_9 = new QHBoxLayout();
        horizontalLayout_9->setSpacing(20);
        horizontalLayout_9->setObjectName(QStringLiteral("horizontalLayout_9"));
        horizontalLayout_9->setContentsMargins(30, 30, 20, 20);
        label_10 = new QLabel(page_2);
        label_10->setObjectName(QStringLiteral("label_10"));
        label_10->setMaximumSize(QSize(40, 50));
        label_10->setStyleSheet(QStringLiteral("border-image: url(:/jpg/image/login.jpg);"));
        label_10->setScaledContents(false);

        horizontalLayout_9->addWidget(label_10);

        gridLayout = new QGridLayout();
        gridLayout->setSpacing(10);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        gridLayout->setContentsMargins(-1, 10, -1, 0);
        label = new QLabel(page_2);
        label->setObjectName(QStringLiteral("label"));
        QPalette palette13;
        palette13.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette13.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        palette13.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette13.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette13.setBrush(QPalette::Disabled, QPalette::WindowText, brush2);
        palette13.setBrush(QPalette::Disabled, QPalette::ButtonText, brush2);
        label->setPalette(palette13);
        QFont font11;
        font11.setFamily(QString::fromUtf8("\345\271\274\345\234\206"));
        font11.setBold(false);
        font11.setWeight(50);
        label->setFont(font11);

        gridLayout->addWidget(label, 0, 0, 1, 1);

        lineEdit_UserName = new QLineEdit(page_2);
        lineEdit_UserName->setObjectName(QStringLiteral("lineEdit_UserName"));
        QPalette palette14;
        palette14.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        palette14.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette14.setBrush(QPalette::Disabled, QPalette::ButtonText, brush2);
        lineEdit_UserName->setPalette(palette14);
        lineEdit_UserName->setFont(font3);

        gridLayout->addWidget(lineEdit_UserName, 0, 1, 1, 1);

        label_2 = new QLabel(page_2);
        label_2->setObjectName(QStringLiteral("label_2"));
        QPalette palette15;
        palette15.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette15.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        palette15.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette15.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette15.setBrush(QPalette::Disabled, QPalette::WindowText, brush2);
        palette15.setBrush(QPalette::Disabled, QPalette::ButtonText, brush2);
        label_2->setPalette(palette15);
        label_2->setFont(font11);

        gridLayout->addWidget(label_2, 1, 0, 1, 1);

        lineEdit_PassWord = new QLineEdit(page_2);
        lineEdit_PassWord->setObjectName(QStringLiteral("lineEdit_PassWord"));
        QPalette palette16;
        palette16.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        palette16.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette16.setBrush(QPalette::Disabled, QPalette::ButtonText, brush2);
        lineEdit_PassWord->setPalette(palette16);
        lineEdit_PassWord->setFont(font3);
        lineEdit_PassWord->setToolTipDuration(-2);
        lineEdit_PassWord->setEchoMode(QLineEdit::Password);

        gridLayout->addWidget(lineEdit_PassWord, 1, 1, 1, 1);


        horizontalLayout_9->addLayout(gridLayout);

        horizontalLayout_9->setStretch(0, 1);
        horizontalLayout_9->setStretch(1, 4);

        verticalLayout->addLayout(horizontalLayout_9);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(10);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 10, 20, 20);
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer);

        pushButton_Confirm = new QPushButton(page_2);
        pushButton_Confirm->setObjectName(QStringLiteral("pushButton_Confirm"));
        pushButton_Confirm->setMinimumSize(QSize(80, 21));
        QPalette palette17;
        palette17.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        palette17.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette17.setBrush(QPalette::Disabled, QPalette::ButtonText, brush2);
        pushButton_Confirm->setPalette(palette17);
        pushButton_Confirm->setFont(font3);

        horizontalLayout_2->addWidget(pushButton_Confirm);

        pushButton_Cancel = new QPushButton(page_2);
        pushButton_Cancel->setObjectName(QStringLiteral("pushButton_Cancel"));
        pushButton_Cancel->setMinimumSize(QSize(80, 21));
        QPalette palette18;
        palette18.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        palette18.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette18.setBrush(QPalette::Disabled, QPalette::ButtonText, brush2);
        pushButton_Cancel->setPalette(palette18);
        pushButton_Cancel->setFont(font3);
        pushButton_Cancel->setCursor(QCursor(Qt::ArrowCursor));

        horizontalLayout_2->addWidget(pushButton_Cancel);

        pushButton_Register = new QPushButton(page_2);
        pushButton_Register->setObjectName(QStringLiteral("pushButton_Register"));
        pushButton_Register->setMinimumSize(QSize(80, 21));
        QPalette palette19;
        palette19.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        palette19.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette19.setBrush(QPalette::Disabled, QPalette::ButtonText, brush2);
        pushButton_Register->setPalette(palette19);
        pushButton_Register->setFont(font3);

        horizontalLayout_2->addWidget(pushButton_Register);


        verticalLayout->addLayout(horizontalLayout_2);

        verticalLayout->setStretch(0, 1);
        verticalLayout->setStretch(1, 8);
        verticalLayout->setStretch(2, 4);
        stackedWidget->addWidget(page_2);

        verticalLayout_3->addWidget(stackedWidget);


        retranslateUi(SignIn);
        QObject::connect(pushButton_Cancel_2, SIGNAL(clicked()), SignIn, SLOT(close()));
        QObject::connect(pushButton_Cancel, SIGNAL(clicked()), SignIn, SLOT(close()));
        QObject::connect(pushButton_5, SIGNAL(clicked()), SignIn, SLOT(showMinimized()));
        QObject::connect(pushButton_6, SIGNAL(clicked()), SignIn, SLOT(close()));
        QObject::connect(pushButton_9, SIGNAL(clicked()), SignIn, SLOT(showMinimized()));
        QObject::connect(pushButton_2, SIGNAL(clicked()), SignIn, SLOT(showMinimized()));
        QObject::connect(pushButton, SIGNAL(clicked()), SignIn, SLOT(close()));
        QObject::connect(pushButton_3, SIGNAL(clicked()), SignIn, SLOT(close()));
        QObject::connect(pushButton_4, SIGNAL(clicked()), SignIn, SLOT(showMinimized()));

        stackedWidget->setCurrentIndex(3);
        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(SignIn);
    } // setupUi

    void retranslateUi(QDialog *SignIn)
    {
        SignIn->setWindowTitle(QApplication::translate("SignIn", "Dialog", nullptr));
        pushButton_4->setText(QApplication::translate("SignIn", "\357\274\215", nullptr));
        pushButton_3->setText(QApplication::translate("SignIn", "\303\227", nullptr));
        label_9->setText(QApplication::translate("SignIn", "\347\224\250\346\210\267\346\263\250\345\206\214", nullptr));
        label_3->setText(QApplication::translate("SignIn", "\347\224\250\346\210\267\345\220\215", nullptr));
        lineEdit_UserName_2->setPlaceholderText(QApplication::translate("SignIn", "\350\257\267\350\276\223\345\205\245\347\224\250\346\210\267\345\220\215", nullptr));
        label_4->setText(QApplication::translate("SignIn", "\345\257\206\347\240\201", nullptr));
        label_5->setText(QApplication::translate("SignIn", "\347\241\256\350\256\244\345\257\206\347\240\201", nullptr));
        lineEdit_PassWord_3->setPlaceholderText(QApplication::translate("SignIn", "\350\257\267\347\241\256\350\256\244\345\257\206\347\240\201", nullptr));
        label_6->setText(QApplication::translate("SignIn", "\347\224\265\350\257\235\345\217\267\347\240\201", nullptr));
        lineEdit_Phone->setPlaceholderText(QApplication::translate("SignIn", "\350\257\267\350\276\223\345\205\245\347\224\265\350\257\235\345\217\267\347\240\201", nullptr));
        label_7->setText(QApplication::translate("SignIn", "\344\275\217\345\235\200", nullptr));
        lineEdit_Address->setPlaceholderText(QApplication::translate("SignIn", "\350\257\267\350\276\223\345\205\245\345\234\260\345\235\200", nullptr));
        lineEdit_PassWord_2->setText(QString());
        lineEdit_PassWord_2->setPlaceholderText(QApplication::translate("SignIn", "\350\257\267\350\276\223\345\205\245\345\257\206\347\240\201", nullptr));
        pushButton_Confirm_2->setText(QApplication::translate("SignIn", "\347\241\256\350\256\244", nullptr));
        pushButton_Cancel_2->setText(QApplication::translate("SignIn", "\345\217\226\346\266\210", nullptr));
        pushButton_5->setText(QApplication::translate("SignIn", "\357\274\215", nullptr));
        pushButton_6->setText(QApplication::translate("SignIn", "\303\227", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tabWidgetPage1), QApplication::translate("SignIn", "\347\232\207\345\270\235", nullptr));
        lineEdit->setPlaceholderText(QApplication::translate("SignIn", "\350\257\267\350\276\223\345\205\245\345\220\215\344\272\272\345\220\215", nullptr));
        pushButton_7->setText(QApplication::translate("SignIn", "\346\237\245\350\257\242", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tabWidgetPage2), QApplication::translate("SignIn", "\345\220\215\344\272\272", nullptr));
        pushButton_9->setText(QApplication::translate("SignIn", "\357\274\215", nullptr));
        pushButton_8->setText(QApplication::translate("SignIn", "\303\227", nullptr));
        label_11->setText(QString());
        label_Name->setText(QApplication::translate("SignIn", "TextLabel", nullptr));
        label_Time->setText(QApplication::translate("SignIn", "TextLabel", nullptr));
        label_14->setText(QApplication::translate("SignIn", "\345\207\272\347\224\237-\346\255\273\344\272\241\346\227\245\346\234\237\357\274\232", nullptr));
        label_12->setText(QApplication::translate("SignIn", "\345\247\223\345\220\215\357\274\232", nullptr));
        label_16->setText(QApplication::translate("SignIn", "\344\272\272\347\224\237\347\273\217\345\216\206\357\274\232", nullptr));
        label_Experience->setText(QApplication::translate("SignIn", "TextLabel", nullptr));
        pushButton_2->setText(QApplication::translate("SignIn", "\357\274\215", nullptr));
        pushButton->setText(QApplication::translate("SignIn", "\303\227", nullptr));
        label_8->setText(QApplication::translate("SignIn", "\347\224\250\346\210\267\347\231\273\345\275\225", nullptr));
        label_10->setText(QString());
        label->setText(QApplication::translate("SignIn", "\347\224\250\346\210\267\345\220\215", nullptr));
        lineEdit_UserName->setPlaceholderText(QApplication::translate("SignIn", "\350\257\267\350\276\223\345\205\245\347\224\250\346\210\267\345\220\215", nullptr));
        label_2->setText(QApplication::translate("SignIn", "\345\257\206\347\240\201", nullptr));
        lineEdit_PassWord->setText(QString());
        lineEdit_PassWord->setPlaceholderText(QApplication::translate("SignIn", "\350\257\267\350\276\223\345\205\245\345\257\206\347\240\201", nullptr));
        pushButton_Confirm->setText(QApplication::translate("SignIn", "\347\241\256\350\256\244", nullptr));
        pushButton_Cancel->setText(QApplication::translate("SignIn", "\345\217\226\346\266\210", nullptr));
        pushButton_Register->setText(QApplication::translate("SignIn", "\346\263\250\345\206\214", nullptr));
    } // retranslateUi

};

namespace Ui {
    class SignIn: public Ui_SignIn {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SIGNIN_H
