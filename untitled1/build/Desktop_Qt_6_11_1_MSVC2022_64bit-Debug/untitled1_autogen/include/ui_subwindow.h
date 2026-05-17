/********************************************************************************
** Form generated from reading UI file 'subwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.11.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SUBWINDOW_H
#define UI_SUBWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_subwindow
{
public:
    QWidget *centralwidget;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *subwindow)
    {
        if (subwindow->objectName().isEmpty())
            subwindow->setObjectName("subwindow");
        subwindow->resize(418, 193);
        centralwidget = new QWidget(subwindow);
        centralwidget->setObjectName("centralwidget");
        subwindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(subwindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 418, 18));
        subwindow->setMenuBar(menubar);
        statusbar = new QStatusBar(subwindow);
        statusbar->setObjectName("statusbar");
        subwindow->setStatusBar(statusbar);

        retranslateUi(subwindow);

        QMetaObject::connectSlotsByName(subwindow);
    } // setupUi

    void retranslateUi(QMainWindow *subwindow)
    {
        subwindow->setWindowTitle(QCoreApplication::translate("subwindow", "MainWindow", nullptr));
    } // retranslateUi

};

namespace Ui {
    class subwindow: public Ui_subwindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SUBWINDOW_H
