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

//getting the reference of the vector of items
void DisplayItems::Display_items(QVector<Item *> &itemsVector)
{

    //appending each item to the text browser with all of its information
    for(int i=0 ; i<itemsVector.size() ; i++)
    {
        ui->itemsText->append(QString::number(i+1) + ". " + "Name = " + itemsVector[i]->getName() + '\n'
                              +"    " + "Type = " + itemsVector[i]->getType() + '\n'
                              +"    " + "Production Company = " + itemsVector[i]->getProductionCompany() + '\n'
                              +"    " + "Price = " + QString::number(itemsVector[i]->getPrice()) + '\n'
                              +"    " + "Quantity = " + QString::number(itemsVector[i]->getQuantity()) + '\n');
    }
}


//close the dialog if user clicked on close button
void DisplayItems::on_closebutton_clicked()
{
    this->close();
}
