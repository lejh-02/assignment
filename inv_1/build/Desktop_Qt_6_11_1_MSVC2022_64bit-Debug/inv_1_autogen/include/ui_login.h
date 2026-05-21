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
#include <QtWidgets/QSpacerItem>

QT_BEGIN_NAMESPACE

class Ui_login
{
public:
    QGridLayout *gridLayout;
    QSpacerItem *horizontalSpacer_2;
    QLineEdit *usernameEdit;
    QLabel *label_2;
    QSpacerItem *verticalSpacer_2;
    QLabel *label_3;
    QLineEdit *passwordEdit;
    QLabel *label;
    QSpacerItem *horizontalSpacer;
    QSpacerItem *verticalSpacer;
    QSpacerItem *verticalSpacer_3;
    QPushButton *pushButton;
    QPushButton *loginButton;

    void setupUi(QDialog *login)
    {
        if (login->objectName().isEmpty())
            login->setObjectName("login");
        login->resize(722, 285);
        login->setStyleSheet(QString::fromUtf8("background-color: rgb(202, 255, 244);\n"
"color: rgb(0, 0, 0);"));
        gridLayout = new QGridLayout(login);
        gridLayout->setObjectName("gridLayout");
        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        gridLayout->addItem(horizontalSpacer_2, 2, 4, 1, 1);

        usernameEdit = new QLineEdit(login);
        usernameEdit->setObjectName("usernameEdit");
        usernameEdit->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));

        gridLayout->addWidget(usernameEdit, 2, 2, 1, 1);

        label_2 = new QLabel(login);
        label_2->setObjectName("label_2");

        gridLayout->addWidget(label_2, 3, 1, 1, 1);

        verticalSpacer_2 = new QSpacerItem(20, 111, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        gridLayout->addItem(verticalSpacer_2, 6, 3, 1, 1);

        label_3 = new QLabel(login);
        label_3->setObjectName("label_3");

        gridLayout->addWidget(label_3, 0, 1, 1, 1);

        passwordEdit = new QLineEdit(login);
        passwordEdit->setObjectName("passwordEdit");
        passwordEdit->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);\n"
"\n"
""));

        gridLayout->addWidget(passwordEdit, 3, 2, 1, 1);

        label = new QLabel(login);
        label->setObjectName("label");

        gridLayout->addWidget(label, 2, 1, 1, 1);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        gridLayout->addItem(horizontalSpacer, 2, 0, 1, 1);

        verticalSpacer = new QSpacerItem(20, 94, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        gridLayout->addItem(verticalSpacer, 6, 1, 1, 1);

        verticalSpacer_3 = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        gridLayout->addItem(verticalSpacer_3, 1, 1, 1, 1);

        pushButton = new QPushButton(login);
        pushButton->setObjectName("pushButton");
        pushButton->setMaximumSize(QSize(129, 29));
        pushButton->setStyleSheet(QString::fromUtf8("border-style: 15px;\n"
"background-color: rgb(211, 0, 4);"));

        gridLayout->addWidget(pushButton, 5, 1, 1, 1);

        loginButton = new QPushButton(login);
        loginButton->setObjectName("loginButton");
        loginButton->setStyleSheet(QString::fromUtf8(""));

        gridLayout->addWidget(loginButton, 5, 2, 1, 1);


        retranslateUi(login);
        QObject::connect(pushButton, &QPushButton::clicked, login, qOverload<>(&QDialog::close));

        QMetaObject::connectSlotsByName(login);
    } // setupUi

    void retranslateUi(QDialog *login)
    {
        login->setWindowTitle(QCoreApplication::translate("login", "Dialog", nullptr));
        label_2->setText(QCoreApplication::translate("login", "Password:", nullptr));
        label_3->setText(QCoreApplication::translate("login", "Inventory system", nullptr));
        label->setText(QCoreApplication::translate("login", "Account:", nullptr));
        pushButton->setText(QCoreApplication::translate("login", "EXIT", nullptr));
        loginButton->setText(QCoreApplication::translate("login", "login", nullptr));
    } // retranslateUi

};

namespace Ui {
    class login: public Ui_login {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LOGIN_H
