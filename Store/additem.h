#ifndef ADDITEM_H
#define ADDITEM_H

#include <QDialog>
#include <item.h>

namespace Ui {
class AddItem;
}

class AddItem : public QDialog
{
    Q_OBJECT

public:
    explicit AddItem(Item* &newItem,QWidget *parent = nullptr);
    ~AddItem();
private slots:
    void on_confirmbutton_clicked();

private:
    Ui::AddItem *ui;
    Item** newItem;
};

#endif // ADDITEM_H
