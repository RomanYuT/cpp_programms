//#ifndef MAINWIDGET_H
//#define MAINWIDGET_H

//#include <QWidget>

//QT_BEGIN_NAMESPACE
//namespace Ui { class MainWidget; }
//QT_END_NAMESPACE

//class MainWidget : public QWidget
//{
//    Q_OBJECT

//public:
//    MainWidget(QWidget *parent = nullptr);
//    ~MainWidget();

//private:
//    Ui::MainWidget *ui;
//public slots:

//};
//#endif // MAINWIDGET_H

#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QWidget>
#include <QSqlDatabase>
#include <QSqlQuery>
#include <QSqlTableModel>

namespace Ui {
class MainWidget;
}

class MainWidget : public QWidget
{
    Q_OBJECT
public:
    explicit MainWildget (QWidget *parent = 0) ;
    ~MainWidget () ;
private slots:

    void on_btnInsert_clicked();

private:
    Ui::MainWidget *ui;
    QSqlDatabase db;
};

#endif // MAINWIDGET_H
