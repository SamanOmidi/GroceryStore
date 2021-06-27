#include "addtocart.h"
#include "ui_addtocart.h"

AddToCart::AddToCart(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::AddToCart)
{
    ui->setupUi(this);
}

AddToCart::~AddToCart()
{
    delete ui;
}


int AddToCart::getQuantity()
{
    return quantity;
}

void AddToCart::on_confrimbutton_clicked()
{
    if(ui->quantityspinbox->value() <= 0){
        QMessageBox error;
        error.setText("Invalid Value");
        error.show();
        error.exec();
        return;
    }
    quantity = ui->quantityspinbox->value();
    this->close();
}
