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


//return the quantity of the bought product
int AddToCart::getQuantity()
{
    return quantity;
}


//if user clicked on confirm button
void AddToCart::on_confrimbutton_clicked()
{
    //checking for invalid inputs
    if(ui->quantityspinbox->value() <= 0){
        QMessageBox error;
        error.setText("Invalid Value");
        error.show();
        error.exec();
        return;
    }

    //buying done
    quantity = ui->quantityspinbox->value();
    this->close();
}
