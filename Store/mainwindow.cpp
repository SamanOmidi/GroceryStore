#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    //run login page at the start of program

    if(StartOfProgram)
        runLoginPage();

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

//removing selected item on the list

void MainWindow::on_removeitembutton_clicked()
{
    int index = ui->productlist->currentRow();
    if(index >= 0)
    {
        Item* theItem = list.at(index);
        delete theItem;
        list.removeAt(index);

        delete ui->productlist->currentItem();
    }
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
    DisplayItems display;
    display.Display_items(list);
    display.show();
    display.exec();
}

//sell an item to a customer

void MainWindow::on_sellbutton_clicked()
{
    int index = ui->productlist->currentRow();
    SellItem sellpage(list,index);
    sellpage.show();
    sellpage.exec();
}

//edit an item

void MainWindow::on_edititembutton_clicked()
{
    int index = ui->productlist->currentRow();
    EditItem editPage(list,index);
    editPage.show();
    editPage.exec();
}

//search among items

void MainWindow::on_searchitemsbutton_clicked()
{
    SearchItem searchPage(list);
    searchPage.show();
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
