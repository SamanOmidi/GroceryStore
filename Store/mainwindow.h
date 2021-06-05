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

private slots:
    void on_addnewitembutton_clicked();

    void on_removeitembutton_clicked();

    void runLoginPage();

    void on_displaybutton_clicked();

    void on_sellbutton_clicked();

    void on_edititembutton_clicked();

    void on_searchitemsbutton_clicked();

    void on_musicbutton_clicked();

private:
    Ui::MainWindow *ui;
    QVector<Item *> list;
    bool StartOfProgram = true;
    QString user;
    bool musicPlay = true;
    QMediaPlayer * music;
};
#endif // MAINWINDOW_H
