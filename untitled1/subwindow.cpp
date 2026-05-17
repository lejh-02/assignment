#include "subwindow.h"
#include "ui_subwindow.h"

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
