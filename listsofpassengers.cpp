#include "listsofpassengers.h"
#include "ui_listsofpassengers.h"
#include "adminhomepage.h"
#include "addnewpassenger.h"

ListsofPassengers::ListsofPassengers(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::ListsofPassengers)
{
    ui->setupUi(this);
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
    hide();
    addnewpassenger add;
    add.setModal(true);
    add.exec();
}
