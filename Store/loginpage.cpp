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


//return the username to the mainwindow
QString loginpage::username()
{
    return ui->usernameline->text();
}


//if user clicked on register button
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

    //creating data.txt as file to save info of the admin/staff user on it
    //it saves on different files based on their name
    //ex. admin.txt is for admin
    //ex. saman.txt is for staff with the username of saman

    QFile data(ui->usernameline->text()+".txt");

    //checking if this username already exists, then warn the user
    if(data.exists(ui->usernameline->text()+".txt"))
    {
        QMessageBox errorDuplicateAccount;
        errorDuplicateAccount.setText("This Username Already Exists.");
        errorDuplicateAccount.exec();
        return;
    }

    //making the account for the user
    else
    {
        data.open(QIODevice::WriteOnly | QIODevice::Text);

        QTextStream out (&data);

        //to save persian usernames and passwords
        out.setCodec("UTF-8");

        out << "username:" << ui->usernameline->text() << '\n';
        out << "password:" << ui->passwordline->text() << '\n';

        data.close();
        this -> close();

    }

}


//if user clicked on the login button
void loginpage::on_loginbutton_clicked()
{

    //loading data.txt to read data


    //checking if a person with that username exists
    QFile data(ui->usernameline->text()+".txt");

    if(data.exists(ui->usernameline->text()+".txt")){

        data.open(QIODevice::ReadOnly | QIODevice::Text);
        QTextStream in(&data);

        QString line;
        QStringList username;
        QStringList password;
        //getting the user file -> username and password
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

        //matching the gotten username and password to the user input
        if(username.at(1) == ui->usernameline->text() && password.at(1) == ui->passwordline->text())
        {
            QMessageBox welcome;
            welcome.setText("Welcome " + username.at(1) + " To The Shop");
            welcome.show();
            welcome.exec();
            data.close();
            this->close();
        }

        //warn the user that has entered wrong username or password
        else
        {
            QMessageBox InvalidInputs;
            InvalidInputs.setText("Incorrect Username Or Password...");
            InvalidInputs.exec();
            data.close();
            return;
        }

    }

    //the user had no account
    else
    {
        QMessageBox noFile;
        noFile.setText("Please Make A New Account.");
        noFile.exec();
        return;
    }
}
