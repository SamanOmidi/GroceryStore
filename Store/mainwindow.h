#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QMediaPlaylist>
#include <QMediaPlayer>
#include "item.h"
#include "additem.h"
#include "loginpage.h"
#include "displayitems.h"
#include "sellitem.h"
#include "edititem.h"
#include "searchitem.h"
#include "addnewgroup.h"
#include "displaygroupproducts.h"
#include "searchgroups.h"


QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

    void playMusic();

    void runLoginPage();

    void checkGrouplist();

    void loadItems();

private slots:
    void on_addnewitembutton_clicked();

    void on_removeitembutton_clicked();

    void on_displaybutton_clicked();

    void on_sellbutton_clicked();

    void on_edititembutton_clicked();

    void on_searchitemsbutton_clicked();

    void on_musicbutton_clicked();

    void on_addnewgroupbutton_clicked();

    void on_displaygroupitemsbutton_clicked();

    void on_searchgroupsbutton_clicked();

    void on_savebutton_clicked();

private:
    Ui::MainWindow *ui;

    //vector of items
    QVector<Item *> list;

    //checking start of program to run login page
    bool StartOfProgram = true;

    //saving the username of the person is using the program
    QString user;

    //checking and playing the music of program
    bool musicPlay = true;
    QMediaPlayer * music;

};
#endif // MAINWINDOW_H
