#ifndef CUSTOMER_H
#define CUSTOMER_H

#include <QListWidget>
#include <QMainWindow>
#include <QMediaPlayer>
#include <QMediaPlaylist>
#include <QVector>
#include "customerlogin.h"
#include "item.h"
#include "addtocart.h"
#include "receipt.h"



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

    void loaditems();

    void checkgrouplist();

    void handleItemClicked(QListWidgetItem * productlist);

    void SaveItems();

    void playMusic();

private slots:
    void on_buybutton_clicked();

    void on_musicbutton_clicked();

    void on_receiptbutton_clicked();

private:
    Ui::Customer *ui;

    //vector of items
    QVector<Item *> list;

    //checking start of program to run login page
    bool StartOfProgram = true;

    //saving the username of the person is using the program
    QString user;

    //music of the program
    bool musicPlay = true;
    QMediaPlayer music;


    //for receipt
    Receipt receiptPage;
    double sum = 0;
};

#endif // CUSTOMER_H
