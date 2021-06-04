#include "paymentsuccessful.h"
#include "ui_paymentsuccessful.h"

Paymentsuccessful::Paymentsuccessful(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Paymentsuccessful)
{
    ui->setupUi(this);
}

Paymentsuccessful::~Paymentsuccessful()
{
    delete ui;
}
