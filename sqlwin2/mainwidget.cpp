//#include "mainwidget.h"
//#include "ui_mainwidget.h"

//MainWidget::MainWidget(QWidget *parent)
//    : QWidget(parent)
//    , ui(new Ui::MainWidget)
//{
//    ui->setupUi(this);
//}

//MainWidget::~MainWidget()
//{
//    delete ui;
//}

#include "mainwidget.h"
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
            qDebug() << "opened!";
        }
}
MainWidget:: ~MainWidget ()
{ delete ui;
}

void MainWidget::on_btnInsert_clicked()
{
    QSqlQuery query = QSqlQuery(db);
    if (!query.exec("select *from products"){
            qDebug() << query.lastError.databaseText();
            qDebug() << query.lastError.driverText();
            return;
}
            while(query.next()){
            qDebug() << query.record();
}

}

