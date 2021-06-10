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
    QRegExp re("\\d*"); // // a digit (\d), zero or more times (*)
    if(ui->nameline->text()==""
            && ui->typeline->text()==""
            && ui->companyline->text()==""
            && ui->priceline->text()==""
            && ui->quantityline->text()=="")
    {
        QMessageBox error ;
        error.setText("Invalid Inputs!");
        error.exec();
        return;
    }
    else if(!(re.exactMatch(ui->priceline->text()) && re.exactMatch(ui->quantityline->text())))
    {
        QMessageBox error ;
        error.setText("Invalid Inputs!");
        error.exec();
        return;
    }

    else
    {

        if(!(ui->nameline->text()==""))
        {
            this->list[this->index]->setName(ui->nameline->text());
        }
        if(!(ui->typeline->text()==""))
        {
            this->list[this->index]->setType(ui->typeline->text());
        }
        if(!(ui->companyline->text()==""))
        {
            this->list[this->index]->setProductionCompany(ui->companyline->text());
        }
        if(!(ui->priceline->text()==""))
        {
            this->list[this->index]->setPrice(ui->priceline->text().toDouble());
        }
        if(!(ui->quantityline->text()==""))
        {
            this->list[this->index]->setQuantity(ui->quantityline->text().toInt());
        }
        QMessageBox editDone;
        editDone.setText("Your Changes Have Been Successfully Applied.");
        editDone.show();
        editDone.exec();
        this->close();
    }

}
