#include "login.h"
#include <iostream>
#include "ui_login.h"
#include "addnewpassenger.h"
#include "adminhomepage.h"
#include "userhomepage.h"
#include <QLineEdit>
#include <string>
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


void Login::on_admin_clicked()
{
    hide();
    adminhomepage admin;
    admin.setModal(true);
    admin.exec();
}

void Login::on_passenger_clicked()
{
    hide();
    userhomepage user;
    user.setModal(true);
    user.exec();
}

void Login::on_createaccount_clicked()
{
    hide();
    addnewpassenger create;
    create.setModal(true);
    create.exec();
}



void Login::on_loginbtn_clicked()
{
    string x=ui->emailinput->text().toStdString();
}

void Login::on_passwordinput_cursorPositionChanged(int arg1, int arg2)
{
    ui->passwordinput->setEchoMode(QLineEdit::Password);
}
