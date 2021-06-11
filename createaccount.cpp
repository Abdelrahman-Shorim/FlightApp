#include "createaccount.h"
#include "ui_createaccount.h"
#include"mainwindow.h"
#include<iostream>
#include<QString>
#include<QTextEdit>
#include <QLineEdit>
#include<fstream>
using namespace std;
struct passenger
{
    int ID;
    string FN;
    string LN;
    string email;
    string password;
    string birthdate;
    int phonenumber;
    int passportnumber;
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

void CreateAccount::on_pushButton_clicked()
{
    passenger x;
    x.FN=ui->lineEdit->toPlainText().toStdString();
    x.ID=ui->textEdit_2->toPlainText().toInt();
    x.LN=ui->textEdit->toPlainText().toStdString();
    x.email=ui->textEdit_3->toPlainText().toStdString();
    x.password=ui->textEdit_5->toPlainText().toStdString();
    x.birthdate=ui->textEdit_6->toPlainText().toStdString();
    x.passportnumber=ui->textEdit_4->toPlainText().toInt();
    x.phonenumber=ui->textEdit_8->toPlainText().toInt();
//    ofstream outfile;
//    outfile.open("C:\\Users\\Dell\\Documents\\nour",ios::app);
//    outfile<<"first name:"<<x.FN<<"\t"<<"last name:"<<x.LN<<"\t"<<"ID:"<<x.ID<<"\t"<<"email:"<<x.email<<"\t"<<"password:"<<x.password<<"\t";
//    outfile<<"passport number:"<<x.passportnumber<<"\t"<<"phone number:"<<x.phonenumber<<"\t"<<"birth date:"<<x.birthdate;
//    outfile.close();
    ofstream outbinfile;
    outbinfile.open("C:\\FlightApp\\passengers.bin",ios::binary);
    outbinfile.write((char*)&x,sizeof (x));
    outbinfile.close();

}
