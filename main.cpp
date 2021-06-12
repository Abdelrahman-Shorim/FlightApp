#include "mainwindow.h"

#include "addanewflight.h"
#include "login.h"

#include<createaccount.h>

#include <QApplication>
#include<iostream>
#include<QString>
#include<QTextEdit>
#include<iostream>
#include "editnewpassenger.h"
using namespace std;
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
    Login w;
    w.show();
    return a.exec();
}
