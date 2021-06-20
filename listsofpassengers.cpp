#include "listsofpassengers.h"
#include "ui_listsofpassengers.h"
#include "adminhomepage.h"
#include "addnewpassenger.h"
#include <string.h>
#include <fstream>
#include <QMessageBox>
//#include
using namespace std;
string required;
int noeditdata;
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

ListsofPassengers::ListsofPassengers(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::ListsofPassengers)
{
    ui->setupUi(this);
    passenger x;
        ifstream infile;
        infile.open("C:\\FlightApp\\FlightApp\\passenger.bin",ios::binary);
        while(infile.read((char*)&x,sizeof (x)))
        {
<<<<<<< HEAD
            string name=x.FN;
            string email=x.email;
=======
            //infile.read((char*)&x,sizeof (x));
            string name=x.email;
            string email=x.password;
>>>>>>> 74459b7015752d87157bd973a4d86301e5916fc6
            string all=name+"    "+email;
            ui->listWidget->addItem(QString::fromStdString(all));

        }
        infile.close();
}

ListsofPassengers::~ListsofPassengers()
{
    delete ui;
}

void ListsofPassengers::on_backtoadmin_clicked()
{
    hide();
    adminhomepage admin;
    admin.setModal(true);
    admin.exec();
}

void ListsofPassengers::on_toaddnewpassenger_clicked()
{
    noeditdata=1;
    hide();
    addnewpassenger add;
    add.setModal(true);
    add.exec();
}

void ListsofPassengers::on_editpassenger_clicked()
{
    noeditdata=0;
    required=ui->listWidget->currentItem()->text().toStdString();
    string m=required.substr(0,required.find(" "));
    required=m;

    hide();
    addnewpassenger add;
    add.setModal(true);
    add.exec();
}
