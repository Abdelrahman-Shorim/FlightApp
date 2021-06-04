#include "editdeletereservation.h"
#include "ui_editdeletereservation.h"

editdeletereservation::editdeletereservation(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::editdeletereservation)
{
    ui->setupUi(this);
}

editdeletereservation::~editdeletereservation()
{
    delete ui;
}
