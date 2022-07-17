//#include "mainwindow.h"
//#include "ui_mainwindow.h"

//MainWindow::MainWindow(QWidget *parent)
//    : QMainWindow(parent)
//    , ui(new Ui::MainWindow)
//{
//    ui->setupUi(this);
//}

//MainWindow::~MainWindow()
//{
//    delete ui;
//}
//-------------------

#include "mainwindow.h"
#include "ui_mainwidget.h"
#include <QDebug>
#include <QSqlError>
#include <QSqlRecord>

MainWidget::MainWidget(QWidget *parent) :
    QWidget(parent) ,
    ui(new Ui::MainWidget)
{
    ui->setupUi(this) ;

        db = QSqlDatabase::addDatabase("QMYSQL");
        db.setHostName("127.0.0.1");
        db.setDatabaseName("test");
        db.setUserName("root");
        db.setPassword("1234567");
        if (!db.open()){
            qDebug() << db.lastError().text();
        }
else {
            qDebug() << "Success!";
        }
}
MainWidget:: ~MainWidget ()
{ delete ui;
}
