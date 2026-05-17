#include "mainwindow.h"
#include "./ui_mainwindow.h"
#include "subwindow.h"
#include <QVBoxlayout>
#include <iostream>

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

void MainWindow::on_pushButton_clicked()
{
    subwindow *newWin = new subwindow();
    newWin -> showFullScreen();

}