#include "addnewpassenger.h"
#include "ui_addnewpassenger.h"
#include "userhomepage.h"
#include "login.h"
#include "adminhomepage.h"
#include "addanewflight.h"

addnewpassenger::addnewpassenger(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::addnewpassenger)
{
    ui->setupUi(this);
}

addnewpassenger::~addnewpassenger()
{
    delete ui;
}



void addnewpassenger::on_backtologin_clicked()
{
    hide();
    adminhomepage l;
    l.setModal(true);
    l.exec();

}

void addnewpassenger::on_toadmin_clicked()
{
    hide();
    adminhomepage h;
    h.setModal(true);
    h.exec();
}
