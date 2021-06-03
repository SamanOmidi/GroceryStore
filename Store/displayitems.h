#ifndef DISPLAYITEMS_H
#define DISPLAYITEMS_H

#include <QDialog>
#include "item.h"

namespace Ui {
class DisplayItems;
}

class DisplayItems : public QDialog
{
    Q_OBJECT

public:
    explicit DisplayItems(QWidget *parent = nullptr);
    ~DisplayItems();
    void Display_items(QVector<Item *> & itemsVector);

private slots:
    void on_closebutton_clicked();

private:
    Ui::DisplayItems *ui;
};

#endif // DISPLAYITEMS_H
