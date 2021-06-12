#include "adminhomepage.h"
#include "ui_adminhomepage.h"
#include "addnewpassenger.h"
#include "addanewflight.h"
#include "listofflights.h"
#include "listsofpassengers.h"
#include "listoftransactions.h"


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

void adminhomepage::on_addnewpassenger_clicked()
{
    hide();
    addnewpassenger p;
    p.setModal(true);
    p.exec();
}

void adminhomepage::on_listofpassenger_clicked()
{
    hide();
    ListsofPassengers LP;
    LP.setModal(true);
    LP.exec();
}

void adminhomepage::on_addnewflight_clicked()
{
    hide();
    AddANewFlight f;
    f.setModal(true);
    f.exec();
}

void adminhomepage::on_listofflights_clicked()
{
    hide();
    listofflights LF;
    LF.setModal(true);
    LF.exec();
}

void adminhomepage::on_listoftransactions_clicked()
{
    hide();
    listoftransactions LT;
    LT.setModal(true);
    LT.exec();
}
