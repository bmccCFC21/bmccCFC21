#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "mainwt.h"


MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    // Initialize the second window
        sWindow = new MainWt();
        // connected to the slot start the main window on the button in the second window
        connect(sWindow, &MainWt::firstWindow, this, &MainWindow::show);

        dWindow = new Dialog();
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButton_clicked()
{
    sWindow->show();  // Show a second window
    //this->close();    // Close the main window _close()/change on hide()..show()
}

void MainWindow::on_pushButton_2_clicked()
{
    dWindow->show();  // Show a third window
    this->close();    // Close the main window
}
