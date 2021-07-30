#include "mainthree.h"
#include "ui_mainthree.h"
#include "dialog.h"

MainThree::MainThree(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainThree)
{
    ui->setupUi(this);
}

MainThree::~MainThree()
{
    delete ui;
}

void MainThree::on_pushButton_clicked()
{
    //from here print
}
