#include "signin.h"
#include "ui_signin.h"

SignIn::SignIn(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::SignIn)
{
    ui->setupUi(this);
    setWindowFlags(Qt::FramelessWindowHint | windowFlags());
//    ui->stackedWidget->setStyleSheet("background-color: #8B8B7A");
//    ui->label_8->setStyleSheet("background-color: #8B8B7A");
//    ui->label_9->setStyleSheet("background-color: #8B8B7A");
//    ui->tabWidget->setStyleSheet("background-color: #EEE9E9");
//    ui->lineEdit_UserName->setStyleSheet("background-color: #FFFAFA");
    ui->pushButton_Confirm->setStyleSheet("background-color: #BBFFFF");
    ui->pushButton_Cancel->setStyleSheet("background-color: #BBFFFF");
    ui->pushButton_Register->setStyleSheet("background-color: #BBFFFF");
    ui->pushButton_Confirm_2->setStyleSheet("background-color: #BBFFFF");
    ui->pushButton_Cancel_2->setStyleSheet("background-color: #BBFFFF");
    ui->pushButton_7->setStyleSheet("background-color: #BBFFFF");
    m_statusBar = new QStatusBar(this);
    layout()->addWidget(m_statusBar);
    m_statusBar->setStyleSheet("background-color: #C1CDC1;border-left:1px solid rgb(70,255,255);border-bottom:1px solid rgb(70,255,255);border-right:1px solid rgb(70,255,255)");

    ui->titleWidget->setStyleSheet("background-color: #C1CDC1");
    ui->titleWidget_2->setStyleSheet("background-color: #C1CDC1");
}

SignIn::~SignIn()
{
    delete ui;
}

void SignIn::mousePressEvent(QMouseEvent *event)
{
    if (event->button() == Qt::LeftButton)//判断左键是否按下
    {
        m_bPressed = true;
        m_point = event->pos();
    }
}
void SignIn::mouseReleaseEvent(QMouseEvent *event)
{
    Q_UNUSED(event);
    m_bPressed = false;
}
void SignIn::mouseMoveEvent(QMouseEvent *event)
{
    if (m_bPressed)
        move(event->pos() - m_point + pos());
}

void SignIn::on_pushButton_Register_clicked()
{
    ui->stackedWidget->setCurrentIndex(0);
}

void SignIn::on_pushButton_Confirm_clicked()
{
    QString name = ui->lineEdit_UserName->text();
    QString passwd = ui->lineEdit_PassWord->text();
    QSqlQuery query;
    query.exec("select UserName,Password from User");
    int k = 0;
    while(query.next())
    {
        if(name == query.value(0).toString() && passwd == query.value(1).toString())
            k = 1;
    }
    if(k)
    {
        ui->stackedWidget->setCurrentIndex(1);
        QMessageBox::information(this, tr("提示"), tr("登录成功!"));
        QSqlQueryModel *model = new QSqlQueryModel;
        model->setQuery("select * from Emperor");
        model->setHeaderData(0, Qt::Horizontal, tr("姓名"));
        model->setHeaderData(1, Qt::Horizontal, tr("庙号"));
        model->setHeaderData(2, Qt::Horizontal, tr("出生-死亡日期"));
        model->setHeaderData(3, Qt::Horizontal, tr("人生经历"));
        ui->tableView_Emperor->setModel(model);

        ui->tableView_Emperor->setSelectionBehavior(QAbstractItemView::SelectRows); //设置选中时为整行选中
        ui->tableView_Emperor->resizeColumnsToContents();  //根据内容自动调整所有列的列宽
        //ui->tableView_Emperor->setStyleSheet("QTableView{background-color: #EEE9E9;""alternate-background-color: rgb(234, 234, 234);}");//设置表格颜色

        QSqlQueryModel *model2 = new QSqlQueryModel;
        model2->setQuery("select * from Celebrity");
        model2->setHeaderData(0, Qt::Horizontal, tr("姓名"));
        model2->setHeaderData(1, Qt::Horizontal, tr("出生-死亡日期"));
        model2->setHeaderData(2, Qt::Horizontal, tr("介绍"));
        model2->setHeaderData(3, Qt::Horizontal, tr("人生经历"));
        ui->tableView_Celebrity->setModel(model2);
        ui->tableView_Celebrity->setSelectionBehavior(QAbstractItemView::SelectRows); //设置选中时为整行选中
        //ui->tableView_Celebrity->setEditTriggers(QAbstractItemView::NoEditTriggers);  //设置表格的单元为只读属性，即不能编辑
        ui->tableView_Celebrity->resizeColumnsToContents();  //根据内容自动调整所有列的列宽
        //ui->tableView_Celebrity->setStyleSheet("QTableView{background-color: #EEE9E9;""alternate-background-color: rgb(234, 234, 234);}");//设置表格颜色
    }
    else
    {
        QMessageBox::information(this, tr("警告"), tr("用户名或密码错误!"));
        ui->lineEdit_UserName->clear();
        ui->lineEdit_PassWord->clear();
        ui->lineEdit_UserName->setFocus();
    }
}

void SignIn::on_pushButton_Confirm_2_clicked()
{
    QString a=ui->lineEdit_UserName_2->text();
    QString b=ui->lineEdit_PassWord_2->text();
    QString c=ui->lineEdit_Phone->text();
    QString d=ui->lineEdit_Address->text();
    QString e=ui->lineEdit_PassWord_3->text();
    if(a==""||b==""||c==""||d==""||e=="")
        QMessageBox::information(this, tr("提示"), tr("请填完整信息!"));
    else if(ui->lineEdit_PassWord_2->text() != ui->lineEdit_PassWord_3->text())
    {
        QMessageBox::information(this, tr("提示"), tr("两次密码不同!"));
        ui->lineEdit_PassWord_2->clear();
        ui->lineEdit_PassWord_3->clear();
        ui->lineEdit_PassWord_2->setFocus();
    }
    else
    {
        //QSqlQueryModel *model = new QSqlQueryModel;
        QSqlQuery query;
        query.exec("select UserName from User");
        int k = 0;
        while(query.next())
        {
            if(a == query.value(0).toString())
                k = 1;
        }
        if(k==1)
        {
            QMessageBox::information(this, tr("提示"), tr("该用户名已有!"));
            ui->lineEdit_UserName_2->clear();
            ui->lineEdit_UserName_2->setFocus();
        }
        else
        {
            query.prepare("INSERT INTO User VALUES(:FaceData,:StrName,:Sijian,:Shijian)");
            query.bindValue(":FaceData",a);
            query.bindValue(":StrName",b);
            query.bindValue(":Sijian",c);
            query.bindValue(":Shijian",d);
            query.exec();
            ui->stackedWidget->setCurrentIndex(3);
            QMessageBox::information(this, tr("提示"), tr("注册成功!"));
        }
    }
}

void SignIn::on_pushButton_7_clicked()
{
    ui->label_Name->clear();
    ui->label_Time->clear();
    ui->label_Experience->clear();
    QString name=ui->lineEdit->text();
    QString name1,time,experience;
    QSqlQuery query;
    int k=1;
    query.exec("select * from Celebrity");
    while(query.next())
    {
        if(name==query.value(0).toString())
        {
            name1 = query.value(0).toString();
            time = query.value(1).toString();
            experience = query.value(3).toString();
            ui->label_Name->setText(name1);
            ui->label_Time->setText(time);
            ui->label_Experience->setText(experience);
            ui->stackedWidget->setCurrentIndex(2);
            k=0;
        }
    }
    if(k)
        QMessageBox::information(this, tr("提示"), tr("查无此人!"));
}

void SignIn::on_pushButton_8_clicked()
{
    ui->stackedWidget->setCurrentIndex(1);
}

void SignIn::on_tableView_Emperor_doubleClicked(const QModelIndex &index)
{
    ui->label_Name->clear();
    ui->label_Time->clear();
    ui->label_Experience->clear();
    int row=ui->tableView_Emperor->currentIndex().row();
    QAbstractItemModel *model = ui->tableView_Emperor->model ();
    QString name,time,experience;
    QModelIndex index0 = model->index(row,0);
    name = model->data(index0).toString();
    QModelIndex index1 = model->index(row,2);
    time = model->data(index1).toString();
    QModelIndex index2 = model->index(row,3);
    experience = model->data(index2).toString();
    ui->label_Name->setText(name);
    ui->label_Time->setText(time);
    ui->label_Experience->setText(experience);
    ui->stackedWidget->setCurrentIndex(2);
}

void SignIn::on_tableView_Celebrity_doubleClicked(const QModelIndex &index)
{
    ui->label_Name->clear();
    ui->label_Time->clear();
    ui->label_Experience->clear();
    int row=ui->tableView_Celebrity->currentIndex().row();
    QAbstractItemModel *model = ui->tableView_Celebrity->model();
    QString name,time,experience;
    QModelIndex index0 = model->index(row,0);
    name = model->data(index0).toString();
    QModelIndex index1 = model->index(row,1);
    time = model->data(index1).toString();
    QModelIndex index2 = model->index(row,3);
    experience = model->data(index2).toString();
    ui->label_Name->setText(name);
    ui->label_Time->setText(time);
    ui->label_Experience->setText(experience);
    ui->stackedWidget->setCurrentIndex(2);
}
