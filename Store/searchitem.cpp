#include "searchitem.h"
#include "ui_searchitem.h"

SearchItem::SearchItem(QVector<Item*> & items,QWidget *parent) :
    QDialog(parent),
    ui(new Ui::SearchItem)
{
    ui->setupUi(this);

    //getting the reference of the vector
    this->list = items;
}

SearchItem::~SearchItem()
{
    delete ui;
}

void SearchItem::on_findbutton_clicked()
{
    /*
     * پروسه کلی به این صورت است که یوسر باید یکی از دکمه های (نام،نوع،نام شرکت سازنده،قیمت،تعداد)
     * را کلیک کرده و سپس میتواند تمام محصولات را سرچ کند
     * the whole process is based on clicking one of radio buttons (name,type/category,production company,price,quantity)
     * and then searchin among items
     */

    //process of searching is ->
    //1. a "for" loop for all the items(based on size of items)
    //2. a "for" loop for the user input(based on the letters)
    //3. getting the name or .. item and matching each letter to user input
    // if it matches we boolean will be true else it will be false
    // if it was true we append that item to the text browser.


    //searching based on name
    if(ui->nameradiobutton->isChecked() == true)
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
                    if(j >= list[i]->getName().size())
                    {
                        exist = false;
                        break;
                    }

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

    //searching based on type/category
    if(ui->typeradiobutton->isChecked() == true)
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
                    if(j >= list[i]->getType().size())
                    {
                        exist = false;
                        break;
                    }

                    if(this->list[i]->getType().at(j) != userInput.at(j))
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

    //searching based on production company name
    if(ui->companyradiobutton->isChecked() == true)
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
                    if(j >= list[i]->getProductionCompany().size())
                    {
                        exist = false;
                        break;
                    }

                    if(this->list[i]->getProductionCompany().at(j) != userInput.at(j))
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

    //searching based on price
    if(ui->priceradiobutton->isChecked() == true)
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
                    if(j >= QString::number(list[i]->getPrice()).size())
                    {
                        exist = false;
                        break;
                    }

                    if(QString::number(this->list[i]->getPrice()).at(j) != userInput.at(j))
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

    //searching based on quantity
    if(ui->quantityradiobutton->isChecked() == true)
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
                    if(j >= QString::number(list[i]->getQuantity()).size())
                    {
                        exist = false;
                        break;
                    }
                    if(QString::number(this->list[i]->getQuantity()).at(j) != userInput.at(j))
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
}


//close the dialog if user click in close button
void SearchItem::on_closebutton_clicked()
{
    this->close();
}
