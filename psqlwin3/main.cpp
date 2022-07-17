#include "mainwindow.h"
//#include "connection.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
//    if (!createConnection())
//        return 1;
//    else {
//        return 0;
//    }

//    if (!createTables())
//        return 1;
//    else {
//        return 0;
//    }
    w.show();
    return a.exec();
}
