#include "addnewgroup.h"
#include "ui_addnewgroup.h"

AddNewGroup::AddNewGroup(QVector<Item*> & items , QWidget *parent) :
    QDialog(parent),
    ui(new Ui::AddNewGroup)
{
    ui->setupUi(this);

    //getting the reference of vector of items
    setCurrentTypes(items);
}

AddNewGroup::~AddNewGroup()
{
    delete ui;
}

//returning the group name that user entered
QString AddNewGroup::newGroupName()
{
    return ui->answerline->text();
}


//filling the text browser for available types/categories
void AddNewGroup::setCurrentTypes(QVector<Item*> & list)
{
    QVector<QString> types;
    bool exist = false;
    for(int i=0 ; i<list.size() ; i++)
    {
        //checking if the new type (i=1) exists in the vector types or no
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
        //getting the first type/category
        else
        {
            types.push_back(list[i]->getType());
        }
    }

    //appending available types to the text browser
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
        this->close();
}
