#include "createaccount.h"
#include "ui_createaccount.h"
#include "userhomepage.h"
#include "login.h"
#include"mainwindow.h"
#include<iostream>
#include<QString>
#include<QTextEdit>
#include <QLineEdit>
#include<fstream>
#include <string.h>
#include <string>
using namespace std;
//string FN;
//string LN;
//string email;
//string password;
//string birthdate;
//string phonenumber;
//string passportnumber;

char FN[20];
char LN[20];
char email[20];
char password[20];
char birthdate[20];
char phonenumber[20];
char passportnumber[20];
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
CreateAccount::CreateAccount(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::CreateAccount)
{
    ui->setupUi(this);
}

CreateAccount::~CreateAccount()
{
    delete ui;
}


void CreateAccount::on_tousermain_clicked()
{
    passenger x;

    ofstream outbinfile;
    outbinfile.open("C:\\FlightApp\\FlightApp\\passenger.bin",ios::app);
    strncpy(x.FN,ui->firstname->toPlainText().toStdString().c_str(),sizeof (x.FN));
    strncpy(x.LN,ui->lastname->toPlainText().toStdString().c_str(),sizeof (x.LN));
    strncpy(x.email,ui->email->toPlainText().toStdString().c_str(),sizeof (x.email));
    strncpy(x.password,ui->password->toPlainText().toStdString().c_str(),sizeof (x.password));
    strncpy(x.birthdate,ui->birthdate->toPlainText().toStdString().c_str(),sizeof (x.birthdate));
    strncpy(x.phonenumber,ui->phonenumber->toPlainText().toStdString().c_str(),sizeof (x.phonenumber));
    strncpy(x.passportnumber,ui->passportnumber->toPlainText().toStdString().c_str(),sizeof (x.passportnumber));
    outbinfile.write((char*)&x,sizeof (x));
    outbinfile.close();

    strncpy(FN,ui->firstname->toPlainText().toStdString().c_str(),sizeof (FN));
    strncpy(LN,ui->lastname->toPlainText().toStdString().c_str(),sizeof (LN));
    strncpy(email,ui->email->toPlainText().toStdString().c_str(),sizeof (email));
    strncpy(password,ui->password->toPlainText().toStdString().c_str(),sizeof (password));
    strncpy(birthdate,ui->birthdate->toPlainText().toStdString().c_str(),sizeof (birthdate));
    strncpy(phonenumber,ui->phonenumber->toPlainText().toStdString().c_str(),sizeof (phonenumber));
    strncpy(passportnumber,ui->passportnumber->toPlainText().toStdString().c_str(),sizeof (passportnumber));
//    FN=ui->firstname->toPlainText().toStdString();
//    LN=ui->lastname->toPlainText().toStdString();
//    email=ui->email->toPlainText().toStdString();
//    password=ui->password->toPlainText().toStdString();
//    birthdate=ui->birthdate->toPlainText().toStdString();
//    phonenumber=ui->phonenumber->toPlainText().toStdString();
//    passportnumber=ui->passportnumber->toPlainText().toStdString();


    hide();
    userhomepage user;
    user.setModal(true);
    user.exec();
}

void CreateAccount::on_tologin_clicked()
{
    hide();
    Login x;
    x.setModal(true);
    x.exec();
}
