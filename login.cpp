#include "login.h"
#include <iostream>
#include "ui_login.h"
#include "addnewpassenger.h"
#include "adminhomepage.h"
#include "userhomepage.h"
#include <QLineEdit>
#include <string>
#include <QMessageBox>
#include "createaccount.h"
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
 //string FN;
 //string LN;
 //string Gemail;
 //string password;
 //string birthdate;
 //string phonenumber;
 //string passportnumber;

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
                hide();
                userhomepage user;
                user.setModal(true);
                user.exec();
            }
        }
        infile.close();
        if(key==0)
            QMessageBox::information(this,"no account","if u don't have an account please create one",QMessageBox::Ok);



    /*if(name=="abdo"&&pass=="321")
    {
        hide();
        adminhomepage admin;
        admin.setModal(true);
        admin.exec();
    }
    else if(name=="nour"&&pass=="123")
    {
        hide();
        userhomepage user;
        user.setModal(true);
        user.exec();
    }
    else
        QMessageBox::information(this,"no account","if u don't have an account please create one",QMessageBox::Ok);
        */
}

void Login::on_passwordinput_cursorPositionChanged(int arg1, int arg2)
{
    ui->passwordinput->setEchoMode(QLineEdit::Password);
}
