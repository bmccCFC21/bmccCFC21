#include <QDebug>
#include <QApplication>

#include "mainwindow.h"
#include "mainwt.h"
#include "dialog.h"
#include "dialogsec.h"

#include <QCoreApplication>
#include <iostream>
#include <string>
#include <sstream>

#include <iostream>
using namespace std;

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);


    MainWindow w;
    w.show();
    return a.exec();


    int num;
    cout << "Enter a number : ";
    cin >> num;

    return 0;
}
