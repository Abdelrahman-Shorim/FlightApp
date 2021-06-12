#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QMessageBox>
#include "edittickets.h"
#include "planeseats.h"
#include "addanewflight.h"
#include "createaccount.h"
MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_popup_clicked()
{
    hide();
    CreateAccount abdo;
    abdo.setModal(true);
    abdo.exec();
}

