#ifndef ADMIN_H
#define ADMIN_H

#include <QDialog>
#include <QMessageBox>
#include <QWidget>
#include <QMouseEvent>
#include <QStatusBar>
#include <QSqlDatabase>
#include <QSqlQuery>
#include <QSqlQueryModel>
#include <QSqlTableModel>
#include <QStandardItemModel>

namespace Ui {
class Admin;
}

class Admin : public QDialog
{
    Q_OBJECT

public:
    explicit Admin(QWidget *parent = nullptr);
    ~Admin();

    void mousePressEvent(QMouseEvent *event);
    void mouseReleaseEvent(QMouseEvent *event);
    void mouseMoveEvent(QMouseEvent *event);

    //鼠标是否按下属性
    bool m_bPressed=false;
    //按下后当前鼠标位置属性
    QPoint m_point;


private slots:
    void on_pushButton_Confirm_clicked();

    void on_tableView_Celebrity_doubleClicked(const QModelIndex &index);

    void on_pushButton_3_clicked();

    void on_pushButton_Revise_clicked();

    void on_tableView_Emperor_doubleClicked(const QModelIndex &index);

    void on_pushButton_8_clicked();

private:
    Ui::Admin *ui;
    QStatusBar *m_statusBar;
    QString m_name="admin";
    QString m_password="123";
    QString name;
    int k;

};

#endif // ADMIN_H
