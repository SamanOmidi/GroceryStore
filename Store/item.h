#ifndef ITEM_H
#define ITEM_H

#include <QString>
#include <QVector>

class Item
{
private:

    QString name;
    QString type;
    QString ProductionCompany;
    double price;
    int quantity;

public:
    Item();
    Item(QString name , QString type ,
         QString ProductionCompany ,
         double price , int quantity);

    void setName(QString name);
    QString getName()const;

    void setType(QString type);
    QString getType()const;

    void setProductionCompany(QString productioncompany);
    QString getProductionCompany()const;

    void setPrice(double price);
    double getPrice()const;

    void setQuantity(int quantity);
    int getQuantity()const;

};

#endif // ITEM_H
