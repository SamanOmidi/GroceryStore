#include "start.h"
#include "ui_start.h"

Start::Start(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Start)
{
    ui->setupUi(this);
}

Start::~Start()
{
    delete ui;
}

//return admin if user chose admin , customer if user chose customer
QString Start::UserIdentity()
{
    return identity;
}

//check the user wants to enter as admin or customer
void Start::on_enterbutton_clicked()
{
    if(ui->adminradiobutton->isChecked() == true)
    {
        this->identity = "admin";
    }
    else {
        this->identity = "customer";
    }
    this->close();
}
