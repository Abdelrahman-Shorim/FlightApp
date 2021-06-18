#include "addnewpassenger.h"
#include "ui_addnewpassenger.h"
#include "userhomepage.h"
#include "login.h"
#include "adminhomepage.h"
#include "addanewflight.h"
#include <fstream>
using namespace std;
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
}

addnewpassenger::~addnewpassenger()
{
    delete ui;
}



void addnewpassenger::on_backtologin_clicked()
{
    hide();
    adminhomepage l;
    l.setModal(true);
    l.exec();

}

void addnewpassenger::on_toadmin_clicked()
{
    passenger x;
//        x.FN=ui->firstname->toPlainText().toStdString();
//        x.LN=ui->lastname->toPlainText().toStdString();
//        x.email=ui->email->toPlainText().toStdString();
//        x.password=ui->password->toPlainText().toStdString();
//        x.birthdate=ui->birthdate->toPlainText().toStdString();
//        x.passportnumber=ui->passportnumber->toPlainText().toStdString();
//        x.phonenumber=ui->phonenumber->toPlainText().toStdString();

        ofstream outfile;
        strncpy(x.FN,ui->firstname->toPlainText().toStdString().c_str(),sizeof (x.FN));
        strncpy(x.LN,ui->lastname->toPlainText().toStdString().c_str(),sizeof (x.LN));
        strncpy(x.email,ui->email->toPlainText().toStdString().c_str(),sizeof (x.email));
        strncpy(x.password,ui->password->toPlainText().toStdString().c_str(),sizeof (x.password));
        strncpy(x.birthdate,ui->birthdate->toPlainText().toStdString().c_str(),sizeof (x.birthdate));
        strncpy(x.phonenumber,ui->phonenumber->toPlainText().toStdString().c_str(),sizeof (x.phonenumber));
        strncpy(x.passportnumber,ui->passportnumber->toPlainText().toStdString().c_str(),sizeof (x.passportnumber));
    //    outfile.open("C:\\Users\\Dell\\Documents\\nour",ios::app);
    //    outfile<<endl<<x.FN<<"\t"<<x.LN<<"\t"<<x.email<<"\t"<<x.password<<"\t";
    //    outfile<<x.birthdate<<"\t"<<x.phonenumber<<"\t"<<x.passportnumber;
        outfile.open("C:\\FlightApp\\FlightApp\\passenger.bin",ios::app);
        outfile.write((char*)&x,sizeof (x));
        outfile.close();
    hide();
    adminhomepage h;
    h.setModal(true);
    h.exec();
}
