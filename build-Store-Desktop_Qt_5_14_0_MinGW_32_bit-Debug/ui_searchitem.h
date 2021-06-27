/********************************************************************************
** Form generated from reading UI file 'searchitem.ui'
**
** Created by: Qt User Interface Compiler version 5.14.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SEARCHITEM_H
#define UI_SEARCHITEM_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_SearchItem
{
public:
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout;
    QHBoxLayout *horizontalLayout_5;
    QRadioButton *typeradiobutton;
    QHBoxLayout *horizontalLayout_4;
    QRadioButton *nameradiobutton;
    QHBoxLayout *horizontalLayout_3;
    QRadioButton *companyradiobutton;
    QHBoxLayout *horizontalLayout_2;
    QLineEdit *searchline;
    QSpacerItem *horizontalSpacer;
    QPushButton *findbutton;
    QSpacerItem *verticalSpacer;
    QVBoxLayout *verticalLayout;
    QTextBrowser *searchText;
    QSpacerItem *verticalSpacer_2;
    QHBoxLayout *horizontalLayout_6;
    QSpacerItem *horizontalSpacer_2;
    QPushButton *closebutton;
    QSpacerItem *horizontalSpacer_3;

    void setupUi(QDialog *SearchItem)
    {
        if (SearchItem->objectName().isEmpty())
            SearchItem->setObjectName(QString::fromUtf8("SearchItem"));
        SearchItem->resize(617, 561);
        verticalLayout_2 = new QVBoxLayout(SearchItem);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        typeradiobutton = new QRadioButton(SearchItem);
        typeradiobutton->setObjectName(QString::fromUtf8("typeradiobutton"));
        QFont font;
        font.setPointSize(11);
        typeradiobutton->setFont(font);

        horizontalLayout_5->addWidget(typeradiobutton);


        horizontalLayout->addLayout(horizontalLayout_5);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        nameradiobutton = new QRadioButton(SearchItem);
        nameradiobutton->setObjectName(QString::fromUtf8("nameradiobutton"));
        nameradiobutton->setFont(font);

        horizontalLayout_4->addWidget(nameradiobutton);


        horizontalLayout->addLayout(horizontalLayout_4);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        companyradiobutton = new QRadioButton(SearchItem);
        companyradiobutton->setObjectName(QString::fromUtf8("companyradiobutton"));
        companyradiobutton->setFont(font);

        horizontalLayout_3->addWidget(companyradiobutton);


        horizontalLayout->addLayout(horizontalLayout_3);


        verticalLayout_2->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        searchline = new QLineEdit(SearchItem);
        searchline->setObjectName(QString::fromUtf8("searchline"));
        searchline->setFont(font);

        horizontalLayout_2->addWidget(searchline);

        horizontalSpacer = new QSpacerItem(120, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer);

        findbutton = new QPushButton(SearchItem);
        findbutton->setObjectName(QString::fromUtf8("findbutton"));
        findbutton->setFont(font);

        horizontalLayout_2->addWidget(findbutton);


        verticalLayout_2->addLayout(horizontalLayout_2);

        verticalSpacer = new QSpacerItem(20, 20, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout_2->addItem(verticalSpacer);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        searchText = new QTextBrowser(SearchItem);
        searchText->setObjectName(QString::fromUtf8("searchText"));
        searchText->setFont(font);

        verticalLayout->addWidget(searchText);

        verticalSpacer_2 = new QSpacerItem(20, 20, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout->addItem(verticalSpacer_2);


        verticalLayout_2->addLayout(verticalLayout);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName(QString::fromUtf8("horizontalLayout_6"));
        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_6->addItem(horizontalSpacer_2);

        closebutton = new QPushButton(SearchItem);
        closebutton->setObjectName(QString::fromUtf8("closebutton"));
        closebutton->setFont(font);

        horizontalLayout_6->addWidget(closebutton);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_6->addItem(horizontalSpacer_3);


        verticalLayout_2->addLayout(horizontalLayout_6);


        retranslateUi(SearchItem);

        QMetaObject::connectSlotsByName(SearchItem);
    } // setupUi

    void retranslateUi(QDialog *SearchItem)
    {
        SearchItem->setWindowTitle(QCoreApplication::translate("SearchItem", "Dialog", nullptr));
        typeradiobutton->setText(QCoreApplication::translate("SearchItem", "Type/Category", nullptr));
        nameradiobutton->setText(QCoreApplication::translate("SearchItem", "Name", nullptr));
        companyradiobutton->setText(QCoreApplication::translate("SearchItem", "Company Name", nullptr));
        findbutton->setText(QCoreApplication::translate("SearchItem", "Find", nullptr));
        closebutton->setText(QCoreApplication::translate("SearchItem", "Close", nullptr));
    } // retranslateUi

};

namespace Ui {
    class SearchItem: public Ui_SearchItem {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SEARCHITEM_H
