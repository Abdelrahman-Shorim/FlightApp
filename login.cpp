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
using namespace std;

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
    string name=ui->emailinput->text().toStdString();
    string pass=ui->passwordinput->text().toStdString();

    if(name=="abdo"&&pass=="321")
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
}

void Login::on_passwordinput_cursorPositionChanged(int arg1, int arg2)
{
    ui->passwordinput->setEchoMode(QLineEdit::Password);
}
