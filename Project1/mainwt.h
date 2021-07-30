#ifndef MAINWT_H
#define MAINWT_H

#include <QMainWindow>

#include <QDebug>
#include <QString>

#include <QtPrintSupport/QPrinter>
#include <QtPrintSupport/QPrintDialog>
#include <QPainter>


//#include "dialog.h"
 //#include "mainwindow.h"
//#include "dialogsec.h"


namespace Ui {
class MainWt;
}

class MainWt : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWt(QWidget *parent = nullptr);
    ~MainWt();

signals:
    void firstWindow();

private slots:
    void on_pushButton_clicked();

    //void on_pushButton_2_clicked();
    //the new for settext declaration

    //void setText();

    void on_pushButton_2_clicked();

    void on_pushButton_5_clicked();

    void on_pushButton_4_clicked();

    void on_pushButton_6_clicked();

    void on_pushButton_3_clicked();

    void on_pushButton_7_clicked();

   // void on_textBrowser_textChanged();


    void on_pushButton_5_pressed();

    void on_pushButton_8_clicked();

private:
    Ui::MainWt *ui;
    QMainWindow *tWindow;  //try to remove and run 5/4/21  3:30am

};

#endif // MAINWT_H
