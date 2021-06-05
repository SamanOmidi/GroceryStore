#ifndef SEARCHITEM_H
#define SEARCHITEM_H

#include <QDialog>
#include "item.h"
#include <QString>


namespace Ui {
class SearchItem;
}

class SearchItem : public QDialog
{
    Q_OBJECT

public:
    explicit SearchItem(QVector<Item*>& items,QWidget *parent = nullptr);
    ~SearchItem();

private slots:
    void on_findbutton_clicked();

    void on_closebutton_clicked();

private:
    Ui::SearchItem *ui;
    QVector<Item*> list;
};

#endif // SEARCHITEM_H
