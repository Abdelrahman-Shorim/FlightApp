#include "receipt.h"
#include "ui_receipt.h"

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
