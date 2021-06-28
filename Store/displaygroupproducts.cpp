#include "displaygroupproducts.h"
#include "ui_displaygroupproducts.h"

DisplayGroupProducts::DisplayGroupProducts(QVector<Item*> & items , QString groupType , QWidget *parent) :
    QDialog(parent),
    ui(new Ui::DisplayGroupProducts)
{
    ui->setupUi(this);

    //getting the reference of vector of items and grouplist names
    printNames(items , groupType);
}

DisplayGroupProducts::~DisplayGroupProducts()
{
    delete ui;
}


//appending each item that has similar type/category name to grouplist names
void DisplayGroupProducts::printNames(QVector<Item *> &items , QString groupType)
{
    int count = 1;
    for(int i=0 ; i<items.size() ; i++)
    {
        if(items[i]->getType() == groupType)
        {
            ui->productsnameText->append(QString::number(count) + ". " + items[i]->getName() + '\n');
            count++;
        }
    }
}


//close the dialog if user clicked on exit button
void DisplayGroupProducts::on_exitbutton_clicked()
{
    this->close();
}
