#include "mainwindow.h"
#include<createaccount.h>
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
    MainWindow w;
    w.show();
    return a.exec();
}
