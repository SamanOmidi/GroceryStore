/********************************************************************************
** Form generated from reading UI file 'additem.ui'
**
** Created by: Qt User Interface Compiler version 5.14.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADDITEM_H
#define UI_ADDITEM_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_AddItem
{
public:
    QPushButton *confirmbutton;
    QWidget *widget;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *namelabel;
    QLineEdit *nameline;
    QHBoxLayout *horizontalLayout_2;
    QLabel *typelabel;
    QLineEdit *typeline;
    QHBoxLayout *horizontalLayout_3;
    QLabel *companylabel;
    QLineEdit *companyline;
    QHBoxLayout *horizontalLayout_4;
    QLabel *pricelabel;
    QLineEdit *priceline;
    QHBoxLayout *horizontalLayout_5;
    QLabel *quantitylabel;
    QLineEdit *quantityline;

    void setupUi(QDialog *AddItem)
    {
        if (AddItem->objectName().isEmpty())
            AddItem->setObjectName(QString::fromUtf8("AddItem"));
        AddItem->resize(396, 446);
        confirmbutton = new QPushButton(AddItem);
        confirmbutton->setObjectName(QString::fromUtf8("confirmbutton"));
        confirmbutton->setGeometry(QRect(140, 337, 111, 31));
        QFont font;
        font.setPointSize(12);
        confirmbutton->setFont(font);
        widget = new QWidget(AddItem);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(40, 50, 301, 186));
        verticalLayout = new QVBoxLayout(widget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        namelabel = new QLabel(widget);
        namelabel->setObjectName(QString::fromUtf8("namelabel"));
        namelabel->setFont(font);

        horizontalLayout->addWidget(namelabel);

        nameline = new QLineEdit(widget);
        nameline->setObjectName(QString::fromUtf8("nameline"));
        nameline->setFont(font);

        horizontalLayout->addWidget(nameline, 0, Qt::AlignHCenter|Qt::AlignVCenter);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        typelabel = new QLabel(widget);
        typelabel->setObjectName(QString::fromUtf8("typelabel"));
        typelabel->setFont(font);

        horizontalLayout_2->addWidget(typelabel);

        typeline = new QLineEdit(widget);
        typeline->setObjectName(QString::fromUtf8("typeline"));
        typeline->setFont(font);

        horizontalLayout_2->addWidget(typeline, 0, Qt::AlignHCenter);


        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        companylabel = new QLabel(widget);
        companylabel->setObjectName(QString::fromUtf8("companylabel"));
        companylabel->setFont(font);

        horizontalLayout_3->addWidget(companylabel);

        companyline = new QLineEdit(widget);
        companyline->setObjectName(QString::fromUtf8("companyline"));
        companyline->setFont(font);

        horizontalLayout_3->addWidget(companyline, 0, Qt::AlignHCenter);


        verticalLayout->addLayout(horizontalLayout_3);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        pricelabel = new QLabel(widget);
        pricelabel->setObjectName(QString::fromUtf8("pricelabel"));
        pricelabel->setFont(font);

        horizontalLayout_4->addWidget(pricelabel);

        priceline = new QLineEdit(widget);
        priceline->setObjectName(QString::fromUtf8("priceline"));
        priceline->setFont(font);

        horizontalLayout_4->addWidget(priceline, 0, Qt::AlignHCenter);


        verticalLayout->addLayout(horizontalLayout_4);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        quantitylabel = new QLabel(widget);
        quantitylabel->setObjectName(QString::fromUtf8("quantitylabel"));
        quantitylabel->setFont(font);

        horizontalLayout_5->addWidget(quantitylabel);

        quantityline = new QLineEdit(widget);
        quantityline->setObjectName(QString::fromUtf8("quantityline"));
        quantityline->setFont(font);

        horizontalLayout_5->addWidget(quantityline, 0, Qt::AlignHCenter);


        verticalLayout->addLayout(horizontalLayout_5);


        retranslateUi(AddItem);

        QMetaObject::connectSlotsByName(AddItem);
    } // setupUi

    void retranslateUi(QDialog *AddItem)
    {
        AddItem->setWindowTitle(QCoreApplication::translate("AddItem", "Dialog", nullptr));
        confirmbutton->setText(QCoreApplication::translate("AddItem", "Confirm", nullptr));
        namelabel->setText(QCoreApplication::translate("AddItem", "Name", nullptr));
        typelabel->setText(QCoreApplication::translate("AddItem", "Type", nullptr));
        companylabel->setText(QCoreApplication::translate("AddItem", "Company", nullptr));
        pricelabel->setText(QCoreApplication::translate("AddItem", "Price", nullptr));
        quantitylabel->setText(QCoreApplication::translate("AddItem", "Quantity", nullptr));
    } // retranslateUi

};

namespace Ui {
    class AddItem: public Ui_AddItem {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADDITEM_H
