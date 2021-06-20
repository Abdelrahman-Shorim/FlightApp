#include "visapayment.h"
#include "ui_visapayment.h"
#include "receipt.h"
#include "ui_receipt.h"
#include "userhomepage.h"
#include "availableflights.h"
#include "costoftickets.h"
#include "login.h"
#include <QDataStream>
#include <fstream>
#include <iostream>
#include <QString>
#include <string>
#include <QFile>
#include <QDate>
#include <QString>
#include <QIODevice>
#include <QFileInfo>
#include <QLabel>
#include <qlabel.h>
#include <QFrame>
#include "QFileDialog"
#include <QWidget>
using namespace std;
struct flights
{
    char depcountry[20];
    char destcountry[20];
    char depdate[20];
    char arrdate[20];
    char deptime[20];
    char arrtime[20];
    char planenum[20];
    char travcompany[20];
    char duration[20];
    char economy[20];
    char business[20];
    char adult[20];
    char child[20];
};
extern string planenumber;
extern string payment;
extern string mail;
extern char email[20];
extern int code;
receipt::receipt(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::receipt)
{
    ui->setupUi(this);
    flights x;
    ifstream infile;
    infile.open("C:\\FlightApp\\FlightApp\\flights.bin");
    while(infile.read((char*)&x,sizeof(x)))
    {
        if(planenumber==x.planenum)
        {
            ui->ticketnumber->setText(x.planenum);
            ui->date->setText(x.depdate);
            ui->depfrom->setText(x.depcountry);
            ui->destination->setText(x.destcountry);
        }
    }
    if(code==1)
    {
        ui->passengeremail->setText(email);
    }
    else if(code==0)
    {
        ui->passengeremail->setText(mail.c_str());
    }
    ui->payment->setText(payment.c_str());

}

receipt::~receipt()
{
    delete ui;
}

void receipt::on_home_clicked()
{
    hide();
    userhomepage h;
    h.setModal(true);
    h.exec();
}
    void receipt::on_pushButton_2_clicked()

    {

    /*void data()
    //{
        Receipt datareceipt ;
         datareceipt.Name = "Nancy Hany Tawfik" ;
        datareceipt.ticketnum = 1699 ;
         datareceipt.date = "19/7/2020" ;
        datareceipt.depart = "Cairo";
        datareceipt.head = "Bali" ;
        datareceipt.Fclass = "economy" ;
        datareceipt.total = 7342.128 ;
         datareceipt.formofpay = "Visa" ;
         datareceipt.seat="B4";

    //}

        QFile receiptdata ("receiptdata");
        QDataStream save(&receiptdata) ;
        save.setVersion(QDataStream::Qt_4_6);

        if (receiptdata.open(QIODevice :: WriteOnly ))
        {
          QDataStream out(&receiptdata) ;
          out << datareceipt.Name ;
          out << datareceipt.ticketnum  ;
          out << datareceipt.date ;
         out << datareceipt.depart;
         out << datareceipt.head ;
         out << datareceipt.Fclass ;
         out << datareceipt.total ;
          out << datareceipt.formofpay;
          receiptdata.close() ;
          (receiptdata.open(QIODevice :: ReadOnly )) ;

          {

          ui->label_4->setText( datareceipt.Name);
          ui->label_6->setNum(datareceipt.ticketnum);
          ui->label_8->setText( datareceipt.date);
          ui->label_9->setText( datareceipt.depart);
          ui->label_12->setText( datareceipt.head);
          ui->label_14->setText( datareceipt.Fclass);
          ui->label_15->setNum( datareceipt.total);
          ui->label_16->setText( datareceipt.formofpay);
          ui->label_18->setText( datareceipt.seat);
          receipt R ;
          R.setModal(true);
          R.exec();
        }
    }
    */
    }










