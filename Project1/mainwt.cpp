#include "mainwt.h"
#include "ui_mainwt.h"
#include "mainwindow.h"
#include "dialog.h"
#include "dialogsec.h"

#include <QDebug>
#include <QString>
#include <QWidget>
#include <QStatusBar>

#include <QtPrintSupport/QPrinter>
#include <QtPrintSupport/QPrintDialog>
#include <QPainter>

MainWt::MainWt(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWt)
{
    ui->setupUi(this);
    ui->label->setWordWrap(true);
    ui->label_2->setWordWrap(true);

    ui->pushButton->setText("PET");
    ui->pushButton_2->setText("HDPE");
    ui->pushButton_3->setText("PS");
    ui->pushButton_4->setText("LDPE");
    ui->pushButton_5->setText("PVS");
    ui->pushButton_6->setText("PP");
    ui->pushButton_7->setText("Others");

    QPushButton *button = new QPushButton;
    button->setIcon(QIcon(":/Users/krisl/OneDrive/Desktop/arrow1.jpg"));
    button->setIconSize(QSize(10, 10));

    // Initialize the second window
        //tWindow = new MainWindow();
        // connected to the slot start the main window on the button in the second window
       // connect(tWindow, &MainWindow::sWindow, this, &MainWt::show);

}

MainWt::~MainWt()
{
    delete ui;
}

void MainWt::on_pushButton_clicked()
{
    //qDebug()<<"something";
   // ui->label_2->setText("<b>PET/PETE products <font size='4' color='red'>CAN</font> be recycled.</b>\nPET or PETE is what’s used to make bottles for soda, water and other drinks. It’s also used to make cooking oil containers, plastic peanut butter jars and containers for other popular food items.\nPET can be recycled into fiberfill for sleeping bags, carpet fibers, rope, pillows.");
    QString string1("<b>  PET/PETE products <font size='4' color='green'>CAN</font> be recycled.</b>");
    QString string2("<br>PET or PETE is what’s used to make bottles for soda, water and other drinks. It’s also used to make cooking oil containers, plastic peanut butter jars and containers for other popular food items.");
    QString string3("<br><b>PET</b> can be recycled into <b>fiberfill for sleeping bags, carpet fibers, rope, pillows.</b>");
    ui->label_2->setText(string1 + string2 + string3);
}

void MainWt::on_pushButton_2_clicked()
{
    QString string4("<b>HDPE products <font size='4' color='green'>CAN</font> be recycled.</b><br>This type is used to make milk jugs, shampoo bottles, cleaning product containers and detergent bottles.");
    QString string5("<br><b>HDPE</b> can be recycled into <b>non food bottles and recycling bins.</b>");
    ui->label_2->setText(string4 + string5);
}

void MainWt::on_pushButton_5_clicked()
{
    QString string6("<b>PVC products <font size='4' color='red'>mostly CANNOT</font> be recycled.</b><br>Other than the “poison plastic,” this type goes by several names including polyvinyl chloride, PVC, vinyl, plastic #3.<br>PVC plastic is the third most common type used in the US and the UK bottle market with a 0.8% market share (behind PET plastic and polypropylene). More than 7 billion pounds of the stuff is throw away every year in America, and only 0.1% to 3% of it is recycled. Worldwide there is over 300 billion pounds of PVC in use (having been installed 30 or 40 years ago in buildings) which will soon reach the end of its life and requiring disposal.");
    QString string7("<br>When a single PVC bottle is combined with a batch of 100,000 recycled non-chlorinated bottles, the entire batch is contaminated and unusable.");
    ui->label_2->setText(string6 + string7);
}

void MainWt::on_pushButton_4_clicked()
{
    QString string8("<b>LDPE <font size='4' color='green'>CAN</font> be recycled.</b>");
    QString string9("<br>While not the most popular plastic for things like food containers and household supplies, you will know LDPE plastic in the form of plastic bags used for frozen foods and the like. And all of this packaging waste comes with an eco-price.");

    ui->label_2->setText(string8 + string9);
}

void MainWt::on_pushButton_6_clicked()
{

    QString string8("<b>PP products <font size='4' color='green'>mostly CAN</font> be recycled.</b>");
    QString string9("<br>Things like plastic bags pollute our oceans and other wild habitats, posing threats to wildlife. It is estimated that hundreds of leatherback turtles die because they swallow plastic trash.");
    ui->label_2->setText(string8 + string9);

    //ui->textBrowser->setText("HERE5555");
}

void MainWt::on_pushButton_3_clicked()
{
    QString string10("<b>PS products <font size='4' color='green'>mostly CAN</font> be recycled.</b>");
    QString string11("<br>PP plastics in the US make up 2.1% of the plastic bottle market, making it the second most common type used for bottles (behind PET plastics). In the UK, PP plastics make up the second largest portion of the plastics manufacturing market.");
    ui->label_2->setText(string10 + string11);
}

void MainWt::on_pushButton_7_clicked()
{
    QString string12("<b>Plastic #7 <font size='4' color='red'>sometimes CAN</font> be recycled.</b>");
    QString string13("<br>Known as polyactic acid (PLA) plastic, bio-based plastics should be sent to commercial composting facilities (they generally cannot be composted in your backyard compost bin or vermicompost bin). Do not mix them with other types of plastics in your recycling bin as they can be mistaken for things like HDPE or LDPE and go on to contaminate recycling batches.");

    ui->label_2->setText(string12 + string13);
   //ui->textBrowser->setText("HERE77777");
}

/*void MainWt::on_textBrowser_textChanged()
{
    ui->textBrowser->setText("HERE77777");
}*/


void MainWt::on_pushButton_8_clicked()
{
      show();  // Show a main window
      this->close();
}
