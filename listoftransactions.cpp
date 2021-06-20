#include "listoftransactions.h"
#include "ui_listoftransactions.h"
#include "adminhomepage.h"
#include "availableflights.h"
#include <fstream>
using namespace std;
struct transactions
{
    char passengermail[20];
    char planenumber[20];
    char depcountry[20];
    char destcountry[20];
};
listoftransactions::listoftransactions(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::listoftransactions)
{
    ui->setupUi(this);
    transactions y;
    ifstream infile;
    infile.open("C:\\FlightApp\\FlightApp\\transactions.bin");
    while(infile.read((char*)&y,sizeof(y)))
    {
        string passengermail=y.passengermail;
        string planenumber=y.planenumber;
        string depcountry=y.depcountry;
        string destcountry=y.destcountry;
        string all=passengermail+"  "+planenumber+"  "+depcountry+"  "+destcountry;
        ui->listWidget->addItem(QString::fromStdString(all));
    }

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
