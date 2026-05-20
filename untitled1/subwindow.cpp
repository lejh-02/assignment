#include "subwindow.h"
#include "ui_subwindow.h"
#include "mainwindow.h"

subwindow::subwindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::subwindow)
{
    ui->setupUi(this);
}

subwindow::~subwindow()
{
    delete ui;
}

void subwindow::on_pushButton_clicked()
{
    MainWindow *newWin = new MainWindow();
    newWin -> show();
}


