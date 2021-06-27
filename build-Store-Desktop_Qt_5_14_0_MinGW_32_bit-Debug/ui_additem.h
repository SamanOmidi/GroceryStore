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
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_AddItem
{
public:
    QVBoxLayout *verticalLayout_7;
    QVBoxLayout *verticalLayout_6;
    QHBoxLayout *horizontalLayout_2;
    QVBoxLayout *verticalLayout_3;
    QLabel *namelabel_2;
    QLabel *typelabel_2;
    QLabel *companylabel_2;
    QLabel *pricelabel_2;
    QLabel *quantitylabel_2;
    QSpacerItem *horizontalSpacer;
    QVBoxLayout *verticalLayout_4;
    QLineEdit *NameLine;
    QLineEdit *TypeLine;
    QLineEdit *CompanyLine;
    QLineEdit *PriceLine;
    QLineEdit *QuantityLine;
    QSpacerItem *verticalSpacer;
    QVBoxLayout *verticalLayout_5;
    QHBoxLayout *horizontalLayout_3;
    QPushButton *confirmbutton;
    QSpacerItem *verticalSpacer_2;

    void setupUi(QDialog *AddItem)
    {
        if (AddItem->objectName().isEmpty())
            AddItem->setObjectName(QString::fromUtf8("AddItem"));
        AddItem->resize(381, 285);
        verticalLayout_7 = new QVBoxLayout(AddItem);
        verticalLayout_7->setObjectName(QString::fromUtf8("verticalLayout_7"));
        verticalLayout_6 = new QVBoxLayout();
        verticalLayout_6->setObjectName(QString::fromUtf8("verticalLayout_6"));
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setSpacing(20);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        namelabel_2 = new QLabel(AddItem);
        namelabel_2->setObjectName(QString::fromUtf8("namelabel_2"));
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(namelabel_2->sizePolicy().hasHeightForWidth());
        namelabel_2->setSizePolicy(sizePolicy);
        QFont font;
        font.setPointSize(12);
        namelabel_2->setFont(font);

        verticalLayout_3->addWidget(namelabel_2);

        typelabel_2 = new QLabel(AddItem);
        typelabel_2->setObjectName(QString::fromUtf8("typelabel_2"));
        sizePolicy.setHeightForWidth(typelabel_2->sizePolicy().hasHeightForWidth());
        typelabel_2->setSizePolicy(sizePolicy);
        typelabel_2->setFont(font);

        verticalLayout_3->addWidget(typelabel_2);

        companylabel_2 = new QLabel(AddItem);
        companylabel_2->setObjectName(QString::fromUtf8("companylabel_2"));
        sizePolicy.setHeightForWidth(companylabel_2->sizePolicy().hasHeightForWidth());
        companylabel_2->setSizePolicy(sizePolicy);
        companylabel_2->setFont(font);

        verticalLayout_3->addWidget(companylabel_2);

        pricelabel_2 = new QLabel(AddItem);
        pricelabel_2->setObjectName(QString::fromUtf8("pricelabel_2"));
        sizePolicy.setHeightForWidth(pricelabel_2->sizePolicy().hasHeightForWidth());
        pricelabel_2->setSizePolicy(sizePolicy);
        pricelabel_2->setFont(font);

        verticalLayout_3->addWidget(pricelabel_2);

        quantitylabel_2 = new QLabel(AddItem);
        quantitylabel_2->setObjectName(QString::fromUtf8("quantitylabel_2"));
        sizePolicy.setHeightForWidth(quantitylabel_2->sizePolicy().hasHeightForWidth());
        quantitylabel_2->setSizePolicy(sizePolicy);
        quantitylabel_2->setFont(font);

        verticalLayout_3->addWidget(quantitylabel_2);


        horizontalLayout_2->addLayout(verticalLayout_3);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer);

        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setSpacing(20);
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        NameLine = new QLineEdit(AddItem);
        NameLine->setObjectName(QString::fromUtf8("NameLine"));
        sizePolicy.setHeightForWidth(NameLine->sizePolicy().hasHeightForWidth());
        NameLine->setSizePolicy(sizePolicy);
        NameLine->setFont(font);

        verticalLayout_4->addWidget(NameLine);

        TypeLine = new QLineEdit(AddItem);
        TypeLine->setObjectName(QString::fromUtf8("TypeLine"));
        sizePolicy.setHeightForWidth(TypeLine->sizePolicy().hasHeightForWidth());
        TypeLine->setSizePolicy(sizePolicy);
        TypeLine->setFont(font);

        verticalLayout_4->addWidget(TypeLine);

        CompanyLine = new QLineEdit(AddItem);
        CompanyLine->setObjectName(QString::fromUtf8("CompanyLine"));
        sizePolicy.setHeightForWidth(CompanyLine->sizePolicy().hasHeightForWidth());
        CompanyLine->setSizePolicy(sizePolicy);
        CompanyLine->setFont(font);

        verticalLayout_4->addWidget(CompanyLine);

        PriceLine = new QLineEdit(AddItem);
        PriceLine->setObjectName(QString::fromUtf8("PriceLine"));
        PriceLine->setEnabled(true);
        QSizePolicy sizePolicy1(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(10);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(PriceLine->sizePolicy().hasHeightForWidth());
        PriceLine->setSizePolicy(sizePolicy1);
        PriceLine->setFont(font);

        verticalLayout_4->addWidget(PriceLine);

        QuantityLine = new QLineEdit(AddItem);
        QuantityLine->setObjectName(QString::fromUtf8("QuantityLine"));
        sizePolicy.setHeightForWidth(QuantityLine->sizePolicy().hasHeightForWidth());
        QuantityLine->setSizePolicy(sizePolicy);
        QuantityLine->setFont(font);

        verticalLayout_4->addWidget(QuantityLine);


        horizontalLayout_2->addLayout(verticalLayout_4);


        verticalLayout_6->addLayout(horizontalLayout_2);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_6->addItem(verticalSpacer);

        verticalLayout_5 = new QVBoxLayout();
        verticalLayout_5->setObjectName(QString::fromUtf8("verticalLayout_5"));
        verticalLayout_5->setContentsMargins(0, -1, -1, -1);
        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setSpacing(0);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        confirmbutton = new QPushButton(AddItem);
        confirmbutton->setObjectName(QString::fromUtf8("confirmbutton"));
        sizePolicy.setHeightForWidth(confirmbutton->sizePolicy().hasHeightForWidth());
        confirmbutton->setSizePolicy(sizePolicy);
        confirmbutton->setFont(font);

        horizontalLayout_3->addWidget(confirmbutton);


        verticalLayout_5->addLayout(horizontalLayout_3);


        verticalLayout_6->addLayout(verticalLayout_5);


        verticalLayout_7->addLayout(verticalLayout_6);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_7->addItem(verticalSpacer_2);


        retranslateUi(AddItem);

        QMetaObject::connectSlotsByName(AddItem);
    } // setupUi

    void retranslateUi(QDialog *AddItem)
    {
        AddItem->setWindowTitle(QCoreApplication::translate("AddItem", "Dialog", nullptr));
        namelabel_2->setText(QCoreApplication::translate("AddItem", "Name:", nullptr));
        typelabel_2->setText(QCoreApplication::translate("AddItem", "Type:", nullptr));
        companylabel_2->setText(QCoreApplication::translate("AddItem", "Company:", nullptr));
        pricelabel_2->setText(QCoreApplication::translate("AddItem", "Price:", nullptr));
        quantitylabel_2->setText(QCoreApplication::translate("AddItem", "Quantity:", nullptr));
        confirmbutton->setText(QCoreApplication::translate("AddItem", "Confirm", nullptr));
    } // retranslateUi

};

namespace Ui {
    class AddItem: public Ui_AddItem {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADDITEM_H
