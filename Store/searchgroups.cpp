#include "searchgroups.h"
#include "ui_searchgroups.h"


SearchGroups::SearchGroups(QVector<QString> & groupsName , QWidget *parent) :
    QDialog(parent),
    ui(new Ui::SearchGroups)
{
    ui->setupUi(this);
    this->groupsName = groupsName;
}

SearchGroups::~SearchGroups()
{
    delete ui;
}

void SearchGroups::on_findbutton_clicked()
{
    ui->searchText->clear();
    QString userInput;
    bool exist = true;

    while(true)
    {
        userInput = ui->searchline->text();
        if(userInput == "")
            break;
        for(int i=0 ; i<this->groupsName.size() ; i++)
        {
            for(int j=0 ; j<userInput.size() ; j++)
            {
                if(userInput.at(j) != this->groupsName[i].at(j))
                {
                    exist = false;
                    break;
                }
                else
                    continue;
            }
            if(exist)
            {
                ui->searchText->append(this->groupsName[i]);
            }
            else
                exist = true;
        }
        break;
    }
}

void SearchGroups::on_closebutton_clicked()
{
    this->close();
}
