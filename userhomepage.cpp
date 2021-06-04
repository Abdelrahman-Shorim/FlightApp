#include "userhomepage.h"
#include "ui_userhomepage.h"

userhomepage::userhomepage(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::userhomepage)
{
    ui->setupUi(this);
}

userhomepage::~userhomepage()
{
    delete ui;
}
