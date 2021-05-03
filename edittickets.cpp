#include "edittickets.h"
#include "ui_edittickets.h"

edittickets::edittickets(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::edittickets)
{
    ui->setupUi(this);
}

edittickets::~edittickets()
{
    delete ui;
}
