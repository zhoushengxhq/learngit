#ifndef SQL_H
#define SQL_H
#include <QSqlDatabase>
static bool createConnection()
{
    QSqlDatabase db = QSqlDatabase::addDatabase("QSQLITE");
    db.setDatabaseName("database.db");
    if(!db.open()) return false;
    return true;
}
#endif // SQL_H
