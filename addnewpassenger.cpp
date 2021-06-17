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
    string FN;
    string LN;
    string email;
    string password;
    string birthdate;
    string phonenumber;
    int passportnumber;
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
        x.FN=ui->textEdit_2->toPlainText().toStdString();
        x.LN=ui->textEdit_3->toPlainText().toStdString();
        x.email=ui->textEdit_8->toPlainText().toStdString();
        x.password=ui->textEdit_7->toPlainText().toStdString();
        x.birthdate=ui->textEdit->toPlainText().toStdString();
        x.passportnumber=ui->textEdit_5->toPlainText().toInt();
        x.phonenumber=ui->textEdit_4->toPlainText().toStdString();
        ofstream outfile;
    //    outfile.open("C:\\Users\\Dell\\Documents\\nour",ios::app);
    //    outfile<<endl<<x.FN<<"\t"<<x.LN<<"\t"<<x.email<<"\t"<<x.password<<"\t";
    //    outfile<<x.birthdate<<"\t"<<x.phonenumber<<"\t"<<x.passportnumber;
        outfile.open("C:\\FlightApp\\passenger.bin");
        outfile.write((char*)&x,sizeof (x));
        outfile.close();
    hide();
    adminhomepage h;
    h.setModal(true);
    h.exec();
}
