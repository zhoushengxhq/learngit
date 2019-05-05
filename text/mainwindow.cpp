#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    setWindowFlags(Qt::FramelessWindowHint | windowFlags());
    ui->titleWidget->setStyleSheet("background-color: #C1CDC1");
    ui->pushButton_SignIn->setStyleSheet("background-color: #BBFFFF");
    ui->pushButton_SignIn_2->setStyleSheet("background-color: #BBFFFF");
    ui->statusBar->setStyleSheet("background-color: #C1CDC1;border-left:1px solid rgb(70,255,255);border-bottom:1px solid rgb(70,255,255);border-right:1px solid rgb(70,255,255)");
    ui->centralWidget->setStyleSheet("background-color: #F5F5F5");
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::mousePressEvent(QMouseEvent *event)
{
    if (event->button() == Qt::LeftButton)//判断左键是否按下
    {
        m_bPressed = true;
        m_point = event->pos();
    }
}
void MainWindow::mouseReleaseEvent(QMouseEvent *event)
{
    Q_UNUSED(event);
    m_bPressed = false;
}
void MainWindow::mouseMoveEvent(QMouseEvent *event)
{
    if (m_bPressed)
        move(event->pos() - m_point + pos());
}


void MainWindow::on_pushButton_SignIn_clicked()
{
    SignIn a;
    this->hide();
    a.exec();
    this->show();
}

void MainWindow::on_pushButton_SignIn_2_clicked()
{
    Admin b;
    this->hide();
    b.exec();
    this->show();
}
