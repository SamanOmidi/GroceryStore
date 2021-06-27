/********************************************************************************
** Form generated from reading UI file 'displayitems.ui'
**
** Created by: Qt User Interface Compiler version 5.14.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DISPLAYITEMS_H
#define UI_DISPLAYITEMS_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_DisplayItems
{
public:
    QVBoxLayout *verticalLayout;
    QTextBrowser *itemsText;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QPushButton *closebutton;
    QSpacerItem *horizontalSpacer_2;

    void setupUi(QDialog *DisplayItems)
    {
        if (DisplayItems->objectName().isEmpty())
            DisplayItems->setObjectName(QString::fromUtf8("DisplayItems"));
        DisplayItems->resize(446, 429);
        verticalLayout = new QVBoxLayout(DisplayItems);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        itemsText = new QTextBrowser(DisplayItems);
        itemsText->setObjectName(QString::fromUtf8("itemsText"));
        QFont font;
        font.setPointSize(11);
        itemsText->setFont(font);

        verticalLayout->addWidget(itemsText);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(-1, -1, 0, -1);
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        closebutton = new QPushButton(DisplayItems);
        closebutton->setObjectName(QString::fromUtf8("closebutton"));
        QFont font1;
        font1.setPointSize(12);
        closebutton->setFont(font1);

        horizontalLayout->addWidget(closebutton);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_2);


        verticalLayout->addLayout(horizontalLayout);


        retranslateUi(DisplayItems);

        QMetaObject::connectSlotsByName(DisplayItems);
    } // setupUi

    void retranslateUi(QDialog *DisplayItems)
    {
        DisplayItems->setWindowTitle(QCoreApplication::translate("DisplayItems", "Dialog", nullptr));
        closebutton->setText(QCoreApplication::translate("DisplayItems", "Close", nullptr));
    } // retranslateUi

};

namespace Ui {
    class DisplayItems: public Ui_DisplayItems {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DISPLAYITEMS_H
