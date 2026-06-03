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
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_login
{
public:
    QGridLayout *gridLayout;
    QGroupBox *groupBox;
    QLineEdit *usernameEdit;
    QLineEdit *passwordEdit;
    QPushButton *loginButton;
    QLabel *label;
    QLabel *label_2;
    QPushButton *tutorialButton;
    QPushButton *exitButton;

    void setupUi(QDialog *login)
    {
        if (login->objectName().isEmpty())
            login->setObjectName("login");
        login->setWindowModality(Qt::WindowModality::ApplicationModal);
        login->resize(731, 540);
        login->setCursor(QCursor(Qt::CursorShape::ArrowCursor));
        login->setFocusPolicy(Qt::FocusPolicy::NoFocus);
        login->setContextMenuPolicy(Qt::ContextMenuPolicy::DefaultContextMenu);
        login->setWindowOpacity(2.000000000000000);
        login->setToolTipDuration(0);
        login->setStyleSheet(QString::fromUtf8("background-color: qlineargradient(spread:pad, x1:0.402611, y1:0.403, x2:1, y2:0.403318, stop:0.862559 rgba(0, 0, 0, 255));"));
        gridLayout = new QGridLayout(login);
        gridLayout->setObjectName("gridLayout");
        gridLayout->setVerticalSpacing(11);
        gridLayout->setContentsMargins(-1, 10, -1, -1);
        groupBox = new QGroupBox(login);
        groupBox->setObjectName("groupBox");
        usernameEdit = new QLineEdit(groupBox);
        usernameEdit->setObjectName("usernameEdit");
        usernameEdit->setGeometry(QRect(260, 230, 201, 31));
        usernameEdit->setStyleSheet(QString::fromUtf8("QLineEdit {\n"
"    border: 2px solid #a0a0a0;\n"
"    border-radius: 14px;      /* Controls the corner roundness */\n"
"    padding: 4px 8px;        /* Keeps the text away from the borders */\n"
"     /* Keeps the background white */\n"
"}\n"
"\n"
"/* Optional: Change border color when clicked/focused */\n"
"QLineEdit:focus {\n"
"    border: 2px solid #0078d4; \n"
"}"));
        passwordEdit = new QLineEdit(groupBox);
        passwordEdit->setObjectName("passwordEdit");
        passwordEdit->setGeometry(QRect(260, 270, 201, 31));
        passwordEdit->setCursor(QCursor(Qt::CursorShape::IBeamCursor));
        passwordEdit->setFocusPolicy(Qt::FocusPolicy::WheelFocus);
        passwordEdit->setStyleSheet(QString::fromUtf8("QLineEdit {\n"
"    border: 2px solid #a0a0a0;\n"
"    border-radius: 14px;      /* Controls the corner roundness */\n"
"    padding: 4px 8px;        /* Keeps the text away from the borders */\n"
"     /* Keeps the background white */\n"
"}\n"
"\n"
"/* Optional: Change border color when clicked/focused */\n"
"QLineEdit:focus {\n"
"    border: 2px solid #0078d4; \n"
"}"));
        loginButton = new QPushButton(groupBox);
        loginButton->setObjectName("loginButton");
        loginButton->setGeometry(QRect(290, 320, 141, 41));
        loginButton->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    border: 2px solid #888888;\n"
"	\n"
"\n"
"\n"
"	background-color: qlineargradient(spread:pad, x1:0, y3:0, x2:1, y2:1, stop:0 rgba(0, 0, 0, 255), stop:1 rgba(255, 255, 255, 255));\n"
"    border-radius: 16px; /* Controls the corner roundness */\n"
"    padding: 5px 15px;  /* Adds space around the text */\n"
"}\n"
""));
        label = new QLabel(groupBox);
        label->setObjectName("label");
        label->setGeometry(QRect(300, 120, 111, 91));
        QFont font;
        font.setPointSize(48);
        label->setFont(font);
        label->setStyleSheet(QString::fromUtf8(""));
        label->setTextFormat(Qt::TextFormat::PlainText);
        label->setScaledContents(false);
        label_2 = new QLabel(groupBox);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(120, 50, 461, 51));
        label_2->setWordWrap(false);
        tutorialButton = new QPushButton(groupBox);
        tutorialButton->setObjectName("tutorialButton");
        tutorialButton->setGeometry(QRect(610, 420, 90, 81));
        tutorialButton->setStyleSheet(QString::fromUtf8("alternate-background-color: qlineargradient(spread:pad, x1:0.393365, y1:0.545, x2:1, y2:1, stop:0.848341 rgba(47, 0, 255, 255), stop:1 rgba(3, 3, 3, 255));"));
        exitButton = new QPushButton(groupBox);
        exitButton->setObjectName("exitButton");
        exitButton->setGeometry(QRect(10, 420, 81, 81));
        exitButton->setStyleSheet(QString::fromUtf8("QLineEdit {\n"
"    border: 2px solid #a0a0a0;\n"
"    border-radius: 14px;      /* Controls the corner roundness */\n"
"    padding: 4px 8px;        /* Keeps the text away from the borders */\n"
"     /* Keeps the background white */\n"
"}\n"
"\n"
"/* Optional: Change border color when clicked/focused */\n"
"QLineEdit:focus {\n"
"    border: 2px solid #0078d4; \n"
"}"));
        QIcon icon(QIcon::fromTheme(QString::fromUtf8("application-exit")));
        exitButton->setIcon(icon);

        gridLayout->addWidget(groupBox, 4, 0, 1, 1);


        retranslateUi(login);

        QMetaObject::connectSlotsByName(login);
    } // setupUi

    void retranslateUi(QDialog *login)
    {
        login->setWindowTitle(QCoreApplication::translate("login", "Inventory system", nullptr));
        groupBox->setTitle(QCoreApplication::translate("login", "Backpack ", nullptr));
        usernameEdit->setPlaceholderText(QCoreApplication::translate("login", "Enter username \342\230\272\357\270\217", nullptr));
        passwordEdit->setPlaceholderText(QCoreApplication::translate("login", "Enter  password \360\237\224\221", nullptr));
        loginButton->setText(QCoreApplication::translate("login", "Sign in", nullptr));
        label->setText(QCoreApplication::translate("login", "\360\237\222\274", nullptr));
        label_2->setText(QCoreApplication::translate("login", "<html><head/><body><p align=\"center\"><span style=\" font-size:16pt; font-weight:700;\">Inventory management system</span></p></body></html>", nullptr));
        tutorialButton->setText(QCoreApplication::translate("login", "INFO", nullptr));
        exitButton->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class login: public Ui_login {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LOGIN_H
