/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.14.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QPushButton *addnewitembutton;
    QListWidget *productlist;
    QLabel *ComapnyName;
    QLabel *Price;
    QLabel *Quantity;
    QLabel *Type;
    QLabel *Name;
    QLabel *namelabel;
    QLabel *typelabel;
    QLabel *companynamelabel;
    QLabel *pricelabel;
    QLabel *quantitylabel;
    QPushButton *removeitembutton;
    QPushButton *edititembutton;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(804, 607);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        addnewitembutton = new QPushButton(centralwidget);
        addnewitembutton->setObjectName(QString::fromUtf8("addnewitembutton"));
        addnewitembutton->setGeometry(QRect(260, 400, 221, 31));
        QFont font;
        font.setPointSize(12);
        addnewitembutton->setFont(font);
        productlist = new QListWidget(centralwidget);
        productlist->setObjectName(QString::fromUtf8("productlist"));
        productlist->setGeometry(QRect(0, 0, 256, 511));
        ComapnyName = new QLabel(centralwidget);
        ComapnyName->setObjectName(QString::fromUtf8("ComapnyName"));
        ComapnyName->setGeometry(QRect(270, 100, 151, 51));
        ComapnyName->setFont(font);
        Price = new QLabel(centralwidget);
        Price->setObjectName(QString::fromUtf8("Price"));
        Price->setGeometry(QRect(270, 160, 51, 31));
        Price->setFont(font);
        Quantity = new QLabel(centralwidget);
        Quantity->setObjectName(QString::fromUtf8("Quantity"));
        Quantity->setGeometry(QRect(270, 210, 91, 31));
        Quantity->setFont(font);
        Type = new QLabel(centralwidget);
        Type->setObjectName(QString::fromUtf8("Type"));
        Type->setGeometry(QRect(270, 60, 51, 31));
        Type->setFont(font);
        Name = new QLabel(centralwidget);
        Name->setObjectName(QString::fromUtf8("Name"));
        Name->setGeometry(QRect(270, 10, 61, 20));
        Name->setFont(font);
        namelabel = new QLabel(centralwidget);
        namelabel->setObjectName(QString::fromUtf8("namelabel"));
        namelabel->setGeometry(QRect(440, 10, 151, 30));
        namelabel->setFont(font);
        namelabel->setFrameShape(QFrame::Panel);
        typelabel = new QLabel(centralwidget);
        typelabel->setObjectName(QString::fromUtf8("typelabel"));
        typelabel->setGeometry(QRect(440, 60, 151, 30));
        typelabel->setFont(font);
        typelabel->setFrameShape(QFrame::Panel);
        companynamelabel = new QLabel(centralwidget);
        companynamelabel->setObjectName(QString::fromUtf8("companynamelabel"));
        companynamelabel->setGeometry(QRect(440, 110, 151, 30));
        companynamelabel->setFont(font);
        companynamelabel->setFrameShape(QFrame::Panel);
        pricelabel = new QLabel(centralwidget);
        pricelabel->setObjectName(QString::fromUtf8("pricelabel"));
        pricelabel->setGeometry(QRect(440, 160, 151, 30));
        pricelabel->setFont(font);
        pricelabel->setFrameShape(QFrame::Panel);
        quantitylabel = new QLabel(centralwidget);
        quantitylabel->setObjectName(QString::fromUtf8("quantitylabel"));
        quantitylabel->setGeometry(QRect(440, 210, 151, 30));
        quantitylabel->setFont(font);
        quantitylabel->setFrameShape(QFrame::Panel);
        removeitembutton = new QPushButton(centralwidget);
        removeitembutton->setObjectName(QString::fromUtf8("removeitembutton"));
        removeitembutton->setGeometry(QRect(260, 480, 221, 31));
        removeitembutton->setFont(font);
        edititembutton = new QPushButton(centralwidget);
        edititembutton->setObjectName(QString::fromUtf8("edititembutton"));
        edititembutton->setGeometry(QRect(260, 440, 221, 31));
        edititembutton->setFont(font);
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 804, 26));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        addnewitembutton->setText(QCoreApplication::translate("MainWindow", "Add New Item", nullptr));
        ComapnyName->setText(QCoreApplication::translate("MainWindow", "Company Name", nullptr));
        Price->setText(QCoreApplication::translate("MainWindow", "Price", nullptr));
        Quantity->setText(QCoreApplication::translate("MainWindow", "Quantity", nullptr));
        Type->setText(QCoreApplication::translate("MainWindow", "Type", nullptr));
        Name->setText(QCoreApplication::translate("MainWindow", "Name", nullptr));
        namelabel->setText(QString());
        typelabel->setText(QString());
        companynamelabel->setText(QString());
        pricelabel->setText(QString());
        quantitylabel->setText(QString());
        removeitembutton->setText(QCoreApplication::translate("MainWindow", "Remove Selected Item", nullptr));
        edititembutton->setText(QCoreApplication::translate("MainWindow", "Edit Selected Item", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
