#include "okno.h"
#include "ui_okno.h"
#include <math.h>
#include <QDebug>
#include <string>
#include <stdio.h>
#include <QMessageBox>

okno::okno(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::okno)
{
    ui->setupUi(this);
}

okno::~okno()
{
    delete ui;
}

void okno::on_pushButton_clicked()
{
    char mystr[180], timestr[80];
    float r=6400;
    ui->label->setText(ui->textEdit->toPlainText());
    ui->label->setStyleSheet("color: blue ; font-family: Comic Sans MS; font-size: 20px");
    //qDebug() << "Hello QT!  "<<acos(0);
    ui->textEdit->setText("my text"); //не работает пока
    //sprintf(mystr,"%f",acos(0));
    for (int h=0;h<640;h+=100){
        //qDebug() <<h<< "\t"<<mystr;
        sprintf(timestr,"%d %s %f %s",h,"\t",180/3.14*acos(r/(r+h)),"\n");

        ui->textEdit->setText(strcat(mystr,timestr));
    }

    ui->label_2->setText(mystr); //QString( acos(0))
    //ui->textEdit->clear();
    //QMessageBox::information(this,"Ошибка", "Введите число!");
}
