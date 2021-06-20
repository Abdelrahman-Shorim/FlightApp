#include "availableflights.h"
#include "ui_availableflights.h"
#include "userhomepage.h"
#include "costoftickets.h"
#include <fstream>
#include<QListWidget>
#include<QString>
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
availableflights::availableflights(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::availableflights)
{
    ui->setupUi(this);
//    flights x;
//        ifstream input;
//        input.open("C:\\FlightApp\\FlightApp\\flights.bin");
//        while(!input.eof())
//        {
//            input.read((char*)&x,sizeof(x));
//            string depcountry =x.depcountry;
//            string destcountry =x.destcountry;
//            string depdate =x.depdate;
//            string arrdate=x.arrdate;
//            string deptime =x.deptime;
//            string arrtime=x.arrtime;
//            string planenum =x.planenum;
//            string travcompany =x.travcompany;
//            string duration=x.duration;
//            string economy =x.economy;
//            string business=x.business;
//            string adult=x.adult;
//            string child=x.child;
//            string all=depcountry+"  "+destcountry+"  "+depdate+"  "+arrdate+"  "+deptime+"  "+arrtime+"  "+planenum+"  "+
//                    travcompany+"  "+duration+"  "+economy+"  "+business+"  "+adult+"  "+child;
//            ui->listWidget->addItem(QString::fromStdString(all));
//        }
//        input.close();
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
    //string choice=ui->listWidget->currentItem()->text().toStdString();
    hide();
    costoftickets t;
    t.setModal(true);
    t.exec();
}


