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
#include <QtGui/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_subwindow
{
public:
    QWidget *centralwidget;
    QGridLayout *gridLayout;
    QSpacerItem *horizontalSpacer_2;
    QTabWidget *tabWidget;
    QWidget *tab;
    QGridLayout *gridLayout_2;
    QWidget *tab_2;
    QPushButton *pushButton;
    QMenuBar *menubar;
    QMenu *menuHOME;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *subwindow)
    {
        if (subwindow->objectName().isEmpty())
            subwindow->setObjectName("subwindow");
        subwindow->resize(498, 185);
        subwindow->setStyleSheet(QString::fromUtf8("background-color: rgb(186, 246, 182);\n"
"color: rgb(0,0,0);"));
        centralwidget = new QWidget(subwindow);
        centralwidget->setObjectName("centralwidget");
        gridLayout = new QGridLayout(centralwidget);
        gridLayout->setObjectName("gridLayout");
        horizontalSpacer_2 = new QSpacerItem(423, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        gridLayout->addItem(horizontalSpacer_2, 1, 1, 1, 1);

        tabWidget = new QTabWidget(centralwidget);
        tabWidget->setObjectName("tabWidget");
        tabWidget->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0)\n"
""));
        tab = new QWidget();
        tab->setObjectName("tab");
        gridLayout_2 = new QGridLayout(tab);
        gridLayout_2->setObjectName("gridLayout_2");
        tabWidget->addTab(tab, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName("tab_2");
        tabWidget->addTab(tab_2, QString());

        gridLayout->addWidget(tabWidget, 0, 0, 1, 2);

        pushButton = new QPushButton(centralwidget);
        pushButton->setObjectName("pushButton");
        pushButton->setMaximumSize(QSize(56, 18));
        pushButton->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 0, 0);\n"
"color: rgb(255, 255, 255);"));

        gridLayout->addWidget(pushButton, 1, 0, 1, 1);

        subwindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(subwindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 498, 18));
        menuHOME = new QMenu(menubar);
        menuHOME->setObjectName("menuHOME");
        subwindow->setMenuBar(menubar);
        statusbar = new QStatusBar(subwindow);
        statusbar->setObjectName("statusbar");
        subwindow->setStatusBar(statusbar);

        menubar->addAction(menuHOME->menuAction());

        retranslateUi(subwindow);
        QObject::connect(pushButton, &QPushButton::clicked, subwindow, qOverload<>(&QMainWindow::close));

        QMetaObject::connectSlotsByName(subwindow);
    } // setupUi

    void retranslateUi(QMainWindow *subwindow)
    {
        subwindow->setWindowTitle(QCoreApplication::translate("subwindow", "MainWindow", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab), QCoreApplication::translate("subwindow", "Tab 1", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QCoreApplication::translate("subwindow", "Tab 2", nullptr));
        pushButton->setText(QCoreApplication::translate("subwindow", "Back", nullptr));
        menuHOME->setTitle(QCoreApplication::translate("subwindow", "HOME", nullptr));
    } // retranslateUi

};

namespace Ui {
    class subwindow: public Ui_subwindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SUBWINDOW_H
