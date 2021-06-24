#include "login.h"
#include <iostream>
#include "ui_login.h"
#include "addnewpassenger.h"
#include "adminhomepage.h"
#include "userhomepage.h"
#include "mainwindow.h"
#include <QLineEdit>
#include <string>
#include <QMessageBox>
#include "createaccount.h"
#include <fstream>
using namespace std;
extern int code;

string firstn;
string lastn;
string mail;
string Password;
string bd;
string phonenum;
string passportnum;
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

Login::Login(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Login)
{
    ui->setupUi(this);
}

Login::~Login()
{
    delete ui;
}

void Login::on_createaccount_clicked()
{
    code=1;
    hide();
    CreateAccount create;
    create.setModal(true);
    create.exec();
}



void Login::on_loginbtn_clicked()
{
    string emailcheck=ui->emailinput->text().toStdString();
    string passcheck=ui->passwordinput->text().toStdString();
    passenger x;
int key=0;

        ifstream infile;
        infile.open("C:\\FlightApp\\FlightApp\\passenger.bin");
        while(!infile.eof())
        {
            infile.read((char*)&x,sizeof (x));
            string email=x.email;
            string pass=x.password;
            if(emailcheck==email&&pass==passcheck)
            {
                //Gemail=email;
                key=1;
                firstn=x.FN;
                lastn=x.LN;
                mail=x.email;
                Password=x.password;
                bd=x.birthdate;
                phonenum=x.phonenumber;
                passportnum=x.passportnumber;

                hide();
                userhomepage user;
                user.setModal(true);
                user.exec();
                break;
            }
        }
        infile.close();


    if(emailcheck=="admin"&&passcheck=="123")
    {
        key=1;
        hide();
        adminhomepage admin;
        admin.setModal(true);
        admin.exec();
    }
    if(key!=1)
        QMessageBox::information(this,"no account","if u don't have an account please create one",QMessageBox::Ok);

}

void Login::on_passwordinput_cursorPositionChanged(int arg1, int arg2)
{
    ui->passwordinput->setEchoMode(QLineEdit::Password);
}
