#include "visapayment.h"
#include "ui_visapayment.h"

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
