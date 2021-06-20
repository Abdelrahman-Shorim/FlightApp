#include "editnewpassenger.h"
#include "ui_editnewpassenger.h"
#include "login.h"
#include "userhomepage.h"
#include"mainwindow.h"
#include<iostream>
#include<QString>
#include<QTextEdit>
#include <QLineEdit>
#include<fstream>
using namespace std;
extern int code;



//data from create
extern char FN[20];
extern char LN[20];
extern char email[20];
extern char password[20];
extern char birthdate[20];
extern char phonenumber[20];
extern char passportnumber[20];

//data from login
extern string firstn;
extern string lastn;
extern string mail;
extern string Password;
extern string bd;
extern string phonenum;
extern string passportnum;
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
EditNewPassenger::EditNewPassenger(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::EditNewPassenger)
{
    ui->setupUi(this);
    //converting to Qstring
    if(code==1)
    {
        QString fn=QString::fromStdString(FN);
        QString ln=QString::fromStdString(LN);
        QString Email=QString::fromStdString(email);
        QString Password=QString::fromStdString(password);
        QString Birthdate=QString::fromStdString(birthdate);
        QString phonenum=QString::fromStdString(phonenumber);
        QString passportnum=QString::fromStdString(passportnumber);

        //displaying data
        ui->firstname->setText(fn);
        ui->lastname->setText(ln);
        ui->email->setText(Email);
        ui->password->setText(Password);
        ui->BD->setText(Birthdate);
        ui->phonenumber->setText(phonenum);
        ui->passportnumber->setText(passportnum);
    }
    else if(code==0)
    {
        QString fn=QString::fromStdString(firstn);
        QString ln=QString::fromStdString(lastn);
        QString Email=QString::fromStdString(mail);
        QString Pass=QString::fromStdString(Password);
        QString Birthdate=QString::fromStdString(bd);
        QString phone=QString::fromStdString(phonenum);
        QString passport=QString::fromStdString(passportnum);

        //displaying data
        ui->firstname->setText(fn);
        ui->lastname->setText(ln);
        ui->email->setText(Email);
        ui->password->setText(Pass);
        ui->BD->setText(Birthdate);
        ui->phonenumber->setText(phone);
        ui->passportnumber->setText(passport);
    }

}

EditNewPassenger::~EditNewPassenger()
{
    delete ui;
}

void EditNewPassenger::on_returntosermain_clicked()
{
    passenger x,y;


    string em;
    if(code==1)
    {
        em=email;
        strncpy(FN,ui->firstname->toPlainText().toStdString().c_str(),sizeof (FN));
        strncpy(LN,ui->lastname->toPlainText().toStdString().c_str(),sizeof (LN));
        strncpy(password,ui->password->toPlainText().toStdString().c_str(),sizeof (password));
        strncpy(birthdate,ui->BD->toPlainText().toStdString().c_str(),sizeof (birthdate));
        strncpy(phonenumber,ui->phonenumber->toPlainText().toStdString().c_str(),sizeof (phonenumber));
        strncpy(passportnumber,ui->passportnumber->toPlainText().toStdString().c_str(),sizeof (passportnumber));
        strncpy(email,em.c_str(),sizeof(email));
    }
    else if(code==0)
    {
        em=mail;
        firstn=ui->firstname->toPlainText().toStdString();
        lastn=ui->lastname->toPlainText().toStdString();
        mail=em;
        Password=ui->password->toPlainText().toStdString();
        bd=ui->BD->toPlainText().toStdString();
        phonenum=ui->phonenumber->toPlainText().toStdString();
        passportnum=ui->passportnumber->toPlainText().toStdString();

    }
        strncpy(y.FN,ui->firstname->toPlainText().toStdString().c_str(),sizeof (y.FN));
        strncpy(y.LN,ui->lastname->toPlainText().toStdString().c_str(),sizeof (y.LN));
        strncpy(y.password,ui->password->toPlainText().toStdString().c_str(),sizeof (y.password));
        strncpy(y.birthdate,ui->BD->toPlainText().toStdString().c_str(),sizeof (y.birthdate));
        strncpy(y.phonenumber,ui->phonenumber->toPlainText().toStdString().c_str(),sizeof (y.phonenumber));
        strncpy(y.passportnumber,ui->passportnumber->toPlainText().toStdString().c_str(),sizeof (y.passportnumber));
        strncpy(y.email,em.c_str(),sizeof(y.email));


        ifstream infile;
        infile.open("C:\\FlightApp\\FlightApp\\passenger.bin",ios::binary);
        ofstream temp;
        temp.open("C:\\FlightApp\\FlightApp\\temp.bin",ios::binary);

        while(infile.read((char*)&x,sizeof (x)))
        {
                //infile.read((char*)&x,sizeof (x));
                if(x.email==em)
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


    close();
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

void EditNewPassenger::on_delete_2_clicked()
{
    passenger x;


    string em;
    if(code==1)
    {
        em=email;
    }
    else if(code==0)
    {
        em=mail;
    }
        ifstream infile;
        infile.open("C:\\FlightApp\\FlightApp\\passenger.bin",ios::binary);
        ofstream temp;
        temp.open("C:\\FlightApp\\FlightApp\\temp.bin",ios::binary);

        while(infile.read((char*)&x,sizeof (x)))
        {
                //infile.read((char*)&x,sizeof (x));
                if(x.email==em)
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


    close();
    Login r;
    r.setModal(true);
    r.exec();
}
