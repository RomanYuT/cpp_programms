#include <QCoreApplication>
//#include <stdio.h>
#include <QDebug>

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);


    QVector<QVector<int>>matrix;
    srand(time(0));
    qDebug() << time(0);
    qDebug() <<rand();

    for (int i = 1; i <= 3; i++) {
     QVector <int> line;
     for (int j =1; j <= 3; j++) {
     line.append(rand() % 100 + 100); }
     matrix.append(line);}
    QTextStream stream(stdout);
    for (int i = 0; i < matrix.length(); i++) {
     QString str = "";
     for (int j = 0; j < matrix[i].length(); j++) {
     str += QString::number(matrix[i][j])+ " "; }
     stream << str << "\n";
     stream.flush(); }
    int max = matrix[0][0];
    for (int i = 0; i < matrix.length(); i++) {
     for (int j = 0; j < matrix[i].length(); j++) {
     if (matrix[i][j] > max) {max = matrix[i][j];} } }
    stream << "Максимальный элемент макс элемент:" << max << "\n";
    stream.flush();

    return a.exec();
}
