#include "searchgroups.h"
#include "ui_searchgroups.h"


SearchGroups::SearchGroups(QVector<QString> & groupsName , QWidget *parent) :
    QDialog(parent),
    ui(new Ui::SearchGroups)
{
    ui->setupUi(this);

    //getting the names of the groups and putting them in a vector
    this->groupsName = groupsName;
}

SearchGroups::~SearchGroups()
{
    delete ui;
}

void SearchGroups::on_findbutton_clicked()
{

    //the whole process is like searching for an item
    //we get the name of the groups
    //and if each letter of the group name matches to the user input
    //we append the group name to the text browser


    ui->searchText->clear();
    QString userInput;
    bool exist = true;

    int count = 1;

    while(true)
    {
        userInput = ui->searchline->text();
        if(userInput == "")
            break;
        for(int i=0 ; i<this->groupsName.size() ; i++)
        {
            for(int j=0 ; j<userInput.size() ; j++)
            {
                if(j >= groupsName[i].size())
                {
                    exist = false;
                    break;
                }

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
                ui->searchText->append(QString::number(count) + ". " + this->groupsName[i] + '\n');
                count++;
            }
            else
                exist = true;
        }
        break;
    }
}


//closing the dialog if user click on close button
void SearchGroups::on_closebutton_clicked()
{
    this->close();
}
