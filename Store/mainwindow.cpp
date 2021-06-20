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
    
    //    if(this->musicPlay)
    //    {
    //        QMediaPlaylist * playlist = new QMediaPlaylist();
    //        playlist->addMedia(QUrl("qrc:/music/MJ AIR TIME - Andy Quin   Up Market (Music From NBA Films).mp3"));
    //        playlist->setPlaybackMode(QMediaPlaylist::Loop);
    //        music.setPlaylist(playlist);
    //        music.play();
    //    }

    // load existing items if available

    loadItems();

    
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_addnewitembutton_clicked()
{
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
    if(this->user == "")
        return;
    QFile file (this->user + ".txt");
    file.open(QIODevice::ReadOnly | QIODevice::Text);

    //QTextStream in(&file);

    QString line;
    QStringList temp;

    bool gp = false;
    int c = 0;

    while(!file.atEnd())
    {
        line = file.readLine();
        c++;
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

        if(gp == false && c>2)
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
        list.removeAt(index);
        
        delete ui->productlist->currentItem();
    }
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

    if(list[index]->getQuantity() <= 0)
    {
        Item* theItem = list.at(index);
        delete theItem;
        list.removeAt(index);

        delete ui->productlist->currentItem();
    }
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

//void MainWindow::playMusic()
//{
//    music.play();
//}

//void MainWindow::on_musicbutton_clicked()
//{
//    if(this->musicPlay)
//    {
//        this->musicPlay = false;
//        music.pause();
//    }
//    else
//    {
//        this->musicPlay = true;
//        playMusic();
//    }
//}

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
    bool validName = false;
    for(int i=0 ; i<this->list.size() ; i++)
    {
        if(newGroup.newGroupName() == this->list[i]->getType())
        {
            ui->grouplist->addItem(newGroup.newGroupName());
            validName = true;
            break;
        }
    }
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
    
    QVector<QString> groupsName;
    for(int i=0 ; i<ui->grouplist->count() ; i++)
    {
        groupsName.push_back(ui->grouplist->item(i)->text());
    }
    
    SearchGroups groupsearchPage(groupsName);
    groupsearchPage.setModal(true);
    groupsearchPage.exec();
}

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
    
    QFile data (this->user + ".txt");
    
    if(data.exists())
    {
        data.open(QIODevice::ReadOnly | QIODevice::Text);
        
        QTextStream in(&data);
        
        QString line;
        QStringList userName;
        QStringList passWord;
        
        for(int i=0 ; i<2 ; ++i)
        {
            if(i==0)
            {
                line = in.readLine();
                userName = line.split(':');
            }
            if(i==1)
            {
                line = in.readLine();
                passWord = line.split(':');
            }
        }
        
        data.close();
        
        data.open(QIODevice::WriteOnly | QIODevice::Text);
        QTextStream out(&data);
        
        for(int i=0 ; i<this->list.size() + 2 + ui->grouplist->count() ; i++)
        {
            if(i==0)
            {
                out << "username:" << userName.at(1) << '\n';
            }
            else if(i==1)
            {
                out << "password:" << passWord.at(1) << '\n';
            }
            
            else if(i<this->list.size()+2)
            {
                if(i == this->list.size() + 1 && ui->grouplist->count() == 0)
                {
                    out << this->list[i-2]->getName() << ','
                                                      << this->list[i-2]->getType() << ','
                                                      << this->list[i-2]->getProductionCompany() << ','
                                                      << this->list[i-2]->getPrice() << ','
                                                      << this->list[i-2]->getPrice();
                }
                else
                {
                    out << this->list[i-2]->getName() << ','
                                                      << this->list[i-2]->getType() << ','
                                                      << this->list[i-2]->getProductionCompany() << ','
                                                      << this->list[i-2]->getPrice() << ','
                                                      << this->list[i-2]->getPrice() << '\n';
                }
            }
            else
            {
                if(i == this->list.size()+2)
                    out << "G:" << '\n';
                if(i == this->list.size()+1+ui->grouplist->count())
                    out << ui->grouplist->item(i-( this->list.size() + 2))->text();
                else
                    out << ui->grouplist->item(i-( this->list.size() + 2))->text() << ',';
            }
        }

        QMessageBox saveDone;
        saveDone.setText("Saved!!");
        saveDone.show();
        saveDone.exec();

        data.close();
    }
}
