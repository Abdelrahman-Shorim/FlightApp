<<<<<<< HEAD
#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QMessageBox>
#include "edittickets.h"
#include "planeseats.h"
MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
    PlaneSeats edit;
    edit.setModal(true);
    edit.exec();
}


=======
#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QMessageBox>

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
    QMessageBox::information(this,"Message","hello",QMessageBox::Ok);
}

//NancyIs Here
//habiba is here
>>>>>>> d030c1e169ae9dde1fda899c236ea550828a1c2c
