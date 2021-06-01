#include "loginpage.h"
#include "ui_loginpage.h"

loginpage::loginpage(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::loginpage)
{
    ui->setupUi(this);
}

loginpage::~loginpage()
{
    delete ui;
}

QString loginpage::username()
{
    return ui->usernameline->text();
}

void loginpage::on_registerbutton_clicked()
{
    //error box if username or password was empty


    if(ui->usernameline->text() == "" || ui->passwordline->text() == "" )
    {
        QMessageBox error;
        error.setText("Invalid Inputs!");
        error.show();
        error.exec();
        return ;
    }


    //creating data.txt as file to save data on it


    QFile data(ui->usernameline->text()+".txt");

    if(data.exists(ui->usernameline->text()+".txt"))
    {
        QMessageBox errorDuplicateAccount;
        errorDuplicateAccount.setText("This User Name Already Exists.");
        errorDuplicateAccount.exec();
        return;
    }

    else
    {


    data.open(QIODevice::WriteOnly | QIODevice::Text);

    QTextStream out (&data);

    out << "username:" << ui->usernameline->text() << '\n';
    out << "password:" << ui->passwordline->text() << '\n';

    data.close();
    this -> close();

    }

}


void loginpage::on_loginbutton_clicked()
{
    //loading data.txt to read data

    QFile data(ui->usernameline->text()+".txt");

    if(data.exists(ui->usernameline->text()+".txt")){

        data.open(QIODevice::ReadOnly | QIODevice::Text);
        QTextStream in(&data);

        QString line;
        QStringList username;
        QStringList password;
        for(int i=0 ; i<2 ; ++i)
        {
            if(i==0)
            {
                line = in.readLine();
                username = line.split(':');
            }
            if(i==1)
            {
                line = in.readLine();
                password = line.split(':');
            }
        }

        if(username.at(1) == ui->usernameline->text() && password.at(1) == ui->passwordline->text())
        {
            QMessageBox welcome;
            welcome.setText("Welcome " + username.at(1) + " To The Shop");
            welcome.show();
            welcome.exec();
            data.close();
            this->close();
        }
        else
        {
            QMessageBox InvalidInputs;
            InvalidInputs.setText("Incorrect User Or Password...");
            InvalidInputs.exec();
            return;
        }
    }
    else
    {
        QMessageBox noFile;
        noFile.setText("Please Make A New Account.");
        noFile.exec();
        return;
    }

    data.close();
}
