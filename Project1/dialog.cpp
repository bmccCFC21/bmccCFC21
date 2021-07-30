#include "dialog.h"
#include "ui_dialog.h"
//#include "mainwindow.h"
#include "mainwt.h"
#include "mainthree.h"

#include <QFile>
#include <QTextStream>
#include <QMessageBox>
#include <iostream>
#include <exception>
using namespace std;

Dialog::Dialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Dialog)
{
    ui->setupUi(this);
    //string str;
    //QString str = ui->lineEdit->text();
}

Dialog::~Dialog()
{
    delete ui;
}

void Dialog::on_pushButton_clicked()
{
    QString str = ui->lineEdit->text();
    //ui->label->setText(str);
    QString str1 = "queens";
    QString str2 = "bronx";
    QString str3 = "manhattan";
    QString str4 = "brooklyn";
    QString str5 = "staten island";

    std::string some =" ";
    try {
        QString str = ui->lineEdit->text();
        //ui->lineEdit->setText(str);
        ui->label->setText(str);
    }  catch (runtime_error& excpt) {


    }


    try {
        QString str = ui->lineEdit->text();
        //ui->lineEdit->setText(str);
        ui->label->setText(str);
      if ((str != str1) && (str != str2) && (str != str3) && (str != str4) && (str != str5)) {
          ui->lineEdit->setText("Wrong value! Choose form boroughs below.");
      }
        //if ()
 }
        catch (runtime_error& excpt) {
        //(str != str1) && (str != str2) && (str != str3) && (str != str4) && (str != str5))
                  ui->lineEdit->setText("Wrong value! Choose form boroughs below.");
            // Prints the error message passed by throw statement
            ui->lineEdit->setText("ERROR");
         }
      //ui->lineEdit->setText(str);


    if(str==str1) {
        /*MainWt *dia=new MainWt(this);
        dia->show();*/
        MainThree *three = new MainThree;
        three->show();
        three->on_pushButton_clicked();



        QFile file("C:/Users/krisl/OneDrive/Desktop/Qtattempt/thefile.txt");
            if(!file.open(QFile :: WriteOnly | QFile :: Text)) {
                QMessageBox :: warning(this, "title", "file isn't open");
            }
            QTextStream out(&file);
            QString line = "just some text...";  //was str before
            out << line;
            file.flush();
            file.close();


           // QFile file("C:/Users/krisl/OneDrive/Documents/Project1/thefile.txt");
            if(!file.open(QFile :: ReadOnly | QFile :: Text)) {
                QMessageBox :: warning(this, "title", "file isnnn't open");
            }
            QTextStream in(&file);
            QString line1 = in.readAll();      //  "just some text";  //was str before
            in << line1;
        //printDialog->show();
        //printDialog->plainTextEdit();    //setPlainText(line1);

            file.close();
    }


}
