#include "edititem.h"
#include "ui_edititem.h"

EditItem::EditItem(QVector<Item*> & items , int index ,QWidget *parent) :
    QDialog(parent),
    ui(new Ui::EditItem)
{
    ui->setupUi(this);
    this->list = items;
    this->index = index;
    setItemInfo();
}

EditItem::~EditItem()
{
    delete ui;
}

void EditItem::setItemInfo()
{
    ui->nameline->setText(this->list[this->index]->getName());
    ui->typeline->setText(this->list[this->index]->getType());
    ui->companyline->setText(this->list[this->index]->getProductionCompany());
    ui->priceline->setText(QString::number(this->list[this->index]->getPrice()));
    ui->quantityline->setText(QString::number(this->list[this->index]->getQuantity()));
}

void EditItem::on_confirmbutton_clicked()
{
    if(ui->priceline->text().toDouble() < 0 || ui->quantityline->text().toInt() <= 0){
        QMessageBox error;
        error.setText("Invalid Inputs.");
        error.show();
        error.exec();
        return;
    }

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

    list[index]->setName(ui->nameline->text());
    list[index]->setType(ui->typeline->text());
    list[index]->setProductionCompany(ui->companyline->text());
    list[index]->setPrice(ui->priceline->text().toDouble());
    list[index]->setQuantity(ui->quantityline->text().toInt());
    QMessageBox error;
    error.setText("Changes Have Applied Successfully.");
    error.show();
    error.exec();
    this->close();

}
