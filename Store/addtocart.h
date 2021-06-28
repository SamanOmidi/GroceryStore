#ifndef ADDTOCART_H
#define ADDTOCART_H

#include <QDialog>
#include <QMessageBox>

namespace Ui {
class AddToCart;
}

class AddToCart : public QDialog
{
    Q_OBJECT

public:
    explicit AddToCart(QWidget *parent = nullptr);
    ~AddToCart();

    int getQuantity();

private slots:
    void on_confrimbutton_clicked();

private:
    Ui::AddToCart *ui;

    int quantity = 0;
};

#endif // ADDTOCART_H
