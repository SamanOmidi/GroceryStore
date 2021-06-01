#ifndef DISPLAYITEMS_H
#define DISPLAYITEMS_H

#include <QDialog>

namespace Ui {
class DisplayItems;
}

class DisplayItems : public QDialog
{
    Q_OBJECT

public:
    explicit DisplayItems(QWidget *parent = nullptr);
    ~DisplayItems();

private:
    Ui::DisplayItems *ui;
};

#endif // DISPLAYITEMS_H
