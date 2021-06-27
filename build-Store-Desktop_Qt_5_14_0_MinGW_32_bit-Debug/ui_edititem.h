/********************************************************************************
** Form generated from reading UI file 'edititem.ui'
**
** Created by: Qt User Interface Compiler version 5.14.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_EDITITEM_H
#define UI_EDITITEM_H

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

class Ui_EditItem
{
public:
    QVBoxLayout *verticalLayout_4;
    QSpacerItem *verticalSpacer;
    QVBoxLayout *verticalLayout_3;
    QHBoxLayout *horizontalLayout;
    QVBoxLayout *verticalLayout_2;
    QLabel *namelabel;
    QLabel *typelabel;
    QLabel *companylabel;
    QLabel *pricelabel;
    QLabel *quantitylabel;
    QVBoxLayout *verticalLayout;
    QLineEdit *nameline;
    QLineEdit *typeline;
    QLineEdit *companyline;
    QLineEdit *priceline;
    QLineEdit *quantityline;
    QSpacerItem *verticalSpacer_3;
    QHBoxLayout *horizontalLayout_2;
    QSpacerItem *horizontalSpacer;
    QPushButton *confirmbutton;
    QSpacerItem *horizontalSpacer_2;
    QSpacerItem *verticalSpacer_4;

    void setupUi(QDialog *EditItem)
    {
        if (EditItem->objectName().isEmpty())
            EditItem->setObjectName(QString::fromUtf8("EditItem"));
        EditItem->resize(411, 399);
        verticalLayout_4 = new QVBoxLayout(EditItem);
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        verticalSpacer = new QSpacerItem(20, 30, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout_4->addItem(verticalSpacer);

        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        verticalLayout_3->setSizeConstraint(QLayout::SetDefaultConstraint);
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setSpacing(20);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        namelabel = new QLabel(EditItem);
        namelabel->setObjectName(QString::fromUtf8("namelabel"));
        QFont font;
        font.setPointSize(12);
        namelabel->setFont(font);

        verticalLayout_2->addWidget(namelabel);

        typelabel = new QLabel(EditItem);
        typelabel->setObjectName(QString::fromUtf8("typelabel"));
        typelabel->setFont(font);

        verticalLayout_2->addWidget(typelabel);

        companylabel = new QLabel(EditItem);
        companylabel->setObjectName(QString::fromUtf8("companylabel"));
        companylabel->setFont(font);

        verticalLayout_2->addWidget(companylabel);

        pricelabel = new QLabel(EditItem);
        pricelabel->setObjectName(QString::fromUtf8("pricelabel"));
        pricelabel->setFont(font);

        verticalLayout_2->addWidget(pricelabel);

        quantitylabel = new QLabel(EditItem);
        quantitylabel->setObjectName(QString::fromUtf8("quantitylabel"));
        quantitylabel->setFont(font);

        verticalLayout_2->addWidget(quantitylabel);


        horizontalLayout->addLayout(verticalLayout_2);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(20);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        nameline = new QLineEdit(EditItem);
        nameline->setObjectName(QString::fromUtf8("nameline"));
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(nameline->sizePolicy().hasHeightForWidth());
        nameline->setSizePolicy(sizePolicy);
        nameline->setFont(font);

        verticalLayout->addWidget(nameline);

        typeline = new QLineEdit(EditItem);
        typeline->setObjectName(QString::fromUtf8("typeline"));
        sizePolicy.setHeightForWidth(typeline->sizePolicy().hasHeightForWidth());
        typeline->setSizePolicy(sizePolicy);
        typeline->setFont(font);

        verticalLayout->addWidget(typeline);

        companyline = new QLineEdit(EditItem);
        companyline->setObjectName(QString::fromUtf8("companyline"));
        sizePolicy.setHeightForWidth(companyline->sizePolicy().hasHeightForWidth());
        companyline->setSizePolicy(sizePolicy);
        companyline->setFont(font);

        verticalLayout->addWidget(companyline);

        priceline = new QLineEdit(EditItem);
        priceline->setObjectName(QString::fromUtf8("priceline"));
        sizePolicy.setHeightForWidth(priceline->sizePolicy().hasHeightForWidth());
        priceline->setSizePolicy(sizePolicy);
        priceline->setFont(font);

        verticalLayout->addWidget(priceline);

        quantityline = new QLineEdit(EditItem);
        quantityline->setObjectName(QString::fromUtf8("quantityline"));
        sizePolicy.setHeightForWidth(quantityline->sizePolicy().hasHeightForWidth());
        quantityline->setSizePolicy(sizePolicy);
        quantityline->setFont(font);

        verticalLayout->addWidget(quantityline);


        horizontalLayout->addLayout(verticalLayout);


        verticalLayout_3->addLayout(horizontalLayout);

        verticalSpacer_3 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_3->addItem(verticalSpacer_3);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, -1, 0, -1);
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer);

        confirmbutton = new QPushButton(EditItem);
        confirmbutton->setObjectName(QString::fromUtf8("confirmbutton"));
        confirmbutton->setFont(font);

        horizontalLayout_2->addWidget(confirmbutton);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_2);


        verticalLayout_3->addLayout(horizontalLayout_2);


        verticalLayout_4->addLayout(verticalLayout_3);

        verticalSpacer_4 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_4->addItem(verticalSpacer_4);


        retranslateUi(EditItem);

        QMetaObject::connectSlotsByName(EditItem);
    } // setupUi

    void retranslateUi(QDialog *EditItem)
    {
        EditItem->setWindowTitle(QCoreApplication::translate("EditItem", "Dialog", nullptr));
        namelabel->setText(QCoreApplication::translate("EditItem", "Name", nullptr));
        typelabel->setText(QCoreApplication::translate("EditItem", "Type", nullptr));
        companylabel->setText(QCoreApplication::translate("EditItem", "Company", nullptr));
        pricelabel->setText(QCoreApplication::translate("EditItem", "Price", nullptr));
        quantitylabel->setText(QCoreApplication::translate("EditItem", "Quantity", nullptr));
        confirmbutton->setText(QCoreApplication::translate("EditItem", "Confirm", nullptr));
    } // retranslateUi

};

namespace Ui {
    class EditItem: public Ui_EditItem {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_EDITITEM_H
