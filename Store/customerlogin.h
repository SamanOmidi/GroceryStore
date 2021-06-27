#ifndef CUSTOMERLOGIN_H
#define CUSTOMERLOGIN_H

#include <QDialog>
#include <QMessageBox>
#include <QFile>
#include <QTextStream>

namespace Ui {
class CustomerLogin;
}

class CustomerLogin : public QDialog
{
    Q_OBJECT

public:
    explicit CustomerLogin(QWidget *parent = nullptr);
    ~CustomerLogin();
    QString username();



private slots:
    void on_registerbutton_clicked();

    void on_loginbutton_clicked();

private:
    Ui::CustomerLogin *ui;
};

#endif // CUSTOMERLOGIN_H
