#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    QString st;
    for (int i = 0; i < 10; i++) {
     vec.append(10+i*2);
     ui->textEdit->append(QString::number(vec[i]) + " "); }
    ui->textEdit->setReadOnly(true);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButton_clicked()
{
    // получение индекса выбранного элемента
    switch (ui->comboBox->currentIndex()) {
    case 0: {
        int size = vec.size();
        // выводим размер вектора в lineEdit
        ui->lineEdit->setText("Vector size: " + QString::number(size));
        break; }
    case 1: { // получаем значение и добавляем в конец вектора
        int num = ui->lineEdit->text().toInt();
        vec.push_back(num);
        break; }
    case 2: {
        int pos = ui->lineEdit->text().toInt();
        vec.remove(pos); //удаляем элемент с заданной позиции
        break; } }
    // перезаписываем вектор
    ui->textEdit->clear();
    for (int i = 0; i < vec.size(); i++) {
        ui->textEdit->append(QString::number(vec[i]) + " "); }
}

void MainWindow::on_comboBox_currentIndexChanged(int index)
{
    ui->lineEdit->clear();
    ui->comboBox->currentIndex() == 0 ?
     ui->lineEdit->setReadOnly(true) :
     ui->lineEdit->setReadOnly(false);
     ui->textEdit->append(QString::number(88) + " ");
}
