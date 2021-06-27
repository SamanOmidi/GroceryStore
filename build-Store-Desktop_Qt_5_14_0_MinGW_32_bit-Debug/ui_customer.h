/********************************************************************************
** Form generated from reading UI file 'customer.ui'
**
** Created by: Qt User Interface Compiler version 5.14.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CUSTOMER_H
#define UI_CUSTOMER_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Customer
{
public:
    QMenuBar *menubar;
    QWidget *centralwidget;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *Customer)
    {
        if (Customer->objectName().isEmpty())
            Customer->setObjectName(QString::fromUtf8("Customer"));
        Customer->resize(800, 600);
        menubar = new QMenuBar(Customer);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        Customer->setMenuBar(menubar);
        centralwidget = new QWidget(Customer);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        Customer->setCentralWidget(centralwidget);
        statusbar = new QStatusBar(Customer);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        Customer->setStatusBar(statusbar);

        retranslateUi(Customer);

        QMetaObject::connectSlotsByName(Customer);
    } // setupUi

    void retranslateUi(QMainWindow *Customer)
    {
        Customer->setWindowTitle(QCoreApplication::translate("Customer", "MainWindow", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Customer: public Ui_Customer {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CUSTOMER_H
