#include "mainwindow.h"
#include "addanewflight.h"
#include "login.h"
#include "listsofpassengers.h"
#include "adminhomepage.h"
#include<createaccount.h>
#include <QApplication>
#include<iostream>
#include<QString>
#include<QTextEdit>
#include<iostream>
#include "userhomepage.h"
#include "adminhomepage.h"
#include "costoftickets.h"
#include "listofflights.h"
#include "listoftransactions.h"
#include "receipt.h"
#include "availableflights.h"
using namespace std;
int code=0;
struct passenger
{
    int ID;
    string FN;
    string LN;
    string email;
    string password;
    string birthdate;
    int phonenumber;
    int passportnumber;
};

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
<<<<<<< HEAD
    costoftickets w;
=======
    Login w;
>>>>>>> 9abdc5a1b97d482d79faa7c623634e013a08c1a2
    w.show();
    return a.exec();
}
