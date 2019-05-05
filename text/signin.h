#ifndef SIGNIN_H
#define SIGNIN_H

#include <QDialog>
#include <QMessageBox>
#include <QWidget>
#include <QMouseEvent>
#include <QStatusBar>
#include <QSqlDatabase>
#include <QSqlQuery>
#include <QSqlQueryModel>
#include <QSqlTableModel>
#include <QCollator>
#include <QLocale>


namespace Ui {
class SignIn;
}

class SignIn : public QDialog
{
    Q_OBJECT

public:
    explicit SignIn(QWidget *parent = nullptr);
    ~SignIn();

    void mousePressEvent(QMouseEvent *event);
    void mouseReleaseEvent(QMouseEvent *event);
    void mouseMoveEvent(QMouseEvent *event);

    //鼠标是否按下属性
    bool m_bPressed=false;
    //按下后当前鼠标位置属性
    QPoint m_point;

private slots:
    void on_pushButton_Register_clicked();

    void on_pushButton_Confirm_clicked();

    void on_pushButton_Confirm_2_clicked();

    void on_pushButton_7_clicked();

    void on_pushButton_8_clicked();

    void on_tableView_Emperor_doubleClicked(const QModelIndex &index);

    void on_tableView_Celebrity_doubleClicked(const QModelIndex &index);

private:
    Ui::SignIn *ui;
    QStatusBar *m_statusBar;

};

#endif // SIGNIN_H
