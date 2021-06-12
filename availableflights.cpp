#include "availableflights.h"
#include "ui_availableflights.h"
#include "userhomepage.h"
#include "costoftickets.h"

availableflights::availableflights(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::availableflights)
{
    ui->setupUi(this);
}

availableflights::~availableflights()
{
    delete ui;
}


void availableflights::on_usermain_clicked()
{
    hide();
    userhomepage h;
    h.setModal(true);
    h.exec();
}

void availableflights::on_book_clicked()
{
    hide();
    costoftickets t;
    t.setModal(true);
    t.exec();
}
