#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QMessageBox>
#include "edittickets.h"
MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
    edittickets edit;
    edit.setModal(true);
    edit.exec();
}


