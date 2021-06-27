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
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QVBoxLayout *verticalLayout_3;
    QHBoxLayout *horizontalLayout_3;
    QSpacerItem *horizontalSpacer;
    QPushButton *savebutton;
    QPushButton *musicbutton;
    QSpacerItem *verticalSpacer_3;
    QHBoxLayout *horizontalLayout_2;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer_2;
    QListWidget *productlist;
    QSpacerItem *horizontalSpacer_6;
    QVBoxLayout *verticalLayout;
    QPushButton *addnewitembutton;
    QPushButton *displaybutton;
    QPushButton *sellbutton;
    QPushButton *edititembutton;
    QPushButton *removeitembutton;
    QPushButton *searchitemsbutton;
    QSpacerItem *horizontalSpacer_3;
    QSpacerItem *verticalSpacer;
    QHBoxLayout *horizontalLayout_5;
    QHBoxLayout *horizontalLayout_4;
    QSpacerItem *horizontalSpacer_4;
    QListWidget *grouplist;
    QSpacerItem *horizontalSpacer_7;
    QVBoxLayout *verticalLayout_2;
    QPushButton *addnewgroupbutton;
    QPushButton *displaygroupitemsbutton;
    QPushButton *searchgroupsbutton;
    QSpacerItem *horizontalSpacer_5;
    QSpacerItem *verticalSpacer_2;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(760, 567);
        MainWindow->setStyleSheet(QString::fromUtf8("background: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:0, stop:0 rgba(101, 223, 201, 255), stop:1 rgba(108,219,235, 255))"));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        verticalLayout_3 = new QVBoxLayout(centralwidget);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        horizontalSpacer = new QSpacerItem(600, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer);

        savebutton = new QPushButton(centralwidget);
        savebutton->setObjectName(QString::fromUtf8("savebutton"));
        QSizePolicy sizePolicy(QSizePolicy::Minimum, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(savebutton->sizePolicy().hasHeightForWidth());
        savebutton->setSizePolicy(sizePolicy);
        QFont font;
        font.setPointSize(12);
        savebutton->setFont(font);
        savebutton->setStyleSheet(QString::fromUtf8("border-radius:13px;\n"
"background:rgb(83, 255, 212)"));

        horizontalLayout_3->addWidget(savebutton);

        musicbutton = new QPushButton(centralwidget);
        musicbutton->setObjectName(QString::fromUtf8("musicbutton"));
        QSizePolicy sizePolicy1(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(musicbutton->sizePolicy().hasHeightForWidth());
        musicbutton->setSizePolicy(sizePolicy1);
        musicbutton->setStyleSheet(QString::fromUtf8("border-radius:20px;\n"
"background:rgb(255, 255, 255);"));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/images/musicIcon4.png"), QSize(), QIcon::Normal, QIcon::Off);
        musicbutton->setIcon(icon);
        musicbutton->setIconSize(QSize(40, 50));
        musicbutton->setCheckable(false);

        horizontalLayout_3->addWidget(musicbutton);


        verticalLayout_3->addLayout(horizontalLayout_3);

        verticalSpacer_3 = new QSpacerItem(20, 12, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout_3->addItem(verticalSpacer_3);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_2);

        productlist = new QListWidget(centralwidget);
        productlist->setObjectName(QString::fromUtf8("productlist"));
        QSizePolicy sizePolicy2(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(productlist->sizePolicy().hasHeightForWidth());
        productlist->setSizePolicy(sizePolicy2);
        QFont font1;
        font1.setPointSize(11);
        productlist->setFont(font1);
        productlist->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));

        horizontalLayout->addWidget(productlist);


        horizontalLayout_2->addLayout(horizontalLayout);

        horizontalSpacer_6 = new QSpacerItem(40, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_6);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(18);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        addnewitembutton = new QPushButton(centralwidget);
        addnewitembutton->setObjectName(QString::fromUtf8("addnewitembutton"));
        QSizePolicy sizePolicy3(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(addnewitembutton->sizePolicy().hasHeightForWidth());
        addnewitembutton->setSizePolicy(sizePolicy3);
        addnewitembutton->setFont(font);
        addnewitembutton->setStyleSheet(QString::fromUtf8("border-radius: 10px;\n"
"background:rgb(255, 251, 135);"));

        verticalLayout->addWidget(addnewitembutton);

        displaybutton = new QPushButton(centralwidget);
        displaybutton->setObjectName(QString::fromUtf8("displaybutton"));
        sizePolicy3.setHeightForWidth(displaybutton->sizePolicy().hasHeightForWidth());
        displaybutton->setSizePolicy(sizePolicy3);
        displaybutton->setFont(font);
        displaybutton->setStyleSheet(QString::fromUtf8("border-radius: 10px;\n"
"background:rgb(255, 149, 149);"));

        verticalLayout->addWidget(displaybutton);

        sellbutton = new QPushButton(centralwidget);
        sellbutton->setObjectName(QString::fromUtf8("sellbutton"));
        sizePolicy3.setHeightForWidth(sellbutton->sizePolicy().hasHeightForWidth());
        sellbutton->setSizePolicy(sizePolicy3);
        sellbutton->setFont(font);
        sellbutton->setStyleSheet(QString::fromUtf8("border-radius: 10px;\n"
"background:rgb(212, 255, 172);"));

        verticalLayout->addWidget(sellbutton);

        edititembutton = new QPushButton(centralwidget);
        edititembutton->setObjectName(QString::fromUtf8("edititembutton"));
        sizePolicy3.setHeightForWidth(edititembutton->sizePolicy().hasHeightForWidth());
        edititembutton->setSizePolicy(sizePolicy3);
        edititembutton->setFont(font);
        edititembutton->setStyleSheet(QString::fromUtf8("border-radius: 10px;\n"
"background:rgb(157, 159, 255);"));

        verticalLayout->addWidget(edititembutton);

        removeitembutton = new QPushButton(centralwidget);
        removeitembutton->setObjectName(QString::fromUtf8("removeitembutton"));
        sizePolicy3.setHeightForWidth(removeitembutton->sizePolicy().hasHeightForWidth());
        removeitembutton->setSizePolicy(sizePolicy3);
        removeitembutton->setFont(font);
        removeitembutton->setStyleSheet(QString::fromUtf8("border-radius: 10px;\n"
"background:rgb(223, 196, 255);"));

        verticalLayout->addWidget(removeitembutton);

        searchitemsbutton = new QPushButton(centralwidget);
        searchitemsbutton->setObjectName(QString::fromUtf8("searchitemsbutton"));
        sizePolicy3.setHeightForWidth(searchitemsbutton->sizePolicy().hasHeightForWidth());
        searchitemsbutton->setSizePolicy(sizePolicy3);
        QFont font2;
        font2.setPointSize(12);
        font2.setStyleStrategy(QFont::PreferDefault);
        searchitemsbutton->setFont(font2);
        searchitemsbutton->setStyleSheet(QString::fromUtf8("border-radius: 10px;\n"
"background:rgb(255, 90, 90);"));

        verticalLayout->addWidget(searchitemsbutton);


        horizontalLayout_2->addLayout(verticalLayout);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_3);


        verticalLayout_3->addLayout(horizontalLayout_2);

        verticalSpacer = new QSpacerItem(20, 20, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout_3->addItem(verticalSpacer);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_4);

        grouplist = new QListWidget(centralwidget);
        grouplist->setObjectName(QString::fromUtf8("grouplist"));
        grouplist->setFont(font1);
        grouplist->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        grouplist->setFrameShape(QFrame::StyledPanel);

        horizontalLayout_4->addWidget(grouplist);


        horizontalLayout_5->addLayout(horizontalLayout_4);

        horizontalSpacer_7 = new QSpacerItem(40, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_5->addItem(horizontalSpacer_7);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setSpacing(18);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        addnewgroupbutton = new QPushButton(centralwidget);
        addnewgroupbutton->setObjectName(QString::fromUtf8("addnewgroupbutton"));
        sizePolicy3.setHeightForWidth(addnewgroupbutton->sizePolicy().hasHeightForWidth());
        addnewgroupbutton->setSizePolicy(sizePolicy3);
        addnewgroupbutton->setFont(font);

        verticalLayout_2->addWidget(addnewgroupbutton);

        displaygroupitemsbutton = new QPushButton(centralwidget);
        displaygroupitemsbutton->setObjectName(QString::fromUtf8("displaygroupitemsbutton"));
        sizePolicy3.setHeightForWidth(displaygroupitemsbutton->sizePolicy().hasHeightForWidth());
        displaygroupitemsbutton->setSizePolicy(sizePolicy3);
        displaygroupitemsbutton->setFont(font);

        verticalLayout_2->addWidget(displaygroupitemsbutton);

        searchgroupsbutton = new QPushButton(centralwidget);
        searchgroupsbutton->setObjectName(QString::fromUtf8("searchgroupsbutton"));
        sizePolicy3.setHeightForWidth(searchgroupsbutton->sizePolicy().hasHeightForWidth());
        searchgroupsbutton->setSizePolicy(sizePolicy3);
        searchgroupsbutton->setFont(font);

        verticalLayout_2->addWidget(searchgroupsbutton);


        horizontalLayout_5->addLayout(verticalLayout_2);

        horizontalSpacer_5 = new QSpacerItem(40, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_5->addItem(horizontalSpacer_5);


        verticalLayout_3->addLayout(horizontalLayout_5);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_3->addItem(verticalSpacer_2);

        MainWindow->setCentralWidget(centralwidget);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        savebutton->setText(QCoreApplication::translate("MainWindow", "Save", nullptr));
        musicbutton->setText(QString());
        addnewitembutton->setText(QCoreApplication::translate("MainWindow", "Add New Item", nullptr));
        displaybutton->setText(QCoreApplication::translate("MainWindow", "Display All Items", nullptr));
        sellbutton->setText(QCoreApplication::translate("MainWindow", "Sell Selected Item", nullptr));
        edititembutton->setText(QCoreApplication::translate("MainWindow", "Edit Selected Item", nullptr));
        removeitembutton->setText(QCoreApplication::translate("MainWindow", "Remove Selected Item", nullptr));
        searchitemsbutton->setText(QCoreApplication::translate("MainWindow", "Search Items", nullptr));
        addnewgroupbutton->setText(QCoreApplication::translate("MainWindow", "Add New Group", nullptr));
        displaygroupitemsbutton->setText(QCoreApplication::translate("MainWindow", "Display Group Items", nullptr));
        searchgroupsbutton->setText(QCoreApplication::translate("MainWindow", "Search Groups", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
