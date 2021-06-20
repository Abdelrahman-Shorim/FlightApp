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
    Login w;
    //ListsofPassengers w;
=======
    //Login w;
    ListsofPassengers w;
>>>>>>> 74459b7015752d87157bd973a4d86301e5916fc6
    w.show();
    return a.exec();
}
