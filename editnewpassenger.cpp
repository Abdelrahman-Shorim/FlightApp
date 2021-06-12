#include "editnewpassenger.h"
#include "ui_editnewpassenger.h"
<<<<<<< HEAD
#include "userhomepage.h"

=======
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
>>>>>>> 20f6aec90d53ba2546a6b887d4e6d9cb06fa380b
EditNewPassenger::EditNewPassenger(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::EditNewPassenger)
{
    ui->setupUi(this);
}

EditNewPassenger::~EditNewPassenger()
{
    delete ui;
}

<<<<<<< HEAD
void EditNewPassenger::on_returntosermain_clicked()
{
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
=======
void EditNewPassenger::on_pushButton_2_clicked()
{
    passenger x,y;
    x.FN=ui->textEdit->toPlainText().toStdString();
    x.ID=ui->textEdit_8->toPlainText().toInt();
    x.LN=ui->textEdit_2->toPlainText().toStdString();
    x.email=ui->textEdit_3->toPlainText().toStdString();
    x.password=ui->textEdit_4->toPlainText().toStdString();
    x.birthdate=ui->textEdit_6->toPlainText().toStdString();
    x.passportnumber=ui->textEdit_5->toPlainText().toInt();
    x.phonenumber=ui->textEdit_7->toPlainText().toInt();
    ifstream infile;
    ofstream outfile;
    infile.open("C:\\Users\\Dell\\Documents\\nour");
    while(!infile.eof())
    {
        infile>>x.ID>>x.FN>>x.LN>>x.email>>x.password>>x.birthdate>>x.phonenumber>>x.passportnumber;
        if(y.ID==x.ID)
        {
            //sed '/REGULAR/d' ./file
        }
    }
>>>>>>> 20f6aec90d53ba2546a6b887d4e6d9cb06fa380b
}
