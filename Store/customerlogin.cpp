#include "customerlogin.h"
#include "ui_customerlogin.h"

CustomerLogin::CustomerLogin(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::CustomerLogin)
{
    ui->setupUi(this);
}

CustomerLogin::~CustomerLogin()
{
    delete ui;
}

QString CustomerLogin::username()
{
    return ui->usernameline->text();
}



void CustomerLogin::on_registerbutton_clicked()
{

}

void CustomerLogin::on_loginbutton_clicked()
{

}
