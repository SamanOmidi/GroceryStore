#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

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
    list.push_back(newItem);
    ui->productlist->addItem(newItem->getName());
}



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


