/********************************************************************************
** Form generated from reading UI file 'login.ui'
**
** Created by: Qt User Interface Compiler version 6.11.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LOGIN_H
#define UI_LOGIN_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_login
{
public:
    QGridLayout *gridLayout;
    QWidget *widget;
    QLabel *label_2;
    QLineEdit *passwordEdit;
    QLineEdit *usernameEdit;
    QLabel *label;
    QPushButton *loginButton;
    QPushButton *pushButton_2;
    QLabel *label_3;

    void setupUi(QDialog *login)
    {
        if (login->objectName().isEmpty())
            login->setObjectName("login");
        login->setWindowModality(Qt::WindowModality::ApplicationModal);
        login->resize(696, 738);
        login->setToolTipDuration(-2);
        login->setStyleSheet(QString::fromUtf8(""));
        gridLayout = new QGridLayout(login);
        gridLayout->setObjectName("gridLayout");
        gridLayout->setVerticalSpacing(11);
        gridLayout->setContentsMargins(-1, 10, -1, -1);
        widget = new QWidget(login);
        widget->setObjectName("widget");
        widget->setLayoutDirection(Qt::LayoutDirection::RightToLeft);
        widget->setStyleSheet(QString::fromUtf8(""));
        label_2 = new QLabel(widget);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(70, 250, 80, 28));
        passwordEdit = new QLineEdit(widget);
        passwordEdit->setObjectName("passwordEdit");
        passwordEdit->setGeometry(QRect(70, 280, 211, 28));
        passwordEdit->setCursor(QCursor(Qt::CursorShape::SizeHorCursor));
        passwordEdit->setStyleSheet(QString::fromUtf8("\n"
"QLineEdit {\n"
"    background-color: white;\n"
"    color: black;\n"
"}\n"
"\n"
""));
        usernameEdit = new QLineEdit(widget);
        usernameEdit->setObjectName("usernameEdit");
        usernameEdit->setGeometry(QRect(70, 200, 211, 28));
        usernameEdit->setStyleSheet(QString::fromUtf8("\n"
"QLineEdit {\n"
"    background-color: white;\n"
"    color: black;\n"
"}\n"
""));
        label = new QLabel(widget);
        label->setObjectName("label");
        label->setGeometry(QRect(70, 170, 80, 28));
        loginButton = new QPushButton(widget);
        loginButton->setObjectName("loginButton");
        loginButton->setGeometry(QRect(70, 370, 151, 31));
        loginButton->setStyleSheet(QString::fromUtf8(""));
        pushButton_2 = new QPushButton(widget);
        pushButton_2->setObjectName("pushButton_2");
        pushButton_2->setGeometry(QRect(260, 360, 141, 51));
        label_3 = new QLabel(widget);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(70, 50, 431, 91));
        label_3->setCursor(QCursor(Qt::CursorShape::UpArrowCursor));
        label_3->setAutoFillBackground(false);
        label_3->setTextFormat(Qt::TextFormat::RichText);

        gridLayout->addWidget(widget, 1, 0, 1, 1);


        retranslateUi(login);
        QObject::connect(pushButton_2, &QPushButton::clicked, login, qOverload<>(&QDialog::close));

        QMetaObject::connectSlotsByName(login);
    } // setupUi

    void retranslateUi(QDialog *login)
    {
        login->setWindowTitle(QCoreApplication::translate("login", "Inventory system", nullptr));
        label_2->setText(QCoreApplication::translate("login", "Password:", nullptr));
#if QT_CONFIG(tooltip)
        usernameEdit->setToolTip(QCoreApplication::translate("login", "<html><head/><body><p>Enter account name</p></body></html>", nullptr));
#endif // QT_CONFIG(tooltip)
        label->setText(QCoreApplication::translate("login", "Account:", nullptr));
        loginButton->setText(QCoreApplication::translate("login", "Sign in", nullptr));
        pushButton_2->setText(QCoreApplication::translate("login", "EXIT", nullptr));
        label_3->setText(QCoreApplication::translate("login", "Backpack  (INVENTORY MANAGEMENT SYSTEM)", nullptr));
    } // retranslateUi

};

namespace Ui {
    class login: public Ui_login {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LOGIN_H
