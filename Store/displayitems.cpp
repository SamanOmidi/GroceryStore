#include "displayitems.h"
#include "ui_displayitems.h"

DisplayItems::DisplayItems(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::DisplayItems)
{
    ui->setupUi(this);
}

DisplayItems::~DisplayItems()
{
    delete ui;
}
