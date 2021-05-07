#include "editnewpassenger.h"
#include "ui_editnewpassenger.h"

EditNewPassenger::EditNewPassenger(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::EditNewPassenger)
{
    ui->setupUi(this);
}

EditNewPassenger::~EditNewPassenger()
{
    delete ui;
}
