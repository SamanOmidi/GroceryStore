#ifndef LIST_H
#define LIST_H

#include <QString>
#include <QVector>
using namespace std;

struct Item {
    QString name;
    QString nameOfCompany;
    QString type;
    int count;
    int price;
};

class List
{
private:
    QVector<Item> items ;
public:
    //constructor
    List();
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

#endif // LIST_H
