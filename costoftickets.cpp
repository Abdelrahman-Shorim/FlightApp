#include "costoftickets.h"
#include "ui_costoftickets.h"
#include "availableflights.h"
#include "receipt.h"
#include "visapayment.h"
#include "planeseats.h"

costoftickets::costoftickets(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::costoftickets)
{
    ui->setupUi(this);
}

costoftickets::~costoftickets()
{
    delete ui;
}



void costoftickets::on_backtoavailableflights_clicked()
{
    hide();
    availableflights f;
    f.setModal(true);
    f.exec();
}

void costoftickets::on_cash_clicked()
{
    hide();
    receipt r;
    r.setModal(true);
    r.exec();
}

void costoftickets::on_visa_clicked()
{
    hide();
    VisaPayment v;
    v.setModal(true);
    v.exec();
}

void costoftickets::on_seats_clicked()
{
    hide();
    PlaneSeats p;
    p.setModal(true);
    p.exec();
}
