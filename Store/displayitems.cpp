#include "displayitems.h"
#include "ui_displayitems.h"

DisplayItems::DisplayItems(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::DisplayItems)
{
    ui->setupUi(this);
}

DisplayItems::~DisplayItems()
{
    delete ui;
}
void DisplayItems::Display_items(QVector<Item *> &itemsVector)
{
    for(int i=0 ; i<itemsVector.size() ; i++)
    {
        ui->itemsText->append(QString::number(i+1) + ". " + "Name = " + itemsVector[i]->getName() + '\n'
                              +"    " + "Type = " + itemsVector[i]->getType() + '\n'
                              +"    " + "Production Company = " + itemsVector[i]->getProductionCompany() + '\n'
                              +"    " + "Price = " + QString::number(itemsVector[i]->getPrice()) + '\n'
                              +"    " + "Quantity = " + QString::number(itemsVector[i]->getQuantity()) + '\n');
    }
}

void DisplayItems::on_closebutton_clicked()
{
    this->close();
}
