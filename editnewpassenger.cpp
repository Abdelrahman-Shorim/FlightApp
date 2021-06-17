#include "editnewpassenger.h"
#include "ui_editnewpassenger.h"
#include "userhomepage.h"
#include"mainwindow.h"
#include<iostream>
#include<QString>
#include<QTextEdit>
#include <QLineEdit>
#include<fstream>
using namespace std;
extern string FN;
extern string LN;
extern string email;
extern string password;
extern string birthdate;
extern string phonenumber;
extern string passportnumber;
struct passenger
{
    string FN;
    string LN;
    string email;
    string password;
    string birthdate;
    string phonenumber;
    string passportnumber;
};
//>>>>>>> 20f6aec90d53ba2546a6b887d4e6d9cb06fa380b
EditNewPassenger::EditNewPassenger(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::EditNewPassenger)
{
    ui->setupUi(this);
    //converting to Qstring
        //string phonenum1=to_string(phonenumber);
        QString fn=QString::fromStdString(FN);
        QString ln=QString::fromStdString(LN);
        QString Email=QString::fromStdString(email);
        QString Password=QString::fromStdString(password);
        QString Birthdate=QString::fromStdString(birthdate);
        QString phonenum=QString::fromStdString(phonenumber);
        QString passportnum=QString::fromStdString(passportnumber);
        //displaying data
        /*ui->textEdit->setText(fn);
        ui->textEdit_2->setText(ln);
        ui->label_7->setText(Email);
        ui->textEdit_4->setText(Password);
        ui->textEdit_6->setText(Birthdate);
        ui->textEdit_7->setText(phonenum);
        ui->textEdit_5->setText(passportnum);*/
}

EditNewPassenger::~EditNewPassenger()
{
    delete ui;
}

//<<<<<<< HEAD
void EditNewPassenger::on_returntosermain_clicked()
{
    passenger x,y;
        y.FN=ui->firstname->toPlainText().toStdString();
        y.LN=ui->lastname->toPlainText().toStdString();
        y.email=email;
        y.password=ui->password->toPlainText().toStdString();
        y.birthdate=ui->BD->toPlainText().toStdString();
        y.passportnumber=ui->passportnumber->toPlainText().toInt();
        y.phonenumber=ui->phonenumber->toPlainText().toStdString();
    //    ofstream outfile;
    //    outfile.open("C:\\Users\\Dell\\Documents\\nour",ios::app);
    //    outfile<<endl<<x.ID<<"\t"<<x.FN<<"\t"<<x.LN<<"\t"<<x.email<<"\t"<<x.password<<"\t";
    //    outfile<<x.birthdate<<"\t"<<x.phonenumber<<"\t"<<x.passportnumber;
    //    outfile.close();
    //    ifstream infile;
    //    ofstream temp;
    //    infile.open("C:\\Users\\Dell\\Documents\\nour");
    //    temp.open("C:\\Users\\Dell\\Documents\\temp");
        ifstream infile;
        infile.open("C:\\FlightApp\\passenger.bin");
        ofstream temp;
        temp.open("C:\\FlightApp\\temp.bin");
        //outbinfile.write((char*)&x,sizeof (x));
    //    y.ID=x.ID;
    //    y.FN=x.FN;
    //    y.LN=x.LN;
    //    y.email=x.email;
    //    y.password=x.password;
    //    y.birthdate=x.birthdate;
    //    y.phonenumber=x.phonenumber;
    //    y.passportnumber=x.passportnumber;
        while(!infile.eof())
        {
                //infile>>x.FN>>x.LN>>x.email>>x.password>>x.birthdate>>x.phonenumber>>x.passportnumber;
                infile.read((char*)&x,sizeof (x));
                if(x.email==email)
                {
                    continue;
                }
                else
                {
                //temp<<endl<<x.FN<<"\t"<<x.LN<<"\t"<<x.email<<"\t"<<x.password<<"\t"<<x.birthdate<<"\t"<<x.phonenumber<<"\t"<<x.passportnumber;
                temp.write((char*)&x,sizeof (x));
                }
        }
        infile.close();
        temp.close();
    //    ofstream outfile1;
    //    outfile1.open("C:\\Users\\Dell\\Documents\\nour");
    //    ifstream temp1;
    //    temp1.open("C:\\Users\\Dell\\Documents\\temp");
        ofstream outfile1;
        outfile1.open("C:\\FlightApp\\passenger.bin");
        ifstream temp1;
        temp1.open("C:\\FlightApp\\temp.bin");
        while(!temp1.eof())
        {
            //temp1>>x.FN>>x.LN>>x.email>>x.password>>x.birthdate>>x.phonenumber>>x.passportnumber;
            temp1.read((char*)&x,sizeof (x));
            //outfile1<<endl<<x.FN<<"\t"<<x.LN<<"\t"<<x.email<<"\t"<<x.password<<"\t"<<x.birthdate<<"\t"<<x.phonenumber<<"\t"<<x.passportnumber;
            outfile1.write((char*)&x,sizeof (x));
        }
        //outfile1<<endl<<y.FN<<"\t"<<y.LN<<"\t"<<email<<"\t"<<y.password<<"\t"<<y.birthdate<<"\t"<<y.phonenumber<<"\t"<<y.passportnumber;
        outfile1.write((char*)&y,sizeof (y));
        temp1.close();
        outfile1.close();


    hide();
    userhomepage r;
    r.setModal(true);
    r.exec();
}

void EditNewPassenger::on_backtousermain_clicked()
{
    hide();
    userhomepage r;
    r.setModal(true);
    r.exec();
}
