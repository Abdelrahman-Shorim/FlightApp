#include "listofflights.h"
#include "ui_listofflights.h"

listofflights::listofflights(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::listofflights)
{
    ui->setupUi(this);
}

listofflights::~listofflights()
{
    delete ui;
}
