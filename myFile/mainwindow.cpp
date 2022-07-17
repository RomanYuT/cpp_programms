#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QFile>
#include <QMessageBox>
#include <QTextStream>
#include <QDebug>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButton_clicked()
{
    QFile myFile ("/home/niitp/rut/WORK/qt/1.txt"); //прописываем путь к нашему файлу
    if (!myFile.exists()) { //файл не найден
     QMessageBox::warning(this,"Ошибка","Файл не найден");
     return; }

    if (!myFile.open(QIODevice::ReadOnly)) { //файл нельзя открыть для чтения
     QMessageBox::warning(this,"Ошибка","Файл нельзя открыть для чтения");
     return; }
    QTextStream stream(&myFile); /*создаем объект класса QTextStream и передаем в
    конструктор ссылку на файл, из которого нужно производить чтение*/
    QString buffer = stream.readAll(); //считываем в объект класса QString
    ui->textEdit->setText(buffer); //содержимое файла и помещаем в QTextEdit
    myFile.close();
}

void MainWindow::on_pushButton_2_clicked()
{
    QFile myFile2 ("/home/niitp/rut/WORK/qt/1.txt"); //путь к нашему файлу
    if (!myFile2.exists()) { //файл не найден
        QMessageBox::warning(this,"Ошибка","Файл не найден");
        return; }
    if (!myFile2.open(QIODevice::WriteOnly)) { //файл нельзя открыть для записи
        QMessageBox::warning(this,"Ошибка","Файл нельзя открыть для записи");
        return; }
    QTextStream stream(&myFile2);
    /*Преобразуем строку из textedit в массив при помощи метода split, используя в
    качестве разделителя между элементами массива пробел. Константа
    SkipEmptyParts отвечает за пропуск лишних пробелов*/
    QStringList numbers =
            ui->textEdit->toPlainText().split(" ",QString::SkipEmptyParts);
    int val;
    for (int i = 0; i < numbers.length(); i++) {
        val = numbers[i].toInt()*2; /*преобразуем каждый элемент массива к целому
    числу и увеличиваем его вдвое*/
        stream << QString::number(val) + " "; //помещаем во второй файл }
         qDebug() << val;
        myFile2.close();
    }
}
