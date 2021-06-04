#include "flightrejected.h"
#include "ui_flightrejected.h"

flightrejected::flightrejected(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::flightrejected)
{
    ui->setupUi(this);
}

flightrejected::~flightrejected()
{
    delete ui;
}
