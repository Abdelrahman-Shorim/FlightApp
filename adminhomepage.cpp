#include "adminhomepage.h"
#include "ui_adminhomepage.h"

adminhomepage::adminhomepage(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::adminhomepage)
{
    ui->setupUi(this);
}

adminhomepage::~adminhomepage()
{
    delete ui;
}
