#include "listofflights.h"
#include "ui_listofflights.h"
#include "addanewflight.h"
#include "adminhomepage.h"

listofflights::listofflights(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::listofflights)
{
    ui->setupUi(this);
}

listofflights::~listofflights()
{
    delete ui;
}

void listofflights::on_editpassenger_clicked()
{
    hide();
    AddANewFlight a;
    a.setModal(true);
    a.exec();
}

void listofflights::on_toadminpage_clicked()
{
    hide();
    adminhomepage admin;
    admin.setModal(true);
    admin.exec();
}
