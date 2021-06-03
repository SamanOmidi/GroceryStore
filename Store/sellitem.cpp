#include "sellitem.h"
#include "ui_sellitem.h"

SellItem::SellItem(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::SellItem)
{
    ui->setupUi(this);
}

SellItem::~SellItem()
{
    delete ui;
}

void SellItem::sellItem(QVector<Item *> &items, int index)
{
    ui->namelabel->setText(items[index]->getName());
    ui->quantitylabel->setText(QString::number(items[index]->getQuantity()));
    ui->pricelabel->setText(QString::number(items[index]->getPrice()));

}
