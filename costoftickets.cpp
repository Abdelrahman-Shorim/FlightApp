#include "costoftickets.h"
#include "ui_costoftickets.h"

costoftickets::costoftickets(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::costoftickets)
{
    ui->setupUi(this);
}

costoftickets::~costoftickets()
{
    delete ui;
}


