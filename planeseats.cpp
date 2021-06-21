#include "ui_planeseats.h"
#include <QRadioButton>
#include <qradiobutton.h>
#include "iostream"
#include <fstream>
#include "planeseats.h"
#include "QFile"
#include <string>
#include <string.h>
#include <costoftickets.h>
#include <ui_costoftickets.h>
using namespace std ;
extern string selected_seat;
extern char email[20];
extern string mail;
extern string planenumber;

struct seats
{
    string planeid;
    int ar2[30] = {1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1};
    string ar1[30];
};


PlaneSeats::PlaneSeats(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::PlaneSeats)
{


   ui->setupUi(this);

    seats x;
    ifstream  input ;
    input.open("C:\\FlightApp\\FlightApp\\seats.bin");
    while(input.read((char*)&x,sizeof (x)))
    {
        if(planenumber==x.planeid)
        {
            if(x.ar2[0]==-1)
                ui->A1->setEnabled(0);
            if(x.ar2[1]==-1)
                ui->A2->setEnabled(0);
            if(x.ar2[2]==-1)
                ui->A3->setEnabled(0);
            if(x.ar2[3]==-1)
                ui->A4->setEnabled(0);
            if(x.ar2[4]==-1)
                ui->A5->setEnabled(0);
            if(x.ar2[5]==-1)
                ui->B1->setEnabled(0);
            if(x.ar2[6]==-1)
                ui->B2->setEnabled(0);
            if(x.ar2[7]==-1)
                ui->B3->setEnabled(0);
            if(x.ar2[8]==-1)
                ui->B4->setEnabled(0);
            if(x.ar2[9]==-1)
                ui->B5->setEnabled(0);
            if(x.ar2[10]==-1)
                ui->C1->setEnabled(0);
            if(x.ar2[11]==-1)
                ui->C2->setEnabled(0);
            if(x.ar2[12]==-1)
                ui->C3->setEnabled(0);
            if(x.ar2[13]==-1)
                ui->C4->setEnabled(0);
            if(x.ar2[14]==-1)
                ui->C5->setEnabled(0);
            if(x.ar2[15]==-1)
                ui->D1->setEnabled(0);
            if(x.ar2[16]==-1)
                ui->D2->setEnabled(0);
            if(x.ar2[17]==-1)
                ui->D3->setEnabled(0);
            if(x.ar2[18]==-1)
                ui->D4->setEnabled(0);
            if(x.ar2[19]==-1)
                ui->D5->setEnabled(0);
            if(x.ar2[20]==-1)
                ui->E1->setEnabled(0);
            if(x.ar2[21]==-1)
                ui->E2->setEnabled(0);
            if(x.ar2[22]==-1)
                ui->E3->setEnabled(0);
            if(x.ar2[23]==-1)
                ui->E4->setEnabled(0);
            if(x.ar2[24]==-1)
                ui->E5->setEnabled(0);
            if(x.ar2[25]==-1)
                ui->F1->setEnabled(0);
            if(x.ar2[26]==-1)
                ui->F2->setEnabled(0);
            if(x.ar2[27]==-1)
                ui->F3->setEnabled(0);
            if(x.ar2[28]==-1)
                ui->F4->setEnabled(0);
            if(x.ar2[29]==-1)
                ui->F5->setEnabled(0);
            break;
        }
    }
    input.close();

}


PlaneSeats::~PlaneSeats()
{
    delete ui;
}

void PlaneSeats::on_done_clicked()
{
    seats x;

    ifstream input;
    input.open("C:\\FlightApp\\FlightApp\\seats.bin");
    while(input.read((char*)&x,sizeof (x)))
    {
        if(planenumber==x.planeid)
        {
            break;
        }
    }
    input.close();


    if(ui->A1->isChecked())
     {
        x.ar2[0]=-1;
        ui->A1->setEnabled(0);
        selected_seat="A1";
     }
    if(ui->A2->isChecked())
     {
        x.ar2[1]=-1;
        ui->A2->setEnabled(0);
        selected_seat="A2";
     }
    if(ui->A3->isChecked())
     {
        x.ar2[2]=-1;
        ui->A3->setEnabled(0);
        selected_seat="A3";
     }
    if(ui->A4->isChecked())
     {
        x.ar2[3]=-1;
        ui->A4->setEnabled(0);
        selected_seat="A4";
     }
    if(ui->A5->isChecked())
     {
        x.ar2[4]=-1;
        ui->A5->setEnabled(0);
        selected_seat="A5";
     }
    if(ui->B1->isChecked())
     {
        x.ar2[5]=-1;
        ui->B1->setEnabled(0);
        selected_seat="B1";
     }
    if(ui->B2->isChecked())
     {
        x.ar2[6]=-1;
        ui->B2->setEnabled(0);
        selected_seat="B2";
     }
    if(ui->B3->isChecked())
     {
        x.ar2[7]=-1;
        ui->B3->setEnabled(0);
        selected_seat="B3";
     }
    if(ui->B4->isChecked())
     {
        x.ar2[8]=-1;
        ui->B4->setEnabled(0);
        selected_seat="B4";
     }
    if(ui->B5->isChecked())
     {
        x.ar2[9]=-1;
        ui->B5->setEnabled(0);
        selected_seat="B5";
     }
    if(ui->C1->isChecked())
     {
        x.ar2[10]=-1;
        ui->C1->setEnabled(0);
        selected_seat="C1";
     }
    if(ui->C2->isChecked())
     {
        x.ar2[11]=-1;
        ui->C2->setEnabled(0);
        selected_seat="C2";
     }
    if(ui->C3->isChecked())
     {
        x.ar2[12]=-1;
        ui->C3->setEnabled(0);
        selected_seat="C3";
     }
    if(ui->C4->isChecked())
     {
        x.ar2[13]=-1;
        ui->C4->setEnabled(0);
        selected_seat="C4";
     }
    if(ui->C5->isChecked())
     {
        x.ar2[14]=-1;
        ui->C5->setEnabled(0);
        selected_seat="C5";
     }
    if(ui->D1->isChecked())
     {
        x.ar2[15]=-1;
        ui->D1->setEnabled(0);
        selected_seat="D1";
     }
    if(ui->D2->isChecked())
     {
        x.ar2[16]=-1;
        ui->D2->setEnabled(0);
        selected_seat="D2";
      }
    if(ui->D3->isChecked())
     {
        x.ar2[17]=-1;
        ui->D3->setEnabled(0);
        selected_seat="D3";
     }
    if(ui->D4->isChecked())
    {
        x.ar2[18]=-1;
        ui->D4->setEnabled(0);
        selected_seat="D4";
    }
    if(ui->D5->isChecked())
    {
        x.ar2[19]=-1;
        ui->D5->setEnabled(0);
        selected_seat="D5";
    }
    if(ui->E1->isChecked())
    {
       x.ar2[20]=-1;
       ui->E1->setEnabled(0);
       selected_seat="E1";
    }
    if(ui->E2->isChecked())
    {
        x.ar2[21]=-1;
        ui->E2->setEnabled(0);
        selected_seat="E2";
    }
    if(ui->E3->isChecked())
    {
        x.ar2[22]=-1;
        ui->E3->setEnabled(0);
        selected_seat="E3";
    }
    if(ui->E4->isChecked())
    {
        x.ar2[23]=-1;
        ui->E4->setEnabled(0);
        selected_seat="E4";
    }
    if(ui->E5->isChecked())
    {
        x.ar2[24]=-1;
        ui->E5->setEnabled(0);
        selected_seat="E5";
    }
    if(ui->F1->isChecked())
    {
        x.ar2[25]=-1;
        ui->F1->setEnabled(0);
        selected_seat="F1";
    }
    if(ui->F2->isChecked())
    {
        x.ar2[26]=-1;
        ui->F2->setEnabled(0);
        selected_seat="F2";
    }
    if(ui->F3->isChecked())
    {
        x.ar2[27]=-1;
        ui->F3->setEnabled(0);
        selected_seat="F3";
    }
    if(ui->F4->isChecked())
    {
        x.ar2[28]=-1;
        ui->F4->setEnabled(0);
        selected_seat="F4";
    }
    if(ui->F5->isChecked())
    {
        x.ar2[29]=-1;
        ui->F5->setEnabled(0);
        selected_seat="F5";
    }


    //##########################################################

    seats y;

    ifstream infile;
    infile.open("C:\\FlightApp\\FlightApp\\seats.bin",ios::binary);
    ofstream temp;
    temp.open("C:\\FlightApp\\FlightApp\\temp.bin",ios::binary);

    while(infile.read((char*)&y,sizeof (y)))
    {
            //infile.read((char*)&x,sizeof (x));
            if(planenumber==x.planeid)
            {
                continue;
            }
            else
            {
                temp.write((char*)&y,sizeof (y));
            }
    }
    infile.close();
    temp.close();

    ofstream outfile1;
    outfile1.open("C:\\FlightApp\\FlightApp\\seats.bin",ios::binary);
    ifstream temp1;
    temp1.open("C:\\FlightApp\\FlightApp\\temp.bin",ios::binary);
    while(temp1.read((char*)&y,sizeof (y)))
    {
        outfile1.write((char*)&y,sizeof (y));
    }
    outfile1.write((char*)&x,sizeof (x));
    temp1.close();
    outfile1.close();

    hide();
    costoftickets t;
    t.setModal(true);
    t.exec();

}

