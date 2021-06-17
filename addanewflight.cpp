#include "addanewflight.h"
#include "ui_addanewflight.h"
#include "adminhomepage.h"

AddANewFlight::AddANewFlight(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::AddANewFlight)
{
    ui->setupUi(this);
}

AddANewFlight::~AddANewFlight()
{
    delete ui;
}

void AddANewFlight::on_toadmin_clicked()
{
    hide();
    adminhomepage admin;
    admin.setModal(true);
    admin.exec();
}

void AddANewFlight::on_toadmin_2_clicked()
{
    hide();
    adminhomepage admin;
    admin.setModal(true);
    admin.exec();
}
