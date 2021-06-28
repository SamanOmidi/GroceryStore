#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    //run login page at the start of program
    
    if(StartOfProgram)
    {
        runLoginPage();
    }
    
    //start music at the start of program
    
    if(this->musicPlay)
    {
        QMediaPlaylist * playlist = new QMediaPlaylist();
        playlist->addMedia(QUrl("qrc:/music/Akira.Senju-Tsuki.sayu.Yoru-Fu.rin.Ka.zan-(FuLLKade.COM).mp3"));
        playlist->setPlaybackMode(QMediaPlaylist::Loop);
        music.setPlaylist(playlist);
        music.play();
    }

    // load existing items if available

    loadItems();

    
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_addnewitembutton_clicked()
{
    //making a new item * and send it to additem page
    //then pushing back that item *
    Item * newItem = nullptr;
    AddItem AddItem(newItem , nullptr);
    AddItem.setModal(true);
    AddItem.exec();
    if(newItem != nullptr)
    {
        list.push_back(newItem);
        ui->productlist->addItem(newItem->getName());
    }
}

//checking group list
void MainWindow::checkGrouplist()
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

void MainWindow::loadItems()
{
    //if user didn't login, it won't load the products
    if(this->user == "")
        return;

    //opening data.txt and reading products and group names, then load them into the program
    QFile file ("data.txt");
    file.open(QIODevice::ReadOnly | QIODevice::Text);

    QString line;
    QStringList temp;

    bool gp = false;

    while(!file.atEnd())
    {
        line = file.readLine();
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

    file.close();
}


//removing selected item on the list
void MainWindow::on_removeitembutton_clicked()
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
    
    //remove selected item
    int index = ui->productlist->currentRow();
    if(index >= 0)
    {
        Item* theItem = list.at(index);
        delete theItem;
        //removing from vector
        list.removeAt(index);
        
        //removing from product list
        delete ui->productlist->currentItem();
    }

    //checking if we need to change groups
    checkGrouplist();
}


//running login page at the start of program
void MainWindow::runLoginPage()
{
    StartOfProgram = false;
    loginpage login;
    login.setModal(true);
    login.exec();
    this->user = login.username();
}

//display all items infos
void MainWindow::on_displaybutton_clicked()
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
    

    DisplayItems display;
    display.Display_items(list);
    display.setModal(true);
    display.exec();
}


//sell an item to a customer
void MainWindow::on_sellbutton_clicked()
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
    SellItem sellpage(list,index);
    sellpage.setModal(true);
    sellpage.exec();

    //removing the item if customer bought all of it
    //like remove function
    if(list[index]->getQuantity() <= 0)
    {
        Item* theItem = list.at(index);
        delete theItem;
        //removing from vector
        list.removeAt(index);

        //removing from product list
        delete ui->productlist->currentItem();
    }
    //checking if we need to change groups
    checkGrouplist();
}


//edit an item
void MainWindow::on_edititembutton_clicked()
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
    EditItem editPage(list,index);
    editPage.setModal(true);
    editPage.exec();
    if(ui->productlist->currentItem()->text() != this->list[index]->getName())
    {
        ui->productlist->currentItem()->setText(this->list[index]->getName());
    }

    //checking if we need to change groups
    checkGrouplist();
}

//search among items
void MainWindow::on_searchitemsbutton_clicked()
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
    
    SearchItem searchPage(list);
    searchPage.setModal(true);
    searchPage.exec();
}


// music of program
void MainWindow::playMusic()
{
    music.play();
}


//stop the music if user clicked on music button
void MainWindow::on_musicbutton_clicked()
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


//add the name of the group to the list in the main program.
void MainWindow::on_addnewgroupbutton_clicked()
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
    

    AddNewGroup newGroup(list);
    newGroup.setModal(true);
    newGroup.exec();

    //for checking if user input exists in products category/type names
    bool validName = false;


    //saving group names to a vector of strings
    QVector<QString> groupnames;
    for(int i=0 ; i<ui->grouplist->count() ; ++i)
    {
        groupnames.push_back(ui->grouplist->item(i)->text());
    }

    //checking the grouplist for not similar group names
    for(int i=0 ; i<ui->grouplist->count() ; ++i)
    {
        if(newGroup.newGroupName() == groupnames[i])
            return;
    }

    //checking for valid name
    for(int i=0 ; i<this->list.size() ; i++)
    {
        if(newGroup.newGroupName() == this->list[i]->getType())
        {
            ui->grouplist->addItem(newGroup.newGroupName());
            validName = true;
            break;
        }
    }
    //warn the user that has inputed invalid names
    if(validName == false && newGroup.newGroupName() != "")
    {
        QMessageBox error;
        error.setText("Name You Have Chosen Do Not Exist.");
        error.show();
        error.exec();
        return;
    }
}


//display products of a group.
void MainWindow::on_displaygroupitemsbutton_clicked()
{
    //check if we have any groups
    if(ui->grouplist->count() <= 0)
    {
        QMessageBox error;
        error.setText("Your Store Has No Groups!!!");
        error.show();
        error.exec();
        return;
    }
    
    //check if a group is selected
    if(ui->grouplist->selectedItems().count() == 0)
    {
        QMessageBox error;
        error.setText("Please Select A Group.");
        error.show();
        error.exec();
        return;
    }
    

    QString groupName = ui->grouplist->currentItem()->text();
    DisplayGroupProducts displayPage(this->list,groupName);
    displayPage.setModal(true);
    displayPage.exec();
    
}

void MainWindow::on_searchgroupsbutton_clicked()
{

    //check if we have any groups
    if(ui->grouplist->count() <= 0)
    {
        QMessageBox error;
        error.setText("Your Store Has No Groups!!!");
        error.show();
        error.exec();
        return;
    }
    
    //saving grouplist names in a vector and sending that vector to groupsearchPage
    QVector<QString> groupsName;
    for(int i=0 ; i<ui->grouplist->count() ; i++)
    {
        groupsName.push_back(ui->grouplist->item(i)->text());
    }
    
    SearchGroups groupsearchPage(groupsName);
    groupsearchPage.setModal(true);
    groupsearchPage.exec();
}

//saving store products and groups
void MainWindow::on_savebutton_clicked()
{

    //check if user has loged in
    if(this->user == "")
    {
        QMessageBox error;
        error.setText("You Can't Save Because You Haven't Loged In!!!");
        error.show();
        error.exec();
        return;
    }

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

    QMessageBox saveDone;
    saveDone.setText("Saved!!");
    saveDone.show();
    saveDone.exec();

    data.close();

}

