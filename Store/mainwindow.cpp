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
        playlist->addMedia(QUrl("qrc:/music/Tsuki sayu Yoru – Fu rin Ka zan Original.mp3"));
        playlist->setPlaybackMode(QMediaPlaylist::Loop);
        this->music = new QMediaPlayer();
        music->setPlaylist(playlist);
        music->play();
    }

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
    if(newItem != nullptr){
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
            delete ui->grouplist->itemAt(i,0);
        }
    }
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

    //sell selected item

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

void MainWindow::playMusic()
{
    this->music->play();
}

void MainWindow::on_musicbutton_clicked()
{
    if(this->musicPlay)
    {
        this->musicPlay = false;
        this->music->stop();
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
    for(int i=0 ; i<this->list.size() ; i++)
    {
        if(newGroup.newGroupName() == this->list[i]->getType())
        {
            ui->grouplist->addItem(newGroup.newGroupName());
            break;
        }
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

        QTextStream out(&data);

        QString line;

//            for(int i=0 ; i<this->list.size()+2 ; i++)
//            {
//                if(i<2)
//                {
//                    out.readLine();
//                }
//                else
//                {
//                    out << list[i-2]->getName() << ','
//                        << list[i-2]->getType() << ','
//                        << list[i-2]->getProductionCompany() << ','
//                        << list[i-2]->getPrice() << ','
//                        << list[i-2]->getQuantity();
//                }
//            }

    }
    data.close();
}
