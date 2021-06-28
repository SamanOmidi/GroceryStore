#include "sellitem.h"
#include "ui_sellitem.h"

SellItem::SellItem(QVector<Item*>& items , int index, QWidget *parent) :
    QDialog(parent),
    ui(new Ui::SellItem)
{
    ui->setupUi(this);
    //getting the vector reference and index of the item user want to sell
    this->list = items;
    this->index = index;
    //filling the labels with correct names
    setNames();
}

SellItem::~SellItem()
{
    delete ui;
}

//filling the labels with correct names
void SellItem::setNames()
{
    ui->namelabel->setText(this->list[this->index]->getName());
    ui->quantitylabel->setText(QString::number(this->list[this->index]->getQuantity()));
    ui->pricelabel->setText(QString::number(this->list[this->index]->getPrice()));
}

//selling an item
void SellItem::on_sellbutton_clicked()
{
    //checking if user is entering valid inputs like no negetive number , no 0 , more than the quantity of the product
    if(ui->numberofsellspinbox->value()>0 && ui->numberofsellspinbox->value() <= this->list[this->index]->getQuantity())
    {
        //changing the quantity of the product to the new one
        this->list[this->index]->setQuantity(this->list[this->index]->getQuantity()-ui->numberofsellspinbox->value());

        //successfull message to warn the user that the item has been sold
        QMessageBox sellDone;
        sellDone.setText("You Have Successfully Sold " + QString::number(ui->numberofsellspinbox->value())
                         + " Of " + this->list[this->index]->getName());
        sellDone.show();
        sellDone.exec();
        this->close();
    }
    //invalid inputs from user
    else
    {
        QMessageBox error;
        error.setText("Invalid Inputs.");
        error.show();
        error.exec();
        return;
    }
}

//closing the program if user click on close button
void SellItem::on_cancelbutton_clicked()
{
    this->close();
}
