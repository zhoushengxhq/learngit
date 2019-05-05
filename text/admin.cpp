#include "admin.h"
#include "ui_admin.h"

Admin::Admin(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Admin)
{
    ui->setupUi(this);
    setWindowFlags(Qt::FramelessWindowHint | windowFlags());
    m_statusBar = new QStatusBar(this);
    layout()->addWidget(m_statusBar);
    ui->pushButton_Confirm->setStyleSheet("background-color: #BBFFFF");
    ui->pushButton_4->setStyleSheet("background-color: #BBFFFF");
    m_statusBar->setStyleSheet("background-color: #C1CDC1;border-left:1px solid rgb(70,255,255);border-bottom:1px solid rgb(70,255,255);border-right:1px solid rgb(70,255,255)");
    ui->titleWidget->setStyleSheet("background-color: #C1CDC1");
}

Admin::~Admin()
{
    delete ui;
}

void Admin::mousePressEvent(QMouseEvent *event)
{
    if (event->button() == Qt::LeftButton)//判断左键是否按下
    {
        m_bPressed = true;
        m_point = event->pos();
    }
}
void Admin::mouseReleaseEvent(QMouseEvent *event)
{
    Q_UNUSED(event);
    m_bPressed = false;
}
void Admin::mouseMoveEvent(QMouseEvent *event)
{
    if (m_bPressed)
        move(event->pos() - m_point + pos());
}

void Admin::on_pushButton_Confirm_clicked()
{
    if(m_name==ui->lineEdit->text()&&m_password==ui->lineEdit_2->text())
    {
        ui->stackedWidget->setCurrentIndex(0);
        QMessageBox::information(this, tr("提示"), tr("登录成功!"));
        QSqlQueryModel *model = new QSqlQueryModel;
        model->setQuery("select UserName,Phone,Address from User");
        model->setHeaderData(0, Qt::Horizontal, tr("姓名"));
        model->setHeaderData(1, Qt::Horizontal, tr("电话号码"));
        model->setHeaderData(2, Qt::Horizontal, tr("地址"));
        ui->tableView_User->setModel(model);
        ui->tableView_User->resizeColumnsToContents();  //根据内容自动调整所有列的列宽
        ui->tableView_User->setStyleSheet("QTableView{background-color: #EEE9E9;""alternate-background-color: rgb(234, 234, 234);}");//设置表格颜色

        QSqlQueryModel *model2 = new QSqlQueryModel;
        model2->setQuery("select * from Celebrity");
        model2->setHeaderData(0, Qt::Horizontal, tr("姓名"));
        model2->setHeaderData(1, Qt::Horizontal, tr("出生-死亡日期"));
        model2->setHeaderData(2, Qt::Horizontal, tr("介绍"));
        model2->setHeaderData(3, Qt::Horizontal, tr("人生经历"));
        ui->tableView_Celebrity->setModel(model2);
        ui->tableView_Celebrity->setSelectionBehavior(QAbstractItemView::SelectRows);
        ui->tableView_Celebrity->resizeColumnsToContents();  //根据内容自动调整所有列的列宽
        //ui->tableView_Celebrity->setStyleSheet("QTableView{background-color: #EEE9E9;""alternate-background-color: rgb(234, 234, 234);}");//设置表格颜色

        QSqlQueryModel *model3 = new QSqlQueryModel;
        model3->setQuery("select * from Emperor");
        model3->setHeaderData(0, Qt::Horizontal, tr("姓名"));
        model3->setHeaderData(1, Qt::Horizontal, tr("庙号"));
        model3->setHeaderData(2, Qt::Horizontal, tr("出生-死亡日期"));
        model3->setHeaderData(3, Qt::Horizontal, tr("人生经历"));
        ui->tableView_Emperor->setModel(model3);
        ui->tableView_Emperor->setSelectionBehavior(QAbstractItemView::SelectRows); //设置选中时为整行选中
        ui->tableView_Emperor->resizeColumnsToContents();  //根据内容自动调整所有列的列宽
        //ui->tableView_Emperor->setStyleSheet("QTableView{background-color: #EEE9E9;""alternate-background-color: rgb(234, 234, 234);}");//设置表格颜色
    }
}

void Admin::on_tableView_Celebrity_doubleClicked(const QModelIndex &index)
{
    ui->lineEdit_name->clear();
    ui->lineEdit_time->clear();
    ui->textEdit_brief->clear();
    ui->textEdit_experience->clear();
    int row=ui->tableView_Celebrity->currentIndex().row();
    QAbstractItemModel *model = ui->tableView_Celebrity->model();
    QString time,brief,experience;
    QModelIndex index0 = model->index(row,0);
    name = model->data(index0).toString();
    QModelIndex index1 = model->index(row,1);
    time = model->data(index1).toString();
    QModelIndex index2 = model->index(row,2);
    brief = model->data(index2).toString();
    QModelIndex index3 = model->index(row,3);
    experience = model->data(index3).toString();
    ui->lineEdit_name->setText(name);
    ui->lineEdit_time->setText(time);
    ui->textEdit_brief->setText(brief);
    ui->textEdit_experience->setText(experience);
    ui->stackedWidget->setCurrentIndex(1);
    k=0;
}

void Admin::on_pushButton_3_clicked()
{
    ui->stackedWidget->setCurrentIndex(0);
}

void Admin::on_pushButton_Revise_clicked()
{
    if(k==0)
    {
        QString time,brief,experience;
        name=ui->lineEdit_name->text();
        time=ui->lineEdit_time->text();
        brief=ui->textEdit_brief->toPlainText();
        experience=ui->textEdit_experience->toPlainText();
        int ok = QMessageBox::warning(this,tr("修改!"),tr("你确定修改当前信息？"),QMessageBox::Yes,QMessageBox::No);
        if(ok == QMessageBox::Yes)
        {
           //QStandardItemModel *model = new QStandardItemModel();
           //model->removeRow(row);
           QSqlQuery query;
           QString str =  QString("delete from Celebrity where Cname = '%1'").arg(name);
           query.exec(str);

           query.prepare("INSERT INTO Celebrity VALUES(:name,:time,:brief,:experience)");
           query.bindValue(":name",name);
           query.bindValue(":time",time);
           query.bindValue(":brief",brief);
           query.bindValue(":experience",experience);
           query.exec();
           QSqlQueryModel *model2 = new QSqlQueryModel;
           model2->setQuery("select * from Celebrity");
           model2->setHeaderData(0, Qt::Horizontal, tr("姓名"));
           model2->setHeaderData(1, Qt::Horizontal, tr("出生-死亡日期"));
           model2->setHeaderData(2, Qt::Horizontal, tr("介绍"));
           model2->setHeaderData(3, Qt::Horizontal, tr("人生经历"));
           ui->tableView_Celebrity->setModel(model2);
           ui->tableView_Celebrity->setSelectionBehavior(QAbstractItemView::SelectRows);
           ui->tableView_Celebrity->resizeColumnsToContents();
           ui->stackedWidget->setCurrentIndex(0);
           QMessageBox::information(this, tr("提示"), tr("修改成功!"));
        }
        else
            ui->stackedWidget->setCurrentIndex(0);
    }
    else
    {
        QString time,brief,experience;
        name=ui->lineEdit_name->text();
        time=ui->lineEdit_time->text();
        brief=ui->textEdit_brief->toPlainText();
        experience=ui->textEdit_experience->toPlainText();
        int ok = QMessageBox::warning(this,tr("修改!"),tr("你确定修改当前信息？"),QMessageBox::Yes,QMessageBox::No);
        if(ok == QMessageBox::Yes)
        {
           //QStandardItemModel *model = new QStandardItemModel();
           //model->removeRow(row);
           QSqlQuery query;
           QString str =  QString("delete from Emperor where Cname = '%1'").arg(name);
           query.exec(str);

           query.prepare("INSERT INTO Emperor VALUES(:name,:brief,:time,:experience)");
           query.bindValue(":name",name);
           query.bindValue(":brief",brief);
           query.bindValue(":time",time);
           query.bindValue(":experience",experience);
           query.exec();
           QSqlQueryModel *model2 = new QSqlQueryModel;
           model2->setQuery("select * from Emperor");
           model2->setHeaderData(0, Qt::Horizontal, tr("姓名"));
           model2->setHeaderData(1, Qt::Horizontal, tr("庙号"));
           model2->setHeaderData(2, Qt::Horizontal, tr("出生-死亡日期"));
           model2->setHeaderData(3, Qt::Horizontal, tr("人生经历"));
           ui->tableView_Emperor->setModel(model2);
           ui->tableView_Emperor->setSelectionBehavior(QAbstractItemView::SelectRows);
           ui->tableView_Emperor->resizeColumnsToContents();
           ui->stackedWidget->setCurrentIndex(0);
           QMessageBox::information(this, tr("提示"), tr("修改成功!"));
        }
        else
            ui->stackedWidget->setCurrentIndex(0);
    }
}

void Admin::on_tableView_Emperor_doubleClicked(const QModelIndex &index)
{
    ui->lineEdit_name->clear();
    ui->lineEdit_time->clear();
    ui->textEdit_brief->clear();
    ui->textEdit_experience->clear();
    int row=ui->tableView_Emperor->currentIndex().row();
    QAbstractItemModel *model = ui->tableView_Emperor->model();
    QString time,brief,experience;
    QModelIndex index0 = model->index(row,0);
    name = model->data(index0).toString();
    QModelIndex index1 = model->index(row,1);
    brief = model->data(index1).toString();
    QModelIndex index2 = model->index(row,2);
    time = model->data(index2).toString();
    QModelIndex index3 = model->index(row,3);
    experience = model->data(index3).toString();
    ui->lineEdit_name->setText(name);
    ui->lineEdit_time->setText(time);
    ui->textEdit_brief->setText(brief);
    ui->textEdit_experience->setText(experience);
    ui->stackedWidget->setCurrentIndex(1);
    k=1;
}

void Admin::on_pushButton_8_clicked()
{
    if(k==0)
    {
        int ok = QMessageBox::warning(this,tr("删除!"),tr("你确定删除当前信息？"),QMessageBox::Yes,QMessageBox::No);
        if(ok == QMessageBox::Yes)
        {
            name=ui->lineEdit_name->text();
            QSqlQuery query;
            QString str =  QString("delete from Celebrity where Cname = '%1'").arg(name);
            query.exec(str);
            QSqlQueryModel *model2 = new QSqlQueryModel;
            model2->setQuery("select * from Celebrity");
            model2->setHeaderData(0, Qt::Horizontal, tr("姓名"));
            model2->setHeaderData(1, Qt::Horizontal, tr("出生-死亡日期"));
            model2->setHeaderData(2, Qt::Horizontal, tr("介绍"));
            model2->setHeaderData(3, Qt::Horizontal, tr("人生经历"));
            ui->tableView_Celebrity->setModel(model2);
            ui->tableView_Celebrity->setSelectionBehavior(QAbstractItemView::SelectRows);
            ui->tableView_Celebrity->resizeColumnsToContents();

            ui->stackedWidget->setCurrentIndex(0);
            QMessageBox::information(this, tr("提示"), tr("删除成功!"));
        }
        else
            ui->stackedWidget->setCurrentIndex(0);
    }
    else
    {
        int ok = QMessageBox::warning(this,tr("修改!"),tr("你确定修改当前信息？"),QMessageBox::Yes,QMessageBox::No);
        if(ok == QMessageBox::Yes)
        {
            name=ui->lineEdit_name->text();
            QSqlQuery query;
            QString str =  QString("delete from Emperor where Cname = '%1'").arg(name);
            query.exec(str);
            QSqlQueryModel *model2 = new QSqlQueryModel;
            model2->setQuery("select * from Emperor");
            model2->setHeaderData(0, Qt::Horizontal, tr("姓名"));
            model2->setHeaderData(1, Qt::Horizontal, tr("庙号"));
            model2->setHeaderData(2, Qt::Horizontal, tr("出生-死亡日期"));
            model2->setHeaderData(3, Qt::Horizontal, tr("人生经历"));
            ui->tableView_Emperor->setModel(model2);
            ui->tableView_Emperor->setSelectionBehavior(QAbstractItemView::SelectRows);
            ui->tableView_Emperor->resizeColumnsToContents();
            ui->stackedWidget->setCurrentIndex(0);
            QMessageBox::information(this, tr("提示"), tr("删除成功!"));
        }
        else
            ui->stackedWidget->setCurrentIndex(0);
    }
}
