#ifndef CUSTOMER_H
#define CUSTOMER_H

#include <QMainWindow>
#include "customerlogin.h"


namespace Ui {
class Customer;
}

class Customer : public QMainWindow
{
    Q_OBJECT

public:
    explicit Customer(QWidget *parent = nullptr);
    ~Customer();

    void runLoginPage();

private:
    Ui::Customer *ui;

    //checking start of program to run login page
    bool StartOfProgram = true;

    //saving the username of the person is using the program
    QString user;
};

#endif // CUSTOMER_H
