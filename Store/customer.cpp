#include "customer.h"
#include "ui_customer.h"

Customer::Customer(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::Customer)
{
    ui->setupUi(this);

    //run login page at the start of program

    if(StartOfProgram)
    {
        runLoginPage();
    }
}

Customer::~Customer()
{
    delete ui;
}


//running login page at the start of program

void Customer::runLoginPage()
{
    StartOfProgram = false;
    CustomerLogin loginPage;
    loginPage.setModal(true);
    loginPage.exec();


}
