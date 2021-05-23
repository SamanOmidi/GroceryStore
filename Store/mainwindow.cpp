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
}




