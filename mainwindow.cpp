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
}

