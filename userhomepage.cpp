#include "userhomepage.h"
#include "ui_userhomepage.h"
#include "editnewpassenger.h"
#include "receipt.h"
#include "availableflights.h"

userhomepage::userhomepage(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::userhomepage)
{
    ui->setupUi(this);
}

userhomepage::~userhomepage()
{
    delete ui;
}

void userhomepage::on_editprofile_clicked()
{
    hide();
    EditNewPassenger edit;
    edit.setModal(true);
    edit.exec();
}

void userhomepage::on_reservation_clicked()
{
    hide();
    receipt r;
    r.setModal(true);
    r.exec();
}

void userhomepage::on_bookaflight_clicked()
{
    hide();
    availableflights f;
    f.setModal(true);
    f.exec();
}
