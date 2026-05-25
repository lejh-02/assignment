#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

// show username
void MainWindow::setUsername(const QString &name)
{
    ui->welcomeLabel->setText("Welcome, " + name);
}

//  add item
void MainWindow::on_addButton_clicked()
{
    QString name = ui->nameEdit->text();
    int quantity = ui->quantityEdit->text().toInt();

    if(name.isEmpty() || quantity <= 0)
        return;

    inventory[name] += quantity;

    updateList();

    ui->nameEdit->clear();
    ui->quantityEdit->clear();
}

// ✅ remove item
void MainWindow::on_removeButton_clicked()
{
    QListWidgetItem *item = ui->listWidget->currentItem();

    if(!item)
        return;

    QString name = item->text().section(" : ", 0, 0);

    inventory.remove(name);

    updateList();
}

// ✅ update list
void MainWindow::updateList()
{
    ui->listWidget->clear();

    for(auto it = inventory.begin(); it != inventory.end(); ++it)
    {
        QString line = it.key() + " : " + QString::number(it.value());
        ui->listWidget->addItem(line);
    }
}