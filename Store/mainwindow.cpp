#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    if(StartOfProgram)
        runLoginPage();

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
    SellItem sellPage;
    sellPage.sellItem(list,index);
    sellPage.show();
    sellPage.exec();
}








