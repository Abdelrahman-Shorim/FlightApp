#include "costoftickets.h"
#include "ui_costoftickets.h"
#include "availableflights.h"
#include "receipt.h"
#include "visapayment.h"
#include "planeseats.h"
#include "login.h"
#include "mainwindow.h"
#include <QLabel>
#include<iostream>
#include<QString>
#include<QTextEdit>
#include <QLineEdit>
#include<fstream>
using namespace std;
extern int code;
string selected_seat;
#include <fstream>
using namespace std;
extern string planenumber;
string payment;
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
costoftickets::costoftickets(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::costoftickets)
{
    ui->setupUi(this);

    ui->chosen_seat->setText(QString::fromStdString(selected_seat));
    flights x;
    ifstream infile;
    infile.open("C:\\FlightApp\\FlightApp\\flights.bin");
    while(infile.read((char*)&x,sizeof(x)))
    {
        if(planenumber==x.planenum)
        {
            ui->business->setText(x.business);
            ui->economy->setText(x.economy);
            break;
        }
    }
    infile.close();
//>>>>>>> 9abdc5a1b97d482d79faa7c623634e013a08c1a2
}

costoftickets::~costoftickets()
{
    delete ui;
}



void costoftickets::on_backtoavailableflights_clicked()
{
    hide();
    availableflights f;
    f.setModal(true);
    f.exec();
}

void costoftickets::on_cash_clicked()
{
    payment="cash";
    hide();
    receipt r;
    r.setModal(true);
    r.exec();
}

void costoftickets::on_visa_clicked()
{
    payment="visa";
    hide();
    receipt v;
    v.setModal(true);
    v.exec();
}

void costoftickets::on_seats_clicked()
{
    hide();
    PlaneSeats p;
    p.setModal(true);
    p.exec();
}
