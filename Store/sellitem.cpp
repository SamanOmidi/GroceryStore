#include "sellitem.h"
#include "ui_sellitem.h"

SellItem::SellItem(QVector<Item*>& items , int index, QWidget *parent) :
    QDialog(parent),
    ui(new Ui::SellItem)
{
    ui->setupUi(this);
    this->list = items;
    this->index = index;
    setNames();
}

SellItem::~SellItem()
{
    delete ui;
}


void SellItem::setNames()
{
    ui->namelabel->setText(this->list[this->index]->getName());
    ui->quantitylabel->setText(QString::number(this->list[this->index]->getQuantity()));
    ui->pricelabel->setText(QString::number(this->list[this->index]->getPrice()));
}

void SellItem::on_sellbutton_clicked()
{

    if(ui->numberofsellspinbox->value()>0 && ui->numberofsellspinbox->value() < this->list[this->index]->getQuantity())
    {
        this->list[this->index]->setQuantity(this->list[this->index]->getQuantity()-ui->numberofsellspinbox->value());
        QMessageBox sellDone;
        sellDone.setText("You Have Successfully Sold " + QString::number(this->list[this->index]->getQuantity())
                + " Of " + this->list[this->index]->getName());
        sellDone.show();
        sellDone.exec();
        this->close();
    }
    else
    {
        QMessageBox error;
        error.setText("Invalid Inputs.");
        error.show();
        error.exec();
    }
}

void SellItem::on_cancelbutton_clicked()
{
    this->close();
}
