#ifndef SELLITEM_H
#define SELLITEM_H

#include <QDialog>
#include "item.h"
#include <QMessageBox>

namespace Ui {
class SellItem;
}

class SellItem : public QDialog
{
    Q_OBJECT

public:
    explicit SellItem(QVector<Item*>& items , int index ,QWidget *parent = nullptr);
    ~SellItem();
    void setNames();

private slots:
    void on_sellbutton_clicked();

    void on_cancelbutton_clicked();

private:
    Ui::SellItem *ui;
    QVector<Item *> list;
    int index;
};

#endif // SELLITEM_H
