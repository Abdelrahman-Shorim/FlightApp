#include "receipt.h"
#include "ui_receipt.h"
#include "userhomepage.h"

receipt::receipt(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::receipt)
{
    ui->setupUi(this);
}

receipt::~receipt()
{
    delete ui;
}

void receipt::on_home_clicked()
{
    hide();
    userhomepage h;
    h.setModal(true);
    h.exec();
}
