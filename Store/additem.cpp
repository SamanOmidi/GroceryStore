#include "additem.h"
#include "ui_additem.h"


AddItem::AddItem(Item* &newItem,QWidget *parent) :
    QDialog(parent),
    ui(new Ui::AddItem)
{
    ui->setupUi(this);
    this->newItem = &newItem;
}

AddItem::~AddItem()
{
    delete ui;
}

void AddItem::on_confirmbutton_clicked()
{
    QString name = ui->NameLine->text();

    QString type = ui->TypeLine->text();

    QString companyName = ui->CompanyLine->text();

    QString price_s = ui->PriceLine->text();
    double price = price_s.toDouble();

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

    if(quantity <= 0)
    {
        QMessageBox error;
        error.setText("Invalid Inputs");
        error.show();
        error.exec();
        return;
    }

    if(name == "" || type == "" || companyName == ""
            || price_s == "" || quantity_s == "")
    {
        QMessageBox error ;
        error.setText("Invalid Inputs!");
        error.exec();
        return;
    }

    else{
        *newItem = new Item (name,type,companyName,price,quantity);
        this->close();
    }
}
