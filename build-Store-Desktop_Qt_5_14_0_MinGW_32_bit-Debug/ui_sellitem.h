/********************************************************************************
** Form generated from reading UI file 'sellitem.ui'
**
** Created by: Qt User Interface Compiler version 5.14.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SELLITEM_H
#define UI_SELLITEM_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_SellItem
{
public:
    QVBoxLayout *verticalLayout_3;
    QHBoxLayout *horizontalLayout;
    QVBoxLayout *verticalLayout_2;
    QLabel *nameofproductlabel;
    QLabel *prclabel;
    QLabel *qntlabel;
    QVBoxLayout *verticalLayout;
    QLabel *namelabel;
    QLabel *pricelabel;
    QLabel *quantitylabel;
    QHBoxLayout *horizontalLayout_2;
    QLabel *numberofselllabel;
    QSpacerItem *horizontalSpacer;
    QSpinBox *numberofsellspinbox;
    QHBoxLayout *horizontalLayout_3;
    QSpacerItem *horizontalSpacer_3;
    QPushButton *sellbutton;
    QSpacerItem *horizontalSpacer_2;
    QPushButton *cancelbutton;
    QSpacerItem *horizontalSpacer_4;

    void setupUi(QDialog *SellItem)
    {
        if (SellItem->objectName().isEmpty())
            SellItem->setObjectName(QString::fromUtf8("SellItem"));
        SellItem->resize(419, 328);
        verticalLayout_3 = new QVBoxLayout(SellItem);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        nameofproductlabel = new QLabel(SellItem);
        nameofproductlabel->setObjectName(QString::fromUtf8("nameofproductlabel"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(nameofproductlabel->sizePolicy().hasHeightForWidth());
        nameofproductlabel->setSizePolicy(sizePolicy);
        QFont font;
        font.setPointSize(11);
        nameofproductlabel->setFont(font);

        verticalLayout_2->addWidget(nameofproductlabel);

        prclabel = new QLabel(SellItem);
        prclabel->setObjectName(QString::fromUtf8("prclabel"));
        sizePolicy.setHeightForWidth(prclabel->sizePolicy().hasHeightForWidth());
        prclabel->setSizePolicy(sizePolicy);
        prclabel->setFont(font);

        verticalLayout_2->addWidget(prclabel);

        qntlabel = new QLabel(SellItem);
        qntlabel->setObjectName(QString::fromUtf8("qntlabel"));
        sizePolicy.setHeightForWidth(qntlabel->sizePolicy().hasHeightForWidth());
        qntlabel->setSizePolicy(sizePolicy);
        qntlabel->setFont(font);

        verticalLayout_2->addWidget(qntlabel);


        horizontalLayout->addLayout(verticalLayout_2);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        namelabel = new QLabel(SellItem);
        namelabel->setObjectName(QString::fromUtf8("namelabel"));
        sizePolicy.setHeightForWidth(namelabel->sizePolicy().hasHeightForWidth());
        namelabel->setSizePolicy(sizePolicy);
        namelabel->setMaximumSize(QSize(16777215, 25));
        namelabel->setFont(font);
        namelabel->setFrameShape(QFrame::Panel);

        verticalLayout->addWidget(namelabel);

        pricelabel = new QLabel(SellItem);
        pricelabel->setObjectName(QString::fromUtf8("pricelabel"));
        sizePolicy.setHeightForWidth(pricelabel->sizePolicy().hasHeightForWidth());
        pricelabel->setSizePolicy(sizePolicy);
        pricelabel->setMaximumSize(QSize(16777215, 25));
        pricelabel->setFont(font);
        pricelabel->setFrameShape(QFrame::Panel);

        verticalLayout->addWidget(pricelabel);

        quantitylabel = new QLabel(SellItem);
        quantitylabel->setObjectName(QString::fromUtf8("quantitylabel"));
        sizePolicy.setHeightForWidth(quantitylabel->sizePolicy().hasHeightForWidth());
        quantitylabel->setSizePolicy(sizePolicy);
        quantitylabel->setMaximumSize(QSize(16777215, 25));
        quantitylabel->setFont(font);
        quantitylabel->setFrameShape(QFrame::Panel);

        verticalLayout->addWidget(quantitylabel);


        horizontalLayout->addLayout(verticalLayout);


        verticalLayout_3->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        numberofselllabel = new QLabel(SellItem);
        numberofselllabel->setObjectName(QString::fromUtf8("numberofselllabel"));
        numberofselllabel->setFont(font);

        horizontalLayout_2->addWidget(numberofselllabel);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer);

        numberofsellspinbox = new QSpinBox(SellItem);
        numberofsellspinbox->setObjectName(QString::fromUtf8("numberofsellspinbox"));
        numberofsellspinbox->setFont(font);
        numberofsellspinbox->setMaximum(99999);

        horizontalLayout_2->addWidget(numberofsellspinbox);


        verticalLayout_3->addLayout(horizontalLayout_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_3);

        sellbutton = new QPushButton(SellItem);
        sellbutton->setObjectName(QString::fromUtf8("sellbutton"));
        sellbutton->setFont(font);

        horizontalLayout_3->addWidget(sellbutton);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_2);

        cancelbutton = new QPushButton(SellItem);
        cancelbutton->setObjectName(QString::fromUtf8("cancelbutton"));
        cancelbutton->setFont(font);

        horizontalLayout_3->addWidget(cancelbutton);

        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_4);


        verticalLayout_3->addLayout(horizontalLayout_3);


        retranslateUi(SellItem);

        QMetaObject::connectSlotsByName(SellItem);
    } // setupUi

    void retranslateUi(QDialog *SellItem)
    {
        SellItem->setWindowTitle(QCoreApplication::translate("SellItem", "Dialog", nullptr));
        nameofproductlabel->setText(QCoreApplication::translate("SellItem", "Name Of Product:", nullptr));
        prclabel->setText(QCoreApplication::translate("SellItem", "Price:", nullptr));
        qntlabel->setText(QCoreApplication::translate("SellItem", "Quantity:", nullptr));
        namelabel->setText(QString());
        pricelabel->setText(QString());
        quantitylabel->setText(QString());
        numberofselllabel->setText(QCoreApplication::translate("SellItem", "How much/many do you want to sell ?", nullptr));
        sellbutton->setText(QCoreApplication::translate("SellItem", "Sell", nullptr));
        cancelbutton->setText(QCoreApplication::translate("SellItem", "Cancel", nullptr));
    } // retranslateUi

};

namespace Ui {
    class SellItem: public Ui_SellItem {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SELLITEM_H
