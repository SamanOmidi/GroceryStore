#ifndef DISPLAYGROUPPRODUCTS_H
#define DISPLAYGROUPPRODUCTS_H

#include <QDialog>
#include "item.h"

namespace Ui {
class DisplayGroupProducts;
}

class DisplayGroupProducts : public QDialog
{
    Q_OBJECT

public:
    explicit DisplayGroupProducts(QVector<Item*> & items, QString groupType , QWidget *parent = nullptr);
    ~DisplayGroupProducts();
    void printNames(QVector<Item*>& items , QString groupType);

private slots:
    void on_exitbutton_clicked();

private:
    Ui::DisplayGroupProducts *ui;
};

#endif // DISPLAYGROUPPRODUCTS_H
