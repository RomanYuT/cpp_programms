#ifndef OKNO_H
#define OKNO_H

#include <QMainWindow>

namespace Ui {
class okno;
}

class okno : public QMainWindow
{
    Q_OBJECT

public:
    explicit okno(QWidget *parent = 0);
    ~okno();

private slots:
    void on_pushButton_clicked();

private:
    Ui::okno *ui;
};

#endif // OKNO_H
