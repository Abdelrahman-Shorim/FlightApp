#include "addanewflight.h"
#include "ui_addanewflight.h"

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
