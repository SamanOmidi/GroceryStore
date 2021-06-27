#ifndef START_H
#define START_H

#include <QDialog>

namespace Ui {
class Start;
}

class Start : public QDialog
{
    Q_OBJECT

public:
    explicit Start(QWidget *parent = nullptr);
    ~Start();

    QString UserIdentity();

private slots:
    void on_enterbutton_clicked();

private:
    Ui::Start *ui;
    QString identity;
};

#endif // START_H
