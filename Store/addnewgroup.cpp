#include "addnewgroup.h"
#include "ui_addnewgroup.h"

AddNewGroup::AddNewGroup(QVector<Item*> & items , QWidget *parent) :
    QDialog(parent),
    ui(new Ui::AddNewGroup)
{
    ui->setupUi(this);
    setCurrentTypes(items);
}

AddNewGroup::~AddNewGroup()
{
    delete ui;
}

QString AddNewGroup::newGroupName()
{
    return ui->answerline->text();
}

void AddNewGroup::setCurrentTypes(QVector<Item*> & list)
{
    QVector<QString> types;
    bool exist = false;
    for(int i=0 ; i<list.size() ; i++)
    {
        if(types.size()!= 0)
        {
            for(int j=0 ; j<types.size() ; j++)
            {
                if(types[j] == list[i]->getType())
                {
                    exist = true;
                }
                else
                    continue;
            }
            if(exist)
            {
                exist = false;
                continue;
            }
            else
            {
                types.push_back(list[i]->getType());
            }
        }
        else
        {
            types.push_back(list[i]->getType());
        }
    }
    for(int i=0 ; i<types.size() ; i++)
    {
        ui->itemstypesText->append(types[i]);
    }
}

void AddNewGroup::on_confirmbutton_clicked()
{
    if(ui->answerline->text() == "")
    {
        QMessageBox error;
        error.setText("Invalid Inputs.");
        error.show();
        error.exec();
        return;
    }
    else
    {
        QMessageBox confirmedSuccesfully;
        confirmedSuccesfully.setText("New Group Added To The List.");
        confirmedSuccesfully.show();
        confirmedSuccesfully.exec();
        this->close();
    }
}
