#ifndef LIST_H
#define LIST_H

#include <QString>
#include <QVector>
#include <iostream>
#include <QTextStream>
QTextStream cout(stdout);
QTextStream cin(stdin);

struct item {
    QString Name;
    QString ProductionCompanyName;
    QString Type;
    int Count = 0;
    int Price;
};
class shop
{
private:
    QVector<item> items ;
public:
    //constructor
    shop();
    //adding item to our list
    void add_item (QString name);
    //removing item from our list
    void remove_item(QString name);
    //searching our list
    void search();
    //editing our list
    void edit(QString name);
    //display all the items of the list
    void display();
    //grouping items

    //searching groups
    //displaying items of a group
    //making an account system for the program
    //making a store and load file
};

class group : public shop
{
private:
    QVector<item> groupItems ;
};





#endif // LIST_H
