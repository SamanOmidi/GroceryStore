#include "edititem.h"
#include "ui_edititem.h"

EditItem::EditItem(QVector<Item*> & items , int index ,QWidget *parent) :
    QDialog(parent),
    ui(new Ui::EditItem)
{
    ui->setupUi(this);

    //getting the vector of items reference and the index of selected item
    this->list = items;
    this->index = index;

    //filing the item information to the labels
    setItemInfo();
}

EditItem::~EditItem()
{
    delete ui;
}


//filing the item information to the labels
void EditItem::setItemInfo()
{
    ui->nameline->setText(this->list[this->index]->getName());
    ui->typeline->setText(this->list[this->index]->getType());
    ui->companyline->setText(this->list[this->index]->getProductionCompany());
    ui->priceline->setText(QString::number(this->list[this->index]->getPrice()));
    ui->quantityline->setText(QString::number(this->list[this->index]->getQuantity()));
}


//if user clicked on the confirm button
void EditItem::on_confirmbutton_clicked()
{
    //warn the user if he/she has entered invalid inputs
    if(ui->priceline->text().toDouble() < 0 || ui->quantityline->text().toInt() <= 0){
        QMessageBox error;
        error.setText("Invalid Inputs.");
        error.show();
        error.exec();
        return;
    }

    //checking if the user has left one of the options empty
    if(ui->nameline->text() == "" ||
            ui->typeline->text() == "" ||
            ui->companyline->text() == "" ||
            ui->priceline->text() == "" ||
            ui->quantityline->text() == "")
    {
        QMessageBox error;
        error.setText("You Can't Leave Empty Lines!!!");
        error.show();
        error.exec();
        return;
    }


    //setting the new options of the item
    list[index]->setName(ui->nameline->text());
    list[index]->setType(ui->typeline->text());
    list[index]->setProductionCompany(ui->companyline->text());
    list[index]->setPrice(ui->priceline->text().toDouble());
    list[index]->setQuantity(ui->quantityline->text().toInt());

    //warn the user that new changes have been applied
    QMessageBox editDone;
    editDone.setText("Changes Have Applied Successfully.");
    editDone.show();
    editDone.exec();
    this->close();

}
