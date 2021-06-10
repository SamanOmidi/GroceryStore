#ifndef ADDNEWGROUP_H
#define ADDNEWGROUP_H

#include <QDialog>
#include "item.h"
#include <QMessageBox>

namespace Ui {
class AddNewGroup;
}

class AddNewGroup : public QDialog
{
    Q_OBJECT

public:
    explicit AddNewGroup(QVector<Item*> & items , QWidget *parent = nullptr);
    ~AddNewGroup();
    void setCurrentTypes(QVector<Item*> & list);
    QString newGroupName();

private slots:
    void on_confirmbutton_clicked();

private:
    Ui::AddNewGroup *ui;
};

#endif // ADDNEWGROUP_H
