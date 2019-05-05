#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QWidget>
#include <QMouseEvent>
#include <QPalette>
#include "signin.h"
#include "admin.h"

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

    void mousePressEvent(QMouseEvent *event);
    void mouseReleaseEvent(QMouseEvent *event);
    void mouseMoveEvent(QMouseEvent *event);

    //鼠标是否按下属性
    bool m_bPressed=false;
    //按下后当前鼠标位置属性
    QPoint m_point;

private slots:
    void on_pushButton_SignIn_clicked();

    void on_pushButton_SignIn_2_clicked();

private:
    Ui::MainWindow *ui;
};

#endif // MAINWINDOW_H
