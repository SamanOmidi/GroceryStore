#ifndef SELLITEM_H
#define SELLITEM_H

#include <QDialog>
#include "item.h"

namespace Ui {
class SellItem;
}

class SellItem : public QDialog
{
    Q_OBJECT

public:
    explicit SellItem(QWidget *parent = nullptr);
    ~SellItem();
    void sellItem (QVector<Item *> & items , int index);

private:
    Ui::SellItem *ui;
};

#endif // SELLITEM_H
