#include "login.h"
#include "ui_login.h"
#include "mainwindow.h"
#include <QMessageBox>

login::login(QDialog *parent)
    : QDialog(parent),
    ui(new Ui::login)
{
    ui->setupUi(this);
}

login::~login()
{
    delete ui;
}

void login::on_loginButton_clicked()
{
    QString user = ui->usernameEdit->text();
    QString pass = ui->passwordEdit->text();

    if (user == "admin" && pass == "1234")
    {
        MainWindow *inventory = new MainWindow();

        inventory->setUsername(user);

        inventory->show();
        this->hide();
    }
    else
    {
        QMessageBox::warning(this, "Login Failed", "Wrong username or password");
    }
}




