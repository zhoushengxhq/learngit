/********************************************************************************
** Form generated from reading UI file 'admin.ui'
**
** Created by: Qt User Interface Compiler version 5.11.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADMIN_H
#define UI_ADMIN_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFormLayout>
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
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Admin
{
public:
    QVBoxLayout *verticalLayout_2;
    QStackedWidget *stackedWidget;
    QWidget *page_4;
    QVBoxLayout *verticalLayout_4;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_2;
    QSpacerItem *horizontalSpacer;
    QHBoxLayout *horizontalLayout;
    QPushButton *pushButton_2;
    QPushButton *pushButton;
    QTabWidget *tabWidget;
    QWidget *tabWidgetPage1;
    QVBoxLayout *verticalLayout_3;
    QTableView *tableView_User;
    QWidget *tabWidgetPage2;
    QVBoxLayout *verticalLayout_8;
    QTableView *tableView_Celebrity;
    QWidget *tabWidgetPage3;
    QVBoxLayout *verticalLayout_9;
    QTableView *tableView_Emperor;
    QWidget *page_6;
    QVBoxLayout *verticalLayout_12;
    QVBoxLayout *verticalLayout_11;
    QHBoxLayout *horizontalLayout_10;
    QSpacerItem *horizontalSpacer_4;
    QHBoxLayout *horizontalLayout_9;
    QPushButton *pushButton_7;
    QPushButton *pushButton_3;
    QHBoxLayout *horizontalLayout_8;
    QLabel *label_5;
    QVBoxLayout *verticalLayout_7;
    QGridLayout *gridLayout_2;
    QLabel *label_6;
    QLineEdit *lineEdit_name;
    QLabel *label_7;
    QLineEdit *lineEdit_time;
    QHBoxLayout *horizontalLayout_7;
    QLabel *label_8;
    QTextEdit *textEdit_brief;
    QVBoxLayout *verticalLayout_10;
    QLabel *label_9;
    QTextEdit *textEdit_experience;
    QFormLayout *formLayout;
    QHBoxLayout *horizontalLayout_11;
    QSpacerItem *horizontalSpacer_5;
    QPushButton *pushButton_8;
    QPushButton *pushButton_Revise;
    QWidget *page_5;
    QVBoxLayout *verticalLayout_5;
    QWidget *titleWidget;
    QGridLayout *gridLayout_3;
    QSpacerItem *horizontalSpacer_2;
    QHBoxLayout *horizontalLayout_3;
    QPushButton *pushButton_5;
    QPushButton *pushButton_6;
    QLabel *label;
    QHBoxLayout *horizontalLayout_6;
    QLabel *label_4;
    QGridLayout *gridLayout;
    QLabel *label_2;
    QLineEdit *lineEdit;
    QLabel *label_3;
    QLineEdit *lineEdit_2;
    QHBoxLayout *horizontalLayout_5;
    QSpacerItem *horizontalSpacer_3;
    QPushButton *pushButton_Confirm;
    QPushButton *pushButton_4;

    void setupUi(QDialog *Admin)
    {
        if (Admin->objectName().isEmpty())
            Admin->setObjectName(QStringLiteral("Admin"));
        Admin->resize(519, 344);
        verticalLayout_2 = new QVBoxLayout(Admin);
        verticalLayout_2->setSpacing(0);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        stackedWidget = new QStackedWidget(Admin);
        stackedWidget->setObjectName(QStringLiteral("stackedWidget"));
        QFont font;
        font.setPointSize(12);
        stackedWidget->setFont(font);
        stackedWidget->setStyleSheet(QStringLiteral("#stackedWidget{border-left:1px solid rgb(70,255,255);border-top:1px solid rgb(70,255,255);border-right:1px solid rgb(70,255,255)}"));
        page_4 = new QWidget();
        page_4->setObjectName(QStringLiteral("page_4"));
        verticalLayout_4 = new QVBoxLayout(page_4);
        verticalLayout_4->setSpacing(0);
        verticalLayout_4->setObjectName(QStringLiteral("verticalLayout_4"));
        verticalLayout_4->setContentsMargins(0, 0, 0, 0);
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(10);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(-1, 6, 6, -1);
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        pushButton_2 = new QPushButton(page_4);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setMaximumSize(QSize(20, 20));
        QFont font1;
        font1.setBold(true);
        font1.setWeight(75);
        pushButton_2->setFont(font1);

        horizontalLayout->addWidget(pushButton_2);

        pushButton = new QPushButton(page_4);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setMaximumSize(QSize(20, 20));
        pushButton->setFont(font1);

        horizontalLayout->addWidget(pushButton);


        horizontalLayout_2->addLayout(horizontalLayout);


        verticalLayout->addLayout(horizontalLayout_2);

        tabWidget = new QTabWidget(page_4);
        tabWidget->setObjectName(QStringLiteral("tabWidget"));
        QFont font2;
        font2.setFamily(QString::fromUtf8("\345\215\216\346\226\207\350\241\214\346\245\267"));
        font2.setPointSize(12);
        tabWidget->setFont(font2);
        tabWidgetPage1 = new QWidget();
        tabWidgetPage1->setObjectName(QStringLiteral("tabWidgetPage1"));
        verticalLayout_3 = new QVBoxLayout(tabWidgetPage1);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        tableView_User = new QTableView(tabWidgetPage1);
        tableView_User->setObjectName(QStringLiteral("tableView_User"));
        QFont font3;
        font3.setFamily(QString::fromUtf8("\345\215\216\346\226\207\346\245\267\344\275\223"));
        font3.setPointSize(11);
        tableView_User->setFont(font3);

        verticalLayout_3->addWidget(tableView_User);

        tabWidget->addTab(tabWidgetPage1, QString());
        tabWidgetPage2 = new QWidget();
        tabWidgetPage2->setObjectName(QStringLiteral("tabWidgetPage2"));
        verticalLayout_8 = new QVBoxLayout(tabWidgetPage2);
        verticalLayout_8->setObjectName(QStringLiteral("verticalLayout_8"));
        tableView_Celebrity = new QTableView(tabWidgetPage2);
        tableView_Celebrity->setObjectName(QStringLiteral("tableView_Celebrity"));
        tableView_Celebrity->setFont(font3);

        verticalLayout_8->addWidget(tableView_Celebrity);

        tabWidget->addTab(tabWidgetPage2, QString());
        tabWidgetPage3 = new QWidget();
        tabWidgetPage3->setObjectName(QStringLiteral("tabWidgetPage3"));
        verticalLayout_9 = new QVBoxLayout(tabWidgetPage3);
        verticalLayout_9->setObjectName(QStringLiteral("verticalLayout_9"));
        tableView_Emperor = new QTableView(tabWidgetPage3);
        tableView_Emperor->setObjectName(QStringLiteral("tableView_Emperor"));
        tableView_Emperor->setFont(font3);

        verticalLayout_9->addWidget(tableView_Emperor);

        tabWidget->addTab(tabWidgetPage3, QString());

        verticalLayout->addWidget(tabWidget);


        verticalLayout_4->addLayout(verticalLayout);

        stackedWidget->addWidget(page_4);
        page_6 = new QWidget();
        page_6->setObjectName(QStringLiteral("page_6"));
        verticalLayout_12 = new QVBoxLayout(page_6);
        verticalLayout_12->setSpacing(0);
        verticalLayout_12->setObjectName(QStringLiteral("verticalLayout_12"));
        verticalLayout_12->setContentsMargins(0, 0, 0, 0);
        verticalLayout_11 = new QVBoxLayout();
        verticalLayout_11->setSpacing(10);
        verticalLayout_11->setObjectName(QStringLiteral("verticalLayout_11"));
        horizontalLayout_10 = new QHBoxLayout();
        horizontalLayout_10->setObjectName(QStringLiteral("horizontalLayout_10"));
        horizontalLayout_10->setContentsMargins(-1, 6, 6, -1);
        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_10->addItem(horizontalSpacer_4);

        horizontalLayout_9 = new QHBoxLayout();
        horizontalLayout_9->setSpacing(10);
        horizontalLayout_9->setObjectName(QStringLiteral("horizontalLayout_9"));
        pushButton_7 = new QPushButton(page_6);
        pushButton_7->setObjectName(QStringLiteral("pushButton_7"));
        pushButton_7->setMaximumSize(QSize(20, 20));
        pushButton_7->setFont(font1);

        horizontalLayout_9->addWidget(pushButton_7);

        pushButton_3 = new QPushButton(page_6);
        pushButton_3->setObjectName(QStringLiteral("pushButton_3"));
        pushButton_3->setMaximumSize(QSize(20, 20));
        pushButton_3->setFont(font1);

        horizontalLayout_9->addWidget(pushButton_3);


        horizontalLayout_10->addLayout(horizontalLayout_9);


        verticalLayout_11->addLayout(horizontalLayout_10);

        horizontalLayout_8 = new QHBoxLayout();
        horizontalLayout_8->setSpacing(20);
        horizontalLayout_8->setObjectName(QStringLiteral("horizontalLayout_8"));
        horizontalLayout_8->setContentsMargins(30, -1, 30, -1);
        label_5 = new QLabel(page_6);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setMaximumSize(QSize(80, 100));
        label_5->setPixmap(QPixmap(QString::fromUtf8(":/jpg/image/login.jpg")));
        label_5->setScaledContents(true);

        horizontalLayout_8->addWidget(label_5);

        verticalLayout_7 = new QVBoxLayout();
        verticalLayout_7->setSpacing(10);
        verticalLayout_7->setObjectName(QStringLiteral("verticalLayout_7"));
        gridLayout_2 = new QGridLayout();
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        gridLayout_2->setHorizontalSpacing(6);
        gridLayout_2->setVerticalSpacing(10);
        label_6 = new QLabel(page_6);
        label_6->setObjectName(QStringLiteral("label_6"));
        QFont font4;
        font4.setFamily(QString::fromUtf8("\345\215\216\346\226\207\350\241\214\346\245\267"));
        font4.setPointSize(12);
        font4.setBold(false);
        font4.setWeight(50);
        label_6->setFont(font4);

        gridLayout_2->addWidget(label_6, 0, 0, 1, 1);

        lineEdit_name = new QLineEdit(page_6);
        lineEdit_name->setObjectName(QStringLiteral("lineEdit_name"));
        lineEdit_name->setFont(font3);

        gridLayout_2->addWidget(lineEdit_name, 0, 1, 1, 1);

        label_7 = new QLabel(page_6);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setFont(font4);

        gridLayout_2->addWidget(label_7, 1, 0, 1, 1);

        lineEdit_time = new QLineEdit(page_6);
        lineEdit_time->setObjectName(QStringLiteral("lineEdit_time"));
        lineEdit_time->setFont(font3);

        gridLayout_2->addWidget(lineEdit_time, 1, 1, 1, 1);

        gridLayout_2->setColumnStretch(0, 1);
        gridLayout_2->setColumnStretch(1, 6);

        verticalLayout_7->addLayout(gridLayout_2);

        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setObjectName(QStringLiteral("horizontalLayout_7"));
        label_8 = new QLabel(page_6);
        label_8->setObjectName(QStringLiteral("label_8"));
        label_8->setFont(font4);
        label_8->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);

        horizontalLayout_7->addWidget(label_8);

        textEdit_brief = new QTextEdit(page_6);
        textEdit_brief->setObjectName(QStringLiteral("textEdit_brief"));
        textEdit_brief->setFont(font3);

        horizontalLayout_7->addWidget(textEdit_brief);

        horizontalLayout_7->setStretch(0, 1);
        horizontalLayout_7->setStretch(1, 7);

        verticalLayout_7->addLayout(horizontalLayout_7);

        verticalLayout_7->setStretch(0, 1);
        verticalLayout_7->setStretch(1, 6);

        horizontalLayout_8->addLayout(verticalLayout_7);

        horizontalLayout_8->setStretch(0, 1);
        horizontalLayout_8->setStretch(1, 4);

        verticalLayout_11->addLayout(horizontalLayout_8);

        verticalLayout_10 = new QVBoxLayout();
        verticalLayout_10->setObjectName(QStringLiteral("verticalLayout_10"));
        verticalLayout_10->setContentsMargins(30, -1, 30, -1);
        label_9 = new QLabel(page_6);
        label_9->setObjectName(QStringLiteral("label_9"));
        label_9->setFont(font4);

        verticalLayout_10->addWidget(label_9);

        textEdit_experience = new QTextEdit(page_6);
        textEdit_experience->setObjectName(QStringLiteral("textEdit_experience"));
        textEdit_experience->setFont(font3);

        verticalLayout_10->addWidget(textEdit_experience);

        formLayout = new QFormLayout();
        formLayout->setObjectName(QStringLiteral("formLayout"));

        verticalLayout_10->addLayout(formLayout);

        horizontalLayout_11 = new QHBoxLayout();
        horizontalLayout_11->setSpacing(10);
        horizontalLayout_11->setObjectName(QStringLiteral("horizontalLayout_11"));
        horizontalLayout_11->setContentsMargins(-1, 6, -1, 6);
        horizontalSpacer_5 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_11->addItem(horizontalSpacer_5);

        pushButton_8 = new QPushButton(page_6);
        pushButton_8->setObjectName(QStringLiteral("pushButton_8"));
        QFont font5;
        font5.setFamily(QString::fromUtf8("\345\215\216\346\226\207\346\245\267\344\275\223"));
        font5.setPointSize(10);
        pushButton_8->setFont(font5);

        horizontalLayout_11->addWidget(pushButton_8);

        pushButton_Revise = new QPushButton(page_6);
        pushButton_Revise->setObjectName(QStringLiteral("pushButton_Revise"));
        pushButton_Revise->setFont(font5);

        horizontalLayout_11->addWidget(pushButton_Revise);


        verticalLayout_10->addLayout(horizontalLayout_11);

        verticalLayout_10->setStretch(0, 1);
        verticalLayout_10->setStretch(1, 8);
        verticalLayout_10->setStretch(3, 1);

        verticalLayout_11->addLayout(verticalLayout_10);

        verticalLayout_11->setStretch(0, 1);
        verticalLayout_11->setStretch(1, 2);
        verticalLayout_11->setStretch(2, 7);

        verticalLayout_12->addLayout(verticalLayout_11);

        stackedWidget->addWidget(page_6);
        page_5 = new QWidget();
        page_5->setObjectName(QStringLiteral("page_5"));
        verticalLayout_5 = new QVBoxLayout(page_5);
        verticalLayout_5->setSpacing(0);
        verticalLayout_5->setObjectName(QStringLiteral("verticalLayout_5"));
        verticalLayout_5->setContentsMargins(0, 0, 0, 0);
        titleWidget = new QWidget(page_5);
        titleWidget->setObjectName(QStringLiteral("titleWidget"));
        gridLayout_3 = new QGridLayout(titleWidget);
        gridLayout_3->setObjectName(QStringLiteral("gridLayout_3"));
        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_3->addItem(horizontalSpacer_2, 0, 0, 1, 1);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        horizontalLayout_3->setContentsMargins(-1, 6, 6, -1);
        pushButton_5 = new QPushButton(titleWidget);
        pushButton_5->setObjectName(QStringLiteral("pushButton_5"));
        pushButton_5->setMaximumSize(QSize(20, 20));
        pushButton_5->setFont(font1);

        horizontalLayout_3->addWidget(pushButton_5);

        pushButton_6 = new QPushButton(titleWidget);
        pushButton_6->setObjectName(QStringLiteral("pushButton_6"));
        pushButton_6->setMaximumSize(QSize(20, 20));
        pushButton_6->setFont(font1);

        horizontalLayout_3->addWidget(pushButton_6);


        gridLayout_3->addLayout(horizontalLayout_3, 0, 1, 1, 1);

        label = new QLabel(titleWidget);
        label->setObjectName(QStringLiteral("label"));
        QFont font6;
        font6.setFamily(QString::fromUtf8("\345\215\216\346\226\207\350\241\214\346\245\267"));
        font6.setPointSize(48);
        font6.setBold(true);
        font6.setWeight(75);
        label->setFont(font6);
        label->setAlignment(Qt::AlignCenter);

        gridLayout_3->addWidget(label, 1, 0, 1, 2);


        verticalLayout_5->addWidget(titleWidget);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setSpacing(10);
        horizontalLayout_6->setObjectName(QStringLiteral("horizontalLayout_6"));
        horizontalLayout_6->setContentsMargins(30, 40, 10, 40);
        label_4 = new QLabel(page_5);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setMaximumSize(QSize(40, 50));
        label_4->setPixmap(QPixmap(QString::fromUtf8(":/jpg/image/login.jpg")));
        label_4->setScaledContents(true);

        horizontalLayout_6->addWidget(label_4);

        gridLayout = new QGridLayout();
        gridLayout->setSpacing(10);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        gridLayout->setContentsMargins(20, -1, 20, -1);
        label_2 = new QLabel(page_5);
        label_2->setObjectName(QStringLiteral("label_2"));
        QFont font7;
        font7.setFamily(QString::fromUtf8("\345\271\274\345\234\206"));
        font7.setPointSize(11);
        font7.setBold(false);
        font7.setWeight(50);
        label_2->setFont(font7);

        gridLayout->addWidget(label_2, 0, 0, 1, 1);

        lineEdit = new QLineEdit(page_5);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));
        QFont font8;
        font8.setFamily(QString::fromUtf8("\345\271\274\345\234\206"));
        font8.setBold(false);
        font8.setWeight(50);
        lineEdit->setFont(font8);

        gridLayout->addWidget(lineEdit, 0, 1, 1, 1);

        label_3 = new QLabel(page_5);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setFont(font7);

        gridLayout->addWidget(label_3, 1, 0, 1, 1);

        lineEdit_2 = new QLineEdit(page_5);
        lineEdit_2->setObjectName(QStringLiteral("lineEdit_2"));
        lineEdit_2->setFont(font8);
        lineEdit_2->setStyleSheet(QStringLiteral("#stackedWidget{border-left:1px solid rgb(70,255,255);border-top:1px solid rgb(70,255,255);border-right:1px solid rgb(70,255,255)}"));
        lineEdit_2->setEchoMode(QLineEdit::Password);

        gridLayout->addWidget(lineEdit_2, 1, 1, 1, 1);


        horizontalLayout_6->addLayout(gridLayout);

        horizontalLayout_6->setStretch(0, 1);
        horizontalLayout_6->setStretch(1, 5);

        verticalLayout_5->addLayout(horizontalLayout_6);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setSpacing(10);
        horizontalLayout_5->setObjectName(QStringLiteral("horizontalLayout_5"));
        horizontalLayout_5->setContentsMargins(-1, 10, 20, 20);
        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_5->addItem(horizontalSpacer_3);

        pushButton_Confirm = new QPushButton(page_5);
        pushButton_Confirm->setObjectName(QStringLiteral("pushButton_Confirm"));
        pushButton_Confirm->setFont(font7);

        horizontalLayout_5->addWidget(pushButton_Confirm);

        pushButton_4 = new QPushButton(page_5);
        pushButton_4->setObjectName(QStringLiteral("pushButton_4"));
        pushButton_4->setFont(font7);

        horizontalLayout_5->addWidget(pushButton_4);


        verticalLayout_5->addLayout(horizontalLayout_5);

        verticalLayout_5->setStretch(0, 1);
        verticalLayout_5->setStretch(1, 9);
        verticalLayout_5->setStretch(2, 5);
        stackedWidget->addWidget(page_5);

        verticalLayout_2->addWidget(stackedWidget);


        retranslateUi(Admin);
        QObject::connect(pushButton_2, SIGNAL(clicked()), Admin, SLOT(showMinimized()));
        QObject::connect(pushButton, SIGNAL(clicked()), Admin, SLOT(close()));
        QObject::connect(pushButton_4, SIGNAL(clicked()), Admin, SLOT(close()));
        QObject::connect(pushButton_7, SIGNAL(clicked()), Admin, SLOT(showMinimized()));
        QObject::connect(pushButton_5, SIGNAL(clicked()), Admin, SLOT(showMinimized()));
        QObject::connect(pushButton_6, SIGNAL(clicked()), Admin, SLOT(close()));

        stackedWidget->setCurrentIndex(2);
        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(Admin);
    } // setupUi

    void retranslateUi(QDialog *Admin)
    {
        Admin->setWindowTitle(QApplication::translate("Admin", "Dialog", nullptr));
        pushButton_2->setText(QApplication::translate("Admin", "\357\274\215", nullptr));
        pushButton->setText(QApplication::translate("Admin", "\303\227", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tabWidgetPage1), QString());
        tabWidget->setTabText(tabWidget->indexOf(tabWidgetPage2), QString());
        tabWidget->setTabText(tabWidget->indexOf(tabWidgetPage3), QString());
        pushButton_7->setText(QApplication::translate("Admin", "\357\274\215", nullptr));
        pushButton_3->setText(QApplication::translate("Admin", "\303\227", nullptr));
        label_5->setText(QString());
        label_6->setText(QApplication::translate("Admin", "\345\247\223\345\220\215\357\274\232", nullptr));
        label_7->setText(QApplication::translate("Admin", "\346\227\266\346\234\237\357\274\232", nullptr));
        label_8->setText(QApplication::translate("Admin", "\347\256\200\344\273\213\357\274\232", nullptr));
        label_9->setText(QApplication::translate("Admin", "\344\272\272\347\224\237\347\273\217\345\216\206\357\274\232", nullptr));
        pushButton_8->setText(QApplication::translate("Admin", "\345\210\240\351\231\244", nullptr));
        pushButton_Revise->setText(QApplication::translate("Admin", "\344\277\256\346\224\271", nullptr));
        pushButton_5->setText(QApplication::translate("Admin", "\357\274\215", nullptr));
        pushButton_6->setText(QApplication::translate("Admin", "\303\227", nullptr));
        label->setText(QApplication::translate("Admin", "\347\256\241\347\220\206\345\221\230\347\231\273\345\275\225", nullptr));
        label_4->setText(QString());
        label_2->setText(QApplication::translate("Admin", "\347\256\241\347\220\206\345\221\230\345\220\215", nullptr));
        lineEdit->setPlaceholderText(QApplication::translate("Admin", "\350\257\267\350\276\223\345\205\245\347\256\241\347\220\206\345\221\230\345\220\215", nullptr));
        label_3->setText(QApplication::translate("Admin", "\345\257\206\347\240\201", nullptr));
        lineEdit_2->setPlaceholderText(QApplication::translate("Admin", "\350\257\267\350\276\223\345\205\245\345\257\206\347\240\201", nullptr));
        pushButton_Confirm->setText(QApplication::translate("Admin", "\347\241\256\345\256\232", nullptr));
        pushButton_4->setText(QApplication::translate("Admin", "\345\217\226\346\266\210", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Admin: public Ui_Admin {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADMIN_H
