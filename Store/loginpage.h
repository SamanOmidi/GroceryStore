#ifndef LOGINPAGE_H
#define LOGINPAGE_H

#include <QDialog>
#include <QFile>
#include <QTextStream>
#include <QMessageBox>

namespace Ui {
class loginpage;
}

class loginpage : public QDialog
{
    Q_OBJECT

public:

    explicit loginpage(QWidget *parent = nullptr);
    ~loginpage();

    QString username();

private slots:
    void on_registerbutton_clicked();

    void on_loginbutton_clicked();

private:
    Ui::loginpage *ui;
};

#endif // LOGINPAGE_H
