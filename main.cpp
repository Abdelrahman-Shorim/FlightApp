#include "mainwindow.h"
<<<<<<< HEAD
#include "addanewflight.h"
#include "login.h"

=======
#include<createaccount.h>
>>>>>>> 20f6aec90d53ba2546a6b887d4e6d9cb06fa380b
#include <QApplication>
#include<iostream>
#include<QString>
#include<QTextEdit>
#include<iostream>
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
