#include "addnewpassenger.h"
#include "listsofpassengers.h"
#include "ui_addnewpassenger.h"
#include "userhomepage.h"
#include "login.h"
#include "adminhomepage.h"
#include "addanewflight.h"
#include <fstream>
using namespace std;

extern string required;
extern int noeditdata;

struct passenger
{
    char FN[20];
    char LN[20];
    char email[20];
    char password[20];
    char birthdate[20];
    char phonenumber[20];
    char passportnumber[20];
};

addnewpassenger::addnewpassenger(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::addnewpassenger)
{
    ui->setupUi(this);


    if(noeditdata==0)
    {
        passenger x;

        ifstream input;
        input.open("C:\\FlightApp\\FlightApp\\passenger.bin",ios::binary);
        while(input.read((char*)&x,sizeof (x)))
        {
            if(required==x.email)
            {
                ui->firstname->setText(x.FN);
                ui->lastname->setText(x.LN);
                ui->email->setText(x.email);
                ui->password->setText(x.password);
                ui->birthdate->setText(x.birthdate);
                ui->phonenumber->setText(x.phonenumber);
                ui->passportnumber->setText(x.passportnumber);
            }
        }
            input.close();
    }

}

addnewpassenger::~addnewpassenger()
{
    delete ui;
}



void addnewpassenger::on_backtologin_clicked()
{
    hide();
    ListsofPassengers l;
    l.setModal(true);
    l.exec();

}

void addnewpassenger::on_toadmin_clicked()
{

    passenger x,y;


    strncpy(y.FN,ui->firstname->toPlainText().toStdString().c_str(),sizeof (y.FN));
    strncpy(y.LN,ui->lastname->toPlainText().toStdString().c_str(),sizeof (y.LN));
    strncpy(y.email,ui->email->toPlainText().toStdString().c_str(),sizeof (y.email));
    strncpy(y.password,ui->password->toPlainText().toStdString().c_str(),sizeof (y.password));
    strncpy(y.birthdate,ui->birthdate->toPlainText().toStdString().c_str(),sizeof (y.birthdate));
    strncpy(y.phonenumber,ui->phonenumber->toPlainText().toStdString().c_str(),sizeof (y.phonenumber));
    strncpy(y.passportnumber,ui->passportnumber->toPlainText().toStdString().c_str(),sizeof (y.passportnumber));
    //ofstream outbinfile;
    //outbinfile.open("C:\\FlightApp\\FlightApp\\passenger.bin",ios::app);
    //outbinfile.write((char*)&y,sizeof (y));
    //outbinfile.close();


    ifstream infile;
    infile.open("C:\\FlightApp\\FlightApp\\passenger.bin",ios::binary);
    ofstream temp;
    temp.open("C:\\FlightApp\\FlightApp\\temp.bin",ios::binary);

    while(infile.read((char*)&x,sizeof (x)))
    {
            //infile.read((char*)&x,sizeof (x));
            if(x.email==required)
            {
                continue;
            }
            else
            {
                temp.write((char*)&x,sizeof (x));
            }
    }
    infile.close();
    temp.close();

    ofstream outfile1;
    outfile1.open("C:\\FlightApp\\FlightApp\\passenger.bin",ios::binary);
    ifstream temp1;
    temp1.open("C:\\FlightApp\\FlightApp\\temp.bin",ios::binary);
    while(temp1.read((char*)&x,sizeof (x)))
    {
        outfile1.write((char*)&x,sizeof (x));
    }
    outfile1.write((char*)&y,sizeof (y));
    temp1.close();
    outfile1.close();


    hide();
    ListsofPassengers h;
    h.setModal(true);
    h.exec();
}

void addnewpassenger::on_delete_2_clicked()
{
    passenger x;


        ifstream infile;
        infile.open("C:\\FlightApp\\FlightApp\\passenger.bin",ios::binary);
        ofstream temp;
        temp.open("C:\\FlightApp\\FlightApp\\temp.bin",ios::binary);

        while(infile.read((char*)&x,sizeof (x)))
        {
                //infile.read((char*)&x,sizeof (x));
                if(x.email==required)
                {
                    continue;
                }
                else
                {
                    temp.write((char*)&x,sizeof (x));
                }
        }
        infile.close();
        temp.close();

        ofstream outfile1;
        outfile1.open("C:\\FlightApp\\FlightApp\\passenger.bin",ios::binary);
        ifstream temp1;
        temp1.open("C:\\FlightApp\\FlightApp\\temp.bin",ios::binary);
        while(temp1.read((char*)&x,sizeof (x)))
        {
            outfile1.write((char*)&x,sizeof (x));
        }
        temp1.close();
        outfile1.close();
        hide();
        ListsofPassengers h;
        h.setModal(true);
        h.exec();

}
