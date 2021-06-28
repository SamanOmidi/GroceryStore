#include "customerlogin.h"
#include "ui_customerlogin.h"

CustomerLogin::CustomerLogin(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::CustomerLogin)
{
    ui->setupUi(this);
}

CustomerLogin::~CustomerLogin()
{
    delete ui;
}

//return the username of the user
QString CustomerLogin::username()
{
    return ui->usernameline->text();
}

//if user clicked on registor button
void CustomerLogin::on_registerbutton_clicked()
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
    QFile data(ui->usernameline->text()+"-customer.txt");

    //check if there is a user with that username in system
    if(data.exists(ui->usernameline->text()+"-customer.txt"))
    {
        QMessageBox errorDuplicateAccount;
        errorDuplicateAccount.setText("This Username Already Exists.");
        errorDuplicateAccount.exec();
        return;
    }

    //making the new account for the user
    else
    {

        data.open(QIODevice::WriteOnly | QIODevice::Text);

        QTextStream out (&data);

        //for saving persian names
        out.setCodec("UTF-8");

        out << "username:" << ui->usernameline->text() << '\n';
        out << "password:" << ui->passwordline->text() << '\n';

        data.close();
        this -> close();

    }

}

void CustomerLogin::on_loginbutton_clicked()
{

    //loading data.txt to read data

    QFile data(ui->usernameline->text()+"-customer.txt");

    if(data.exists(ui->usernameline->text()+"-customer.txt")){

        data.open(QIODevice::ReadOnly | QIODevice::Text);
        QTextStream in(&data);

        //matchin the user inputs and saved files in system
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

        //user inputs matches
        if(username.at(1) == ui->usernameline->text() && password.at(1) == ui->passwordline->text())
        {
            QMessageBox welcome;
            welcome.setText("Welcome " + username.at(1) + " To The Shop");
            welcome.show();
            welcome.exec();
            data.close();
            this->close();
        }

        //user inputs do not matches
        else
        {
            QMessageBox InvalidInputs;
            InvalidInputs.setText("Incorrect Username Or Password...");
            InvalidInputs.exec();
            data.close();
            return;
        }
    }

    //warn the user that has not account saved in the system
    else
    {
        QMessageBox noFile;
        noFile.setText("Please Make A New Account.");
        noFile.exec();
        return;
    }
}
