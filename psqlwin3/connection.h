#ifndef CONNECTION_H
#define CONNECTION_H

#include <QtSql>
#include <QSqlDatabase>
#include <QMessageBox>
//#include <QSqlTableModel>



inline bool createConnection()
{
//    QSqlDatabase db = QSqlDatabase::addDatabase("QPSQL");
//            db.setDatabaseName("postgres");
//            db.setUserName("postgres");
//            db.setPassword("12345678");
//            if (!db.open()) {
//            QMessageBox::warning(0, "error db", db.lastError().text());
//            return false;
//            }
//            else
//            {
// //                QMessageBox::information(0, "uspeh", "connected") ;
//                return true;
//            }
    return true;
}

inline bool createTables()
{
//    QSqlQuery query;
//    query.exec("create table courses2 ("
//               "cur_no text PRIMARY KEY,"
//               "title text,"
//               "hours integer)");
    return 1;
}

#endif // CONNECTION_H
