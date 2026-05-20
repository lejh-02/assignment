#include "mainwindow.h"
#include "subwindow.h"
#include <QApplication>
#include <iostream>
int main(int argc, char *argv[])
{
    std::string name;

    QApplication a(argc, argv);
    MainWindow w;
    w.show();

    return QApplication::exec();

}
