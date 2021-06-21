#include "availableflights.h"
#include "ui_availableflights.h"
#include "userhomepage.h"
#include "costoftickets.h"
#include "login.h"
#include "mainwindow.h"
#include <fstream>
#include<QListWidget>
#include<QString>
using namespace std;
extern string selected_seat;
string planenumber;
extern int code;
extern string mail;
extern char email[20];
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
struct transactions
{
    char passengermail[20];
    char planenumber[20];
    char depcountry[20];
    char destcountry[20];
    char seat[20];
};

availableflights::availableflights(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::availableflights)
{
    ui->setupUi(this);
    flights x;
        ifstream input;
        input.open("C:\\FlightApp\\FlightApp\\flights.bin");
        while(input.read((char*)&x,sizeof(x)))
        {
            string depcountry =x.depcountry;
            string destcountry =x.destcountry;
            string depdate =x.depdate;
            string arrdate=x.arrdate;
            string deptime =x.deptime;
            string arrtime=x.arrtime;
            string planenum =x.planenum;
            string travcompany =x.travcompany;
            string duration=x.duration;
            string all=planenum+"  "+depcountry+"  "+destcountry+"  "+depdate+"  "+arrdate+"  "+deptime+"  "+arrtime+"  "+travcompany+"  "+duration;
            ui->listWidget->addItem(QString::fromStdString(all));
        }
        input.close();
}

availableflights::~availableflights()
{
    delete ui;
}


void availableflights::on_usermain_clicked()
{
    hide();
    userhomepage h;
    h.setModal(true);
    h.exec();
}

void availableflights::on_book_clicked()
{
    flights x;
    transactions y;
    strncpy(y.seat,selected_seat.c_str(),sizeof (y.seat));
    string choice=ui->listWidget->currentItem()->text().toStdString();
    //booked=choice.substr(0,choice.find(" "));
    planenumber=choice.substr(0,choice.find(" "));
    strncpy(y.planenumber,choice.substr(0,choice.find(" ")).c_str(),sizeof (y.planenumber));
    ifstream flight;
    flight.open("C:\\FlightApp\\FlightApp\\flights.bin");
    while(flight.read((char*)&x,sizeof(x)))
    {
        if(y.planenumber==x.planenum)
        {
            //depcountry=x.depcountry;
            strncpy(y.depcountry,x.depcountry,sizeof (y.depcountry));
            //destcountry=x.destcountry;
            strncpy(y.destcountry,x.destcountry,sizeof (y.destcountry));
            break;
        }
    }
    flight.close();
    if(code==1)
        strncpy(y.passengermail,email,sizeof (y.passengermail));
    else if(code==0)
        strncpy(y.passengermail,mail.c_str(),sizeof (y.passengermail));

    ofstream outfile;
    outfile.open("C:\\FlightApp\\FlightApp\\transactions.bin",ios::app);
    outfile.write((char*)&y,sizeof(y));
    outfile.close();
    hide();
    costoftickets t;
    t.setModal(true);
    t.exec();
}


