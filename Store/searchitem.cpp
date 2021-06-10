#include "searchitem.h"
#include "ui_searchitem.h"

SearchItem::SearchItem(QVector<Item*> & items,QWidget *parent) :
    QDialog(parent),
    ui(new Ui::SearchItem)
{
    ui->setupUi(this);
    this->list = items;
}

SearchItem::~SearchItem()
{
    delete ui;
}

void SearchItem::on_findbutton_clicked()
{
    ui->searchText->clear();
    QString userInput;
    bool exist = true;
    int count = 1;
    while(true)
    {
        userInput = ui->searchline->text();
        if(userInput == "")
            return;
        for(int i=0 ; i<this->list.size() ; i++)
        {
            for(int j=0 ; j<userInput.size() ; j++)
            {
                if(this->list[i]->getName().at(j) != userInput.at(j))
                    exist = false;
                else
                    continue;
            }
            if(exist)
            {
                ui->searchText->append(QString::number(count) + ". " + "Name = " + this->list[i]->getName() + '\n'
                                       +"    " + "Type = " + this->list[i]->getType() + '\n'
                                       +"    " + "Production Company = " + this->list[i]->getProductionCompany() + '\n'
                                       +"    " + "Price = " + QString::number(this->list[i]->getPrice()) + '\n'
                                       +"    " + "Quantity = " + QString::number(this->list[i]->getQuantity()) + '\n');
                count ++;
            }
            else
                exist = true;
        }
        break;
    }
}

void SearchItem::on_closebutton_clicked()
{
    this->close();
}
