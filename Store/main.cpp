#include "mainwindow.h"
#include "customer.h"
#include "start.h"
#include "loginpage.h"
#include "customer.h"
#include "customerlogin.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    //the startPage is for checking if user wants to enter as admin or customer
    Start StartPage;
    StartPage.setModal(true);
    StartPage.exec();

    //getting the user input
    QString temp = StartPage.UserIdentity();

    //exec the admin panel
    if(temp == "admin")
    {
        MainWindow w;
        w.show();
        return a.exec();
    }
    //exec user panel
    else
    {
        Customer Page;
        Page.show();
        return a.exec();
    }

}
