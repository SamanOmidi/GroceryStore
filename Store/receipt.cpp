#include "receipt.h"
#include "ui_receipt.h"

static int count = 1;

Receipt::Receipt(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Receipt)
{
    ui->setupUi(this);
}

Receipt::~Receipt()
{
    delete ui;
}

//appending to textbrowser
void Receipt::addtextBrowser(QString temp)
{
    ui->textbrowser->append(QString::number(count) + '-' + temp);
    count++;
}

//sum of products
void Receipt::setpricelabel(double sum)
{
    ui->totalsumlabel->setText(QString::number(sum) + "$");
}

void Receipt::on_closebutton_clicked()
{
    this->close();
}
