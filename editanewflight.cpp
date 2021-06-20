#include "editanewflight.h"
#include "ui_editanewflight.h"
#include<fstream>
#include "listofflights.h"
using namespace std;
extern string choice_planeid;
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
EditANewFlight::EditANewFlight(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::EditANewFlight)
{
    ui->setupUi(this);

    flights x;
    ifstream infile;
    infile.open("C:\\FlightApp\\FlightApp\\flights.bin");
    while(infile.read((char*)&x,sizeof(x)))
    {
        if(choice_planeid==x.planenum)
        {
            ui->depcountry->setText(x.depcountry);
            ui->destcountry->setText(x.destcountry);
            ui->depdate->setText(x.depdate);
            ui->arrivaldate->setText(x.arrdate);
            ui->deptime->setText(x.deptime);
            ui->arrivaltime->setText(x.arrtime);
            ui->planenumber->setText(x.planenum);
            ui->travelcompany->setText(x.travcompany);
            ui->duration->setText(x.duration);
            ui->economy->setText(x.economy);
            ui->business->setText(x.business);
            ui->adult->setText(x.adult);
            ui->child->setText(x.child);
        }
    }
    infile.close();
}

EditANewFlight::~EditANewFlight()
{
    delete ui;
}

void EditANewFlight::on_add_clicked()
{
    flights x,y;
       strncpy(x.depcountry,ui->depcountry->toPlainText().toStdString().c_str(),sizeof (x.depcountry));
       strncpy(x.destcountry,ui->destcountry->toPlainText().toStdString().c_str(),sizeof (x.destcountry));
       strncpy(x.depdate,ui->depdate->toPlainText().toStdString().c_str(),sizeof (x.depdate));
       strncpy(x.arrdate,ui->arrivaldate->toPlainText().toStdString().c_str(),sizeof(x.arrdate));
       strncpy(x.deptime,ui->deptime->toPlainText().toStdString().c_str(),sizeof(x.deptime));
       strncpy(x.arrtime,ui->arrivaltime->toPlainText().toStdString().c_str(),sizeof(x.arrtime));
       strncpy(x.planenum,ui->planenumber->toPlainText().toStdString().c_str(),sizeof(x.planenum));
       strncpy(x.travcompany,ui->travelcompany->toPlainText().toStdString().c_str(),sizeof(x.travcompany));
       strncpy(x.duration,ui->duration->toPlainText().toStdString().c_str(),sizeof(x.duration));
       strncpy(x.economy,ui->economy->toPlainText().toStdString().c_str(),sizeof(x.economy));
       strncpy(x.business,ui->business->toPlainText().toStdString().c_str(),sizeof(x.business));
       strncpy(x.adult,ui->adult->toPlainText().toStdString().c_str(),sizeof(x.adult));
       strncpy(x.child,ui->child->toPlainText().toStdString().c_str(),sizeof(x.child));

       ifstream infile;
       infile.open("C:\\FlightApp\\FlightApp\\flights.bin");
       ofstream temp;
       temp.open("C:\\FlightApp\\FlightApp\\temp.bin");
       while(infile.read((char*)&y,sizeof(y)))
       {
           if(choice_planeid==y.planenum)
               continue;
           else
           {
               temp.write((char*)&y,sizeof(y));
           }
       }
       infile.close();
       temp.close();

       ofstream outfile1;
       outfile1.open("C:\\FlightApp\\FlightApp\\flights.bin");
       ifstream temp1;
       temp1.open("C:\\FlightApp\\FlightApp\\temp.bin");
       while(temp1.read((char*)&y,sizeof(y)))
       {
           outfile1.write((char*)&y,sizeof(y));
       }
       outfile1.write((char*)&x,sizeof(x));
       temp1.close();
       outfile1.close();
       hide();
       listofflights w;
       w.setModal(true);
       w.exec();
}

void EditANewFlight::on_delete_2_clicked()
{
    flights y;

       ifstream infile;
       infile.open("C:\\FlightApp\\FlightApp\\flights.bin");
       ofstream temp;
       temp.open("C:\\FlightApp\\FlightApp\\temp.bin");
       while(infile.read((char*)&y,sizeof(y)))
       {
           if(choice_planeid==y.planenum)
               continue;
           else
           {
               temp.write((char*)&y,sizeof(y));
           }
       }
       infile.close();
       temp.close();

       ofstream outfile1;
       outfile1.open("C:\\FlightApp\\FlightApp\\flights.bin");
       ifstream temp1;
       temp1.open("C:\\FlightApp\\FlightApp\\temp.bin");
       while(temp1.read((char*)&y,sizeof(y)))
       {
           outfile1.write((char*)&y,sizeof(y));
       }
       temp1.close();
       outfile1.close();
       hide();
       listofflights w;
       w.setModal(true);
       w.exec();
}


void EditANewFlight::on_back_clicked()
{
    hide();
    listofflights w;
    w.setModal(true);
    w.exec();
}
