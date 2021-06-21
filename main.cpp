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
#include "planeseats.h"
#include "receipt.h"
#include "availableflights.h"
#include <QFile>
#include <QtThemeSupport/qtthemesupportversion.h>
#include <QtWidgets/QApplication>
#include <QDataStream>

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
    /*
    QApplication a(argc, argv);
    QFile styleSheetFile("C://FlightApp./Gravira.qss");
    if(styleSheetFile.open(QFile::ReadOnly))
    {
    QString stylesheet = QLatin1String(styleSheetFile.readAll());
    a.setStyleSheet(stylesheet);
    }
    else
        return false ;

*/
    QApplication a(argc, argv);

    Login w;
    w.show();
    return a.exec();
}
