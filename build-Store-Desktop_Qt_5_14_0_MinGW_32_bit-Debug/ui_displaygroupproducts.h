/********************************************************************************
** Form generated from reading UI file 'displaygroupproducts.ui'
**
** Created by: Qt User Interface Compiler version 5.14.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DISPLAYGROUPPRODUCTS_H
#define UI_DISPLAYGROUPPRODUCTS_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_DisplayGroupProducts
{
public:
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_2;
    QSpacerItem *horizontalSpacer;
    QTextBrowser *productsnameText;
    QSpacerItem *horizontalSpacer_2;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer_3;
    QPushButton *exitbutton;
    QSpacerItem *horizontalSpacer_4;

    void setupUi(QDialog *DisplayGroupProducts)
    {
        if (DisplayGroupProducts->objectName().isEmpty())
            DisplayGroupProducts->setObjectName(QString::fromUtf8("DisplayGroupProducts"));
        DisplayGroupProducts->resize(465, 437);
        verticalLayout = new QVBoxLayout(DisplayGroupProducts);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer);

        productsnameText = new QTextBrowser(DisplayGroupProducts);
        productsnameText->setObjectName(QString::fromUtf8("productsnameText"));
        QFont font;
        font.setPointSize(11);
        productsnameText->setFont(font);

        horizontalLayout_2->addWidget(productsnameText);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_2);


        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalSpacer_3 = new QSpacerItem(140, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_3);

        exitbutton = new QPushButton(DisplayGroupProducts);
        exitbutton->setObjectName(QString::fromUtf8("exitbutton"));
        exitbutton->setFont(font);

        horizontalLayout->addWidget(exitbutton);

        horizontalSpacer_4 = new QSpacerItem(140, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_4);


        verticalLayout->addLayout(horizontalLayout);


        retranslateUi(DisplayGroupProducts);

        QMetaObject::connectSlotsByName(DisplayGroupProducts);
    } // setupUi

    void retranslateUi(QDialog *DisplayGroupProducts)
    {
        DisplayGroupProducts->setWindowTitle(QCoreApplication::translate("DisplayGroupProducts", "Dialog", nullptr));
        exitbutton->setText(QCoreApplication::translate("DisplayGroupProducts", "Exit", nullptr));
    } // retranslateUi

};

namespace Ui {
    class DisplayGroupProducts: public Ui_DisplayGroupProducts {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DISPLAYGROUPPRODUCTS_H
