#include "listofflights.h"
#include "ui_listofflights.h"
#include "addanewflight.h"
#include "adminhomepage.h"
#include <fstream>
#include<QListWidget>
#include<QString>
#include "editanewflight.h"
using namespace std;
string choice_depcountry;
string choice_planeid;
int ifedit;
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

listofflights::listofflights(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::listofflights)
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
            string economy =x.economy;
            string business=x.business;
            string adult=x.adult;
            string child=x.child;
            string all=planenum+" from:"+depcountry+" to: "+destcountry+" date "+depdate+" arrdate "+arrdate;
            ui->listWidget->addItem(QString::fromStdString(all));
        }
        input.close();
}

listofflights::~listofflights()
{
    delete ui;
}

void listofflights::on_editpassenger_clicked()
{
    ifedit=0;
    // 12312 cairo france
    string x=ui->listWidget->currentItem()->text().toStdString();
    choice_planeid=x.substr(0,x.find(" "));

    hide();
    EditANewFlight a;
    a.setModal(true);
    a.exec();
}

void listofflights::on_toadminpage_clicked()
{
    hide();
    adminhomepage admin;
    admin.setModal(true);
    admin.exec();
}

void listofflights::on_addnewflight_clicked()
{
    ifedit=1;
    hide();
    AddANewFlight a;
    a.setModal(true);
    a.exec();

}
