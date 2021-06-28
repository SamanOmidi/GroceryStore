#include "additem.h"
#include "ui_additem.h"


AddItem::AddItem(Item* &newItem,QWidget *parent) :
    QDialog(parent),
    ui(new Ui::AddItem)
{
    ui->setupUi(this);

    //getting the reference of item* which we made in mainwindow.cpp
    this->newItem = &newItem;
}

AddItem::~AddItem()
{
    delete ui;
}

//if user clicked on confirm button
void AddItem::on_confirmbutton_clicked()
{
    //setting name,type/category/company name/price quantity to local variables

    QString name = ui->NameLine->text();

    QString type = ui->TypeLine->text();

    QString companyName = ui->CompanyLine->text();

    QString price_s = ui->PriceLine->text();
    double price = price_s.toDouble();

    //checking for negative price
    if(price < 0)
    {
        QMessageBox error;
        error.setText("Invalid Inputs");
        error.show();
        error.exec();
        return;
    }


    QString quantity_s = ui->QuantityLine->text();
    int quantity = quantity_s.toInt();

    //checking for 0 or negative quantity
    if(quantity <= 0)
    {
        QMessageBox error;
        error.setText("Invalid Inputs");
        error.show();
        error.exec();
        return;
    }

    //checking if user not leave lines empty
    if(name == "" || type == "" || companyName == ""
            || price_s == "" || quantity_s == "")
    {
        QMessageBox error ;
        error.setText("Invalid Inputs!");
        error.exec();
        return;
    }

    //setting the item * reference we got, and calling constructor with local variables
    else{
        *newItem = new Item (name,type,companyName,price,quantity);
        this->close();
    }
}
