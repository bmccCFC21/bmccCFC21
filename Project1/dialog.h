#ifndef DIALOG_H
#define DIALOG_H

#include <QDialog>
//#include <QMainWindow>
#include <mainwt.h>
#include "mainthree.h"
                        //#include <dialogsec.h>

namespace Ui {
class Dialog;
}

class Dialog : public QDialog
{
    Q_OBJECT

public:
    explicit Dialog(QWidget *parent = nullptr);
    ~Dialog();

private slots:
    void on_pushButton_clicked();

private:
    Ui::Dialog *ui;
    //DialogueSec *printWin;      //Dialog = new DialoqueSec;
    //MainThee *hey = new MainThee;  //error
    //MainWt *we;


};

#endif // DIALOG_H
