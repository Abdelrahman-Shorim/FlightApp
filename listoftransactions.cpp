#include "listoftransactions.h"
#include "ui_listoftransactions.h"
#include "adminhomepage.h"

listoftransactions::listoftransactions(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::listoftransactions)
{
    ui->setupUi(this);
}

listoftransactions::~listoftransactions()
{
    delete ui;
}

void listoftransactions::on_toadminpage_clicked()
{
    hide();
    adminhomepage admin;
    admin.setModal(true);
    admin.exec();
}
