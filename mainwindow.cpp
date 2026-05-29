#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QMessageBox>
#include "login.h"

//contructor
//1.ui is created 2. connect table editing event

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    // Connect editing signal
    /*
    connect(ui->tableWidget, &QTableWidget::itemChanged,
            this, &MainWindow::on_tableWidget_itemChanged);
    */



    //make table unavalable to edit
    ui->tableWidget->setEditTriggers(QAbstractItemView::NoEditTriggers);

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
    //get input quantity and row
    QString name = ui->nameEdit->text();
    int quantity = ui->quantityEdit->text().toInt();


    //if name and quantity is empty pop out error message
    if(name.isEmpty() || quantity <= 0){
        QMessageBox::warning(this, "warning","Please enter name and quantity");
        return;
    }
    //for loop to search for existing item if yes then add
    /*example if apple already on table then add the quantity
    to the existing apple instead of creating another one */
    for(int i=0; i<itemCount;i++){
        if(itemNames[i]== name)
        {
            itemQty[i] += quantity;
            updateTable();
            return;
        }
    }
    //add new item
    itemNames[itemCount]=name;
    itemQty[itemCount]= quantity;
    itemCount++;

    updateTable();

    ui->nameEdit->clear();
    ui->quantityEdit->clear();
}

//  remove item
void MainWindow::on_removeButton_clicked()
{
    int row = ui->rowEdit->text().toInt()-1;

    if(row < 0 || row >=  itemCount)
        return;

    //shift array
    for(int i=row; i <itemCount -1; i++){
        itemNames[i]=itemNames[i+1];
        itemQty[i]=itemQty[i+1];

    }

    itemCount--;


    updateTable();
}

void MainWindow::on_editButton_clicked(){
    int row = ui ->rowEdit ->text().toInt()-1;
    if (row <0 ||row >= itemCount){
        return;
    }
    //get input quantity and row
    QString name = ui->nameEdit->text();
    int quantity = ui->quantityEdit->text().toInt();
    if (!name.isEmpty())
        itemNames[row]= name;
    if (quantity > 0)
        itemQty[row]= quantity;
    updateTable();
}
void MainWindow::updateTable()
{
    ui->tableWidget->blockSignals(true); // prevent infinite loop

    ui->tableWidget->setRowCount(itemCount);

    for(int i = 0;i <itemCount;i++)
    {
        QTableWidgetItem *nameItem =new
    QTableWidgetItem(itemNames[i]);
        QTableWidgetItem *qtyItem =new
    QTableWidgetItem(QString::number(itemQty[i]));
        ui->tableWidget->setItem(i, 0, nameItem);
        ui->tableWidget->setItem(i, 1, qtyItem);

    }
    ui->tableWidget->blockSignals(false);
}

void MainWindow::on_tableWidget_itemChanged(QTableWidgetItem *item)
{
    int row = item->row();

    if(row < 0 || row >= itemCount)
        return;

    int value = ui->tableWidget->item(row, 1)->text().toInt();

    if(value >= 0)
        itemQty[row] = value;

}

void MainWindow::on_logoutButton_clicked()
{
    login *log = new login();
    log->show();

    this->close();
}
