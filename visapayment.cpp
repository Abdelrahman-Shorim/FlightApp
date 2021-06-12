#include "visapayment.h"
#include "ui_visapayment.h"
#include "receipt.h"
#include "costoftickets.h"

VisaPayment::VisaPayment(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::VisaPayment)
{
    ui->setupUi(this);
}

VisaPayment::~VisaPayment()
{
    delete ui;
}

void VisaPayment::on_toreceit_clicked()
{
    hide();
    receipt r;
    r.setModal(true);
    r.exec();
}

void VisaPayment::on_backtocostofticket_clicked()
{
    hide();
    costoftickets t;
    t.setModal(true);
    t.exec();
}
