#ifndef MAINTHREE_H
#define MAINTHREE_H

#include <QMainWindow>
//#include "dialog.h"
#include <QDebug>
#include <QString>

#include <QtPrintSupport/QPrinter>
#include <QtPrintSupport/QPrintDialog>
#include <QPainter>

namespace Ui {
class MainThree;
}

class MainThree : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainThree(QWidget *parent = nullptr);
    ~MainThree();

    void on_pushButton_clicked();
private slots:
    //void on_pushButton_clicked();

private:
    Ui::MainThree *ui;
    //MainWt *y;  error
    QDialog *toDial;
    MainThree *threeptr;

};

#endif // MAINTHREE_H
