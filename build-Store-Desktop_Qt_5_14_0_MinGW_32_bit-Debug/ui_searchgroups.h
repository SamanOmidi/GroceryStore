/********************************************************************************
** Form generated from reading UI file 'searchgroups.ui'
**
** Created by: Qt User Interface Compiler version 5.14.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SEARCHGROUPS_H
#define UI_SEARCHGROUPS_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_SearchGroups
{
public:
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLineEdit *searchline;
    QSpacerItem *horizontalSpacer;
    QPushButton *findbutton;
    QHBoxLayout *horizontalLayout_2;
    QTextBrowser *searchText;
    QHBoxLayout *horizontalLayout_3;
    QSpacerItem *horizontalSpacer_2;
    QPushButton *closebutton;
    QSpacerItem *horizontalSpacer_3;

    void setupUi(QDialog *SearchGroups)
    {
        if (SearchGroups->objectName().isEmpty())
            SearchGroups->setObjectName(QString::fromUtf8("SearchGroups"));
        SearchGroups->resize(449, 453);
        verticalLayout = new QVBoxLayout(SearchGroups);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        searchline = new QLineEdit(SearchGroups);
        searchline->setObjectName(QString::fromUtf8("searchline"));
        QFont font;
        font.setPointSize(11);
        searchline->setFont(font);

        horizontalLayout->addWidget(searchline);

        horizontalSpacer = new QSpacerItem(100, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        findbutton = new QPushButton(SearchGroups);
        findbutton->setObjectName(QString::fromUtf8("findbutton"));
        findbutton->setFont(font);

        horizontalLayout->addWidget(findbutton);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        searchText = new QTextBrowser(SearchGroups);
        searchText->setObjectName(QString::fromUtf8("searchText"));
        searchText->setFont(font);

        horizontalLayout_2->addWidget(searchText);


        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        horizontalSpacer_2 = new QSpacerItem(150, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_2);

        closebutton = new QPushButton(SearchGroups);
        closebutton->setObjectName(QString::fromUtf8("closebutton"));
        closebutton->setFont(font);

        horizontalLayout_3->addWidget(closebutton);

        horizontalSpacer_3 = new QSpacerItem(150, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_3);


        verticalLayout->addLayout(horizontalLayout_3);

        QWidget::setTabOrder(searchline, findbutton);
        QWidget::setTabOrder(findbutton, searchText);
        QWidget::setTabOrder(searchText, closebutton);

        retranslateUi(SearchGroups);

        QMetaObject::connectSlotsByName(SearchGroups);
    } // setupUi

    void retranslateUi(QDialog *SearchGroups)
    {
        SearchGroups->setWindowTitle(QCoreApplication::translate("SearchGroups", "Dialog", nullptr));
        findbutton->setText(QCoreApplication::translate("SearchGroups", "Find", nullptr));
        closebutton->setText(QCoreApplication::translate("SearchGroups", "Close", nullptr));
    } // retranslateUi

};

namespace Ui {
    class SearchGroups: public Ui_SearchGroups {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SEARCHGROUPS_H
