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

//    QMessageBox::information(this,"Message","hiiiiiiiiiiiiiiiiiiiiiiiiiiiii",QMessageBox::Ok);

void MainWindow::on_pushButton_2_clicked()
{
    QMessageBox::information(this,"Message","hiiiiiiiiiiiiiiiiiiiiiiiiiiiii",QMessageBox::Ok);
}

void MainWindow::on_pushButton_clicked()
{
    QMessageBox::information(this,"Message","hiiii",QMessageBox::Ok);
}

void MainWindow::on_pushButton_3_clicked()
{
    QMessageBox::information(this,"Message","hiiiiiiiiiiiiiiiiiiiiiiiiiiiii",QMessageBox::Ok);

}

void MainWindow::on_pushButton_4_clicked()
{
    QMessageBox::information(this,"Message","ero",QMessageBox::Ok);

}

void MainWindow::on_pushButton_5_clicked()
{
    QMessageBox::information(this,"Message","er",QMessageBox::Ok);
}
