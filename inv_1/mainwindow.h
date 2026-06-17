#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QMap>
#include <QTableWidgetItem>   // ✅ changed

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

    void setUsername(const QString &name);

private slots:
    void on_addButton_clicked();
    void on_removeButton_clicked();
    void on_editButton_clicked();
    void on_tableWidget_itemChanged(QTableWidgetItem *item);

private:
    Ui::MainWindow *ui;
    QString itemNames[999];
    int itemQty[999];
    int itemCount =0;

    void updateTable();
};

#endif // MAINWINDOW_H