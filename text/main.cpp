#include "mainwindow.h"
#include <QApplication>
#include "sql.h"
#include <QStyleFactory>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    QApplication::setStyle(QStyleFactory::create("Fusion"));
    if(!createConnection())
        return 1;

    MainWindow w;
    w.show();

    return a.exec();
}
