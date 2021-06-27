#include "customer.h"
#include "ui_customer.h"

Customer::Customer(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::Customer)
{
    ui->setupUi(this);

    //run login page at the start of program

    if(StartOfProgram)
    {
        runLoginPage();
    }

    //load items at start of program
    loaditems();

    //make group list non selectable
    for(int i=0 ; i<ui->grouplist->count() ; ++i)
    {
        ui->grouplist->item(i)->setFlags( ui->grouplist->item(i)->flags() & ~Qt::ItemIsSelectable);
    }


    //filling quantity and price label
    connect(ui->productlist , &QListWidget::itemClicked , this , &Customer::handleItemClicked);
}

Customer::~Customer()
{
    delete ui;
}



//filling quantity and price label
void Customer::handleItemClicked(QListWidgetItem *productlist)
{
    int index =  productlist->listWidget()->currentRow();

    if(index != -1)
    {
        ui->price->setText(QString::number(list[index]->getPrice()));
        ui->quantity->setText(QString::number(list[index]->getQuantity()));
    }
}

//saving items after each buy
void Customer::SaveItems()
{
    QFile data ("data.txt");

    data.open(QIODevice::WriteOnly | QIODevice::Text);
    QTextStream out(&data);

    for(int i=0 ; i<this->list.size()+ ui->grouplist->count() + 1 ; i++)
    {

        if(i<this->list.size())
        {
            if(i == this->list.size() - 1 && ui->grouplist->count() == 0)
            {
                out << this->list[i]->getName() << ','
                                                  << this->list[i]->getType() << ','
                                                  << this->list[i]->getProductionCompany() << ','
                                                  << this->list[i]->getPrice() << ','
                                                  << this->list[i]->getPrice();
            }
            else
            {
                out << this->list[i]->getName() << ','
                                                  << this->list[i]->getType() << ','
                                                  << this->list[i]->getProductionCompany() << ','
                                                  << this->list[i]->getPrice() << ','
                                                  << this->list[i]->getPrice() << '\n';
            }
        }
        else
        {
            if(i == this->list.size()){
                out << "G:" << '\n';
                continue;
            }
            if(i == this->list.size()+ui->grouplist->count())
                out << ui->grouplist->item(i-( this->list.size()) - 1)->text();
            else
                out << ui->grouplist->item(i-( this->list.size()) - 1)->text() << ',';
        }
    }

    data.close();
}


//load the items to the list
void Customer::loaditems()
{
    if(user == "")
    {
        QMessageBox error;
        error.setText("You Have To Login To Use The Program, Close & Login.");
        error.show();
        error.exec();
        return;
    }
    QFile file ("data.txt");
    if(file.exists() == false)
    {
        QMessageBox error;
        error.setText("Store Has No Items.");
        error.show();
        error.exec();
        return;
    }
    else
    {
        QFile data ("data.txt");
        data.open(QIODevice::ReadOnly | QIODevice::Text);
        QString line;
        QStringList temp;

        bool gp = false;

        while(!data.atEnd())
        {
            line = data.readLine();
            if(gp == true)
            {
                temp = line.split(',');
                for(int i=0 ; i<temp.size() ; i++)
                {
                    ui->grouplist->addItem(temp[i]);
                }
            }

            if(line == "G:\n")
                gp = true;

            if(gp == false)
            {
                temp = line.split(',');
                Item * newItem = new Item;
                newItem->setName(temp[0]);
                newItem->setType(temp[1]);
                newItem->setProductionCompany(temp[2]);
                newItem->setPrice(temp[3].toDouble());
                newItem->setQuantity(temp[4].toInt());
                this->list.push_back(newItem);
                ui->productlist->addItem(temp[0]);
            }

        }

        data.close();
    }
}


//checking the group list by buying an item
void Customer::checkgrouplist()
{
    bool exist = false;
    for(int i=0 ; i<ui->grouplist->count() ; i++)
    {
        for(int j=0 ; j<this->list.size(); j++)
        {
            if(ui->grouplist->item(i)->text() == list[j]->getType())
            {
                exist = true;
                break;
            }
            else
                continue;
        }
        if(exist)
        {
            exist = false;
            continue;
        }
        else
        {
            delete ui->grouplist->item(i);
        }
    }
}




//running login page at the start of program

void Customer::runLoginPage()
{
    StartOfProgram = false;
    CustomerLogin loginPage;
    loginPage.setModal(true);
    loginPage.exec();
    user = loginPage.username();
}


//buying an item
void Customer::on_buybutton_clicked()
{
    //check if we have any item

    if(list.size() <= 0)
    {
        QMessageBox error;
        error.setText("Your Store Has No Products!!!");
        error.show();
        error.exec();
        return;
    }

    //check if an item is selected
    if(ui->productlist->selectedItems().count() == 0)
    {
        QMessageBox error;
        error.setText("Please Select An Item.");
        error.show();
        error.exec();
        return;
    }

    int index = ui->productlist->currentRow();

    AddToCart buyPage;
    buyPage.setModal(true);
    buyPage.exec();

    int boughtQuantity = buyPage.getQuantity();

    QMessageBox BoughtSuccess;
    BoughtSuccess.setText("You Have Successfully Bought " + QString::number(boughtQuantity) + " of " + list[index]->getName() + " with\n total price of "
                          + QString::number(boughtQuantity*ui->price->text().toInt())+'.');
    BoughtSuccess.show();
    BoughtSuccess.exec();

    list[index]->setQuantity(list[index]->getQuantity()-boughtQuantity);
    if(list[index]->getQuantity() <= 0 ){
        //removing from vector
        Item* theItem = list.at(index);
        delete theItem;
        list.removeAt(index);
        //removing from list
        delete ui->productlist->currentItem();
    }
    checkgrouplist();
    SaveItems();
}
