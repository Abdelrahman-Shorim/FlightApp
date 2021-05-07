#include "planeseats.h"
#include "ui_planeseats.h"

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
