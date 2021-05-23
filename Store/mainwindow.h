#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <item.h>
#include <additem.h>
#include "loginpage.h"

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_addnewitembutton_clicked();
    void on_removeitembutton_clicked();
    void runLoginPage();

private:
    Ui::MainWindow *ui;
    QVector<Item *> list;
    bool StartOfProgram = true;
};
#endif // MAINWINDOW_H
