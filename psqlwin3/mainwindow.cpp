#include "mainwindow.h"
#include "ui_mainwindow.h"
//#include <iostream>
#include "QtDebug"
#include <QDebug>
#include <QSqlError>
#include <QSqlRecord>
#include <typeinfo>
#include "mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    QSqlDatabase db = QSqlDatabase::addDatabase("QPSQL");
    db.setHostName("127.0.0.1");
    db.setDatabaseName("postgres");
    db.setUserName("postgres");
    db.setPassword("12345678");
    if (!db.open()){
        qDebug() << db.lastError().text();
    }
    else {
        qDebug() << "Success!" << typeid(db).name();
//        model = new QSqlTableModel(this, db);
//        model->setTable("courses2");
//        model->select();
//        ui->tableView->setModel(model);

        QSqlTableModel model;
        model.setTable("employee");
        model.select();

        QTableView view;
        view.setModel(&model);
        view.show();

        QSqlQuery query = QSqlQuery(db);
        if (!query.exec(
                     "select * from courses;"
//                    "create table courses3 ("
//                       "cur_no text PRIMARY KEY,"
//                       "title text,"
//                       "hours integer);"
                        )){
            //                                qDebug() << query.lastError.databaseText();
            //                                qDebug() << query.lastError.driverText();
            qDebug() << "нет select";
            return;
        }
//         if (!query.exec(
//        "INSERT INTO courses3(c_no, title, hours) VALUES ('CS301', 'Базы данных', 30), ('CS305', 'Сети ЭВМ', 60);"
//                     )){
//                     qDebug() << "не созданы элементы";
//                     return;
//                 }
//         if (!query.exec(
//        "select * from courses3;"
//                     )){
//                     qDebug() << "не создан выборка";
//                     return;
//                 }

        qDebug() << "1";
        qDebug() << typeid(query).name();
        qDebug() << "2";



        while(query.next()){
            qDebug() << "вывод таблицы";
            qDebug() << query.record();
        }

    }
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_btnSubmit_clicked()
{

        QSqlQuery query = QSqlQuery(db);
        if (!query.exec("select *from products")){
//                qDebug() << query.lastError.databaseText();
//                qDebug() << query.lastError.driverText();
                return;
    }
                while(query.next()){
                qDebug() << query.record();
    }
        qDebug() << "out вывод" ;
//        qDebug() << typeid(int_var).name()


}


void MainWindow::on_btnSelect_clicked()
{
    QSqlQuery query = QSqlQuery(db);
    if (!query.exec("select *from products")){
//                qDebug() << query.lastError.databaseText();
//                qDebug() << query.lastError.driverText();
            return;
}
            while(query.next()){
            qDebug() << query.record();
}
    qDebug() << "out вывод" ;
//        qDebug() << typeid(int_var).name()

}


void MainWindow::on_btnDelete_clicked()
{

}

