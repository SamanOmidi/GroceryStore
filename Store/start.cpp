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

QString Start::UserIdentity()
{
    return identity;
}

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
