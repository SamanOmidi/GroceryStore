#include "displaygroupproducts.h"
#include "ui_displaygroupproducts.h"

DisplayGroupProducts::DisplayGroupProducts(QVector<Item*> & items , QString groupType , QWidget *parent) :
    QDialog(parent),
    ui(new Ui::DisplayGroupProducts)
{
    ui->setupUi(this);
    printNames(items , groupType);
}

void DisplayGroupProducts::printNames(QVector<Item *> &items , QString groupType)
{
    for(int i=0 ; i<items.size() ; i++)
    {
        if(items[i]->getType() == groupType)
        {
            ui->productsnameText->append(items[i]->getName() + '\n');
        }
    }
}

DisplayGroupProducts::~DisplayGroupProducts()
{
    delete ui;
}

void DisplayGroupProducts::on_exitbutton_clicked()
{
    this->close();
}
