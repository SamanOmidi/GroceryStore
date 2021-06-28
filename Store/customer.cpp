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


    //start music at the start of program
    if(this->musicPlay)
    {
        QMediaPlaylist * playlist = new QMediaPlaylist();
        playlist->addMedia(QUrl("qrc:/music/Akira.Senju-Tsuki.sayu.Yoru-Fu.rin.Ka.zan-(FuLLKade.COM).mp3"));
        playlist->setPlaybackMode(QMediaPlaylist::Loop);
        music.setPlaylist(playlist);
        music.play();
    }
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

    //for saving persian names
    out.setCodec("UTF-8");

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
                    << this->list[i]->getQuantity() << '\n';
            }
            else
            {
                out << this->list[i]->getName() << ','
                    << this->list[i]->getType() << ','
                    << this->list[i]->getProductionCompany() << ','
                    << this->list[i]->getPrice() << ','
                    << this->list[i]->getQuantity() << '\n';
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
    //if user has not loged in and closed the login page
    if(user == "")
    {
        QMessageBox error;
        error.setText("You Have To Login To Use The Program, Close & Login.");
        error.show();
        error.exec();
        return;
    }

    //warn the user that store has no products
    QFile file ("data.txt");
    if(file.exists() == false)
    {
        QMessageBox error;
        error.setText("Store Has No Items.");
        error.show();
        error.exec();
        return;
    }

    //loading items
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
//if there is no item with that category/type delete the group
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

    //saving the username of the user
    user = loginPage.username();
}

//play the stopped music
void Customer::playMusic()
{
    this->music.play();
}


//music of the program
void Customer::on_musicbutton_clicked()
{
    if(this->musicPlay)
    {
        this->musicPlay = false;
        music.pause();
    }
    else
    {
        this->musicPlay = true;
        playMusic();
    }
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

    //saving item index of the selected item
    int index = ui->productlist->currentRow();

    //running buying dialog
    AddToCart buyPage;
    buyPage.setModal(true);
    buyPage.exec();

    //saving bought quantity of the user for checking if its valid
    //and setting the new quantity of the selected item
    int boughtQuantity = buyPage.getQuantity();

    if(boughtQuantity > list[index]->getQuantity())
    {
        QMessageBox error;
        error.setText("Invalid Inputs!!!");
        error.show();
        error.exec();
        return;
    }

    //warn the user buying process has beed done successfully
    QMessageBox BoughtSuccess;
    BoughtSuccess.setText("You Have Successfully Bought " + QString::number(boughtQuantity) + " of " + list[index]->getName() + " with\n total price of "
                          + QString::number(boughtQuantity*ui->price->text().toInt())+'.');
    BoughtSuccess.show();
    BoughtSuccess.exec();

    //setting the new quantity
    //if the new quantity is < 0 we should remove it from vector and product list and also need to check group list
    list[index]->setQuantity(list[index]->getQuantity()-boughtQuantity);
    if(list[index]->getQuantity() <= 0 ){
        //removing from vector
        Item* theItem = list.at(index);
        delete theItem;
        list.removeAt(index);
        //removing from list
        delete ui->productlist->currentItem();
    }
    //checking the group list
    checkgrouplist();
    //saving new changes
    SaveItems();
}


