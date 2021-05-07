#include "editanewflight.h"
#include "ui_editanewflight.h"

EditANewFlight::EditANewFlight(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::EditANewFlight)
{
    ui->setupUi(this);
}

EditANewFlight::~EditANewFlight()
{
    delete ui;
}
