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
    QPushButton *removeitembutton;
    QPushButton *edititembutton;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(800, 600);
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
        menubar->setGeometry(QRect(0, 0, 800, 26));
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
        removeitembutton->setText(QCoreApplication::translate("MainWindow", "Remove Selected Item", nullptr));
        edititembutton->setText(QCoreApplication::translate("MainWindow", "Edit Selected Item", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
