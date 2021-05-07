#include "listsofpassengers.h"
#include "ui_listsofpassengers.h"

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
