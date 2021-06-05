#include "availableflights.h"
#include "ui_availableflights.h"

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

