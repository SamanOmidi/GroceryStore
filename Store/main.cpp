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
    Start StartPage;
    StartPage.setModal(true);
    StartPage.exec();
    QString temp = StartPage.UserIdentity();
    if(temp == "admin")
    {
        MainWindow w;
        w.show();
        return a.exec();
    }
    else
    {
        Customer Page;
        Page.show();
        return a.exec();
    }

}
