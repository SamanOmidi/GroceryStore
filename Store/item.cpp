#include "item.h"

Item::Item()
{

}

Item::Item(QString name , QString type ,
           QString ProductionCompany ,
           double price , int quantity)
{
    this->name = name;
    this->type = type;
    this->ProductionCompany = ProductionCompany;
    this->price = price;
    this->quantity = quantity;
}

void Item::setName(QString name)
{
    this->name = name;
}
QString Item::getName()const
{
    return name;
}

void Item::setType(QString type)
{
    this->type = type;
}
QString Item::getType()const
{
    return type;
}

void Item::setProductionCompany(QString productioncompany)
{
    this->ProductionCompany = productioncompany;
}
QString Item::getProductionCompany()const
{
    return ProductionCompany;
}

void Item::setPrice(double price)
{
    this->price = price;
}
double Item::getPrice()const
{
    return price;
}

void Item::setQuantity(int quantity)
{
    this->quantity = quantity;
}
int Item::getQuantity()const
{
    return quantity;
}
