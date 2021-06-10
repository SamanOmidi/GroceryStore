#ifndef EDITITEM_H
#define EDITITEM_H

#include <QDialog>
#include "item.h"
#include <QVector>
#include <QMessageBox>

namespace Ui {
class EditItem;
}

class EditItem : public QDialog
{
    Q_OBJECT

public:
    explicit EditItem(QVector<Item*> & list , int index , QWidget *parent = nullptr);
    ~EditItem();
    void setItemInfo();

private slots:
    void on_confirmbutton_clicked();

private:
    Ui::EditItem *ui;
    QVector<Item*>list;
    int index;

};

#endif // EDITITEM_H
