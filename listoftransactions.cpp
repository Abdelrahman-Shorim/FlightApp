#include "listoftransactions.h"
#include "ui_listoftransactions.h"

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
