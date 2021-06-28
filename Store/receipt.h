#ifndef RECEIPT_H
#define RECEIPT_H

#include <QDialog>

namespace Ui {
class Receipt;
}

class Receipt : public QDialog
{
    Q_OBJECT

public:
    explicit Receipt(QWidget *parent = nullptr);
    ~Receipt();

    void addtextBrowser(QString temp);

    void setpricelabel(double sum);

private slots:
    void on_closebutton_clicked();

private:
    Ui::Receipt *ui;
};

#endif // RECEIPT_H
