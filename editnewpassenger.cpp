#include "editnewpassenger.h"
#include "ui_editnewpassenger.h"
#include "userhomepage.h"

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

void EditNewPassenger::on_returntosermain_clicked()
{
    hide();
    userhomepage r;
    r.setModal(true);
    r.exec();
}

void EditNewPassenger::on_backtousermain_clicked()
{
    hide();
    userhomepage r;
    r.setModal(true);
    r.exec();
}
