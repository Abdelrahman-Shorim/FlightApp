#include "addnewpassenger.h"
#include "ui_addnewpassenger.h"
#include "userhomepage.h"
#include "login.h"

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

void addnewpassenger::on_tousermain_clicked()
{
    hide();
    userhomepage h;
    h.setModal(true);
    h.exec();
}

void addnewpassenger::on_backtologin_clicked()
{
    hide();
    Login l;
    l.setModal(true);
    l.exec();

}
