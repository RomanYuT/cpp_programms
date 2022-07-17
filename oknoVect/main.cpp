#include "mainwindow.h"
#include <QApplication>
#include <QDebug>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    w.show();
    QVector <int> vect2(7);
    qDebug() << vect2;
    vect2[0]=99;
    qDebug() << vect2;

    QVector<QString>vect5;
    qDebug() << vect5;
    vect5.append("one");
    vect5.append("two");
    vect5.append("three");
    qDebug() << vect5[1];

    QVector<int> vec; // создаем вектор из 11 элементов от 1 до 10
    for (int i=0; i<=10; i++ ) {
     vec.push_back(i); }
    qDebug() << vec;
    for (int i=0; i<=10; i++ ) { // заменяем элемент вектора «2» на «65»
     vec.replace(2,65); }
    qDebug() << vec;
    int sum=0; // находим сумму элементов
    for (int i=0; i<vec.size(); i++ ) { // от 0 до количества элементов в векторе
     sum += vec[i]; }
    qDebug() <<"Sum = " << sum;

    qDebug() << "Введите пять целых чисел: ";
    //Класс QTextStream используется для чтения и записи текста
    QTextStream in(stdin); // указываем клавиатуру устройством ввода
    QVector<int> vec2;
    for (int i = 0; i < 5; i++) {
     int num = (in.readLine()).toInt(); // считываем строку и
     //преобразовываем её в целое
     qDebug() << i;
     vec2.append(num);
    qDebug() << vec2;
    } // добавляем элементы в конец массива

    qDebug() << vec2;
    int sum2=0;
    for (int i=0; i<vec2.size(); i++ ) {
     if (vec2[i] > 0) {sum2 += vec2[i]; } }
    qDebug() << "Сумма положительных чисел = " << sum2;

    return a.exec();


}
