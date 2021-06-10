#ifndef SEARCHGROUPS_H
#define SEARCHGROUPS_H

#include <QDialog>
#include <QListWidget>
#include "item.h"

namespace Ui {
class SearchGroups;
}

class SearchGroups : public QDialog
{
    Q_OBJECT

public:
    explicit SearchGroups(QVector<QString> & groupsName , QWidget *parent = nullptr);
    ~SearchGroups();

private slots:
    void on_findbutton_clicked();

    void on_closebutton_clicked();

private:
    Ui::SearchGroups *ui;
    QVector<QString> groupsName;
};

#endif // SEARCHGROUPS_H
