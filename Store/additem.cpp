#include "additem.h"
#include "ui_additem.h"


AddItem::AddItem(Item* &newItem,QWidget *parent) :
    QDialog(parent),
    ui(new Ui::AddItem)
{
    ui->setupUi(this);
    this->newItem = &newItem;
    //connect(ui->confirmbutton,&QPushButton::clicked,this,&AddItem::on_confirmbutton_clicked);
    //connect(ui->confirmbutton,SIGNAL(clicked()),this,SLOT(close()));
}

AddItem::~AddItem()
{
    delete ui;
}

void AddItem::on_confirmbutton_clicked()
{
    QString name = ui->nameline->text();
    QString type = ui->typeline->text();
    QString companyName = ui->companyline->text();
    QString price_s = ui->priceline->text();
    double price = price_s.toDouble();
    QString quantity_s = ui->quantityline->text();
    int quantity = quantity_s.toInt();
    if(name == "" || type == "" || companyName == ""
       || price_s == "" || quantity_s == "")
    {
        QMessageBox error ;
        error.setText("Invalid Inputs!");
        error.exec();

        this->close();

    }
    else{
        *newItem = new Item (name,type,companyName,price,quantity);
        this->close();
    }
}
