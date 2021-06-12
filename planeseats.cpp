#include "planeseats.h"
#include "ui_planeseats.h"
#include "costoftickets.h"

PlaneSeats::PlaneSeats(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::PlaneSeats)
{
    ui->setupUi(this);
}

PlaneSeats::~PlaneSeats()
{
    delete ui;
}

void PlaneSeats::on_done_clicked()
{
    hide();
    costoftickets t;
    t.setModal(true);
    t.exec();
}
