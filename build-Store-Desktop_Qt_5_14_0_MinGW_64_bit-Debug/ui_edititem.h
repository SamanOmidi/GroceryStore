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
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_edititem
{
public:
    QPushButton *confirmbutton;
    QWidget *layoutWidget;
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

    void setupUi(QDialog *edititem)
    {
        if (edititem->objectName().isEmpty())
            edititem->setObjectName(QString::fromUtf8("edititem"));
        edititem->resize(400, 366);
        confirmbutton = new QPushButton(edititem);
        confirmbutton->setObjectName(QString::fromUtf8("confirmbutton"));
        confirmbutton->setGeometry(QRect(140, 307, 111, 31));
        QFont font;
        font.setPointSize(12);
        confirmbutton->setFont(font);
        layoutWidget = new QWidget(edititem);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(40, 20, 301, 186));
        verticalLayout = new QVBoxLayout(layoutWidget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        namelabel = new QLabel(layoutWidget);
        namelabel->setObjectName(QString::fromUtf8("namelabel"));
        namelabel->setFont(font);

        horizontalLayout->addWidget(namelabel);

        nameline = new QLineEdit(layoutWidget);
        nameline->setObjectName(QString::fromUtf8("nameline"));
        nameline->setFont(font);

        horizontalLayout->addWidget(nameline, 0, Qt::AlignHCenter|Qt::AlignVCenter);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        typelabel = new QLabel(layoutWidget);
        typelabel->setObjectName(QString::fromUtf8("typelabel"));
        typelabel->setFont(font);

        horizontalLayout_2->addWidget(typelabel);

        typeline = new QLineEdit(layoutWidget);
        typeline->setObjectName(QString::fromUtf8("typeline"));
        typeline->setFont(font);

        horizontalLayout_2->addWidget(typeline, 0, Qt::AlignHCenter);


        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        companylabel = new QLabel(layoutWidget);
        companylabel->setObjectName(QString::fromUtf8("companylabel"));
        companylabel->setFont(font);

        horizontalLayout_3->addWidget(companylabel);

        companyline = new QLineEdit(layoutWidget);
        companyline->setObjectName(QString::fromUtf8("companyline"));
        companyline->setFont(font);

        horizontalLayout_3->addWidget(companyline, 0, Qt::AlignHCenter);


        verticalLayout->addLayout(horizontalLayout_3);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        pricelabel = new QLabel(layoutWidget);
        pricelabel->setObjectName(QString::fromUtf8("pricelabel"));
        pricelabel->setFont(font);

        horizontalLayout_4->addWidget(pricelabel);

        priceline = new QLineEdit(layoutWidget);
        priceline->setObjectName(QString::fromUtf8("priceline"));
        priceline->setFont(font);

        horizontalLayout_4->addWidget(priceline, 0, Qt::AlignHCenter);


        verticalLayout->addLayout(horizontalLayout_4);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        quantitylabel = new QLabel(layoutWidget);
        quantitylabel->setObjectName(QString::fromUtf8("quantitylabel"));
        quantitylabel->setFont(font);

        horizontalLayout_5->addWidget(quantitylabel);

        quantityline = new QLineEdit(layoutWidget);
        quantityline->setObjectName(QString::fromUtf8("quantityline"));
        quantityline->setFont(font);

        horizontalLayout_5->addWidget(quantityline, 0, Qt::AlignHCenter);


        verticalLayout->addLayout(horizontalLayout_5);


        retranslateUi(edititem);

        QMetaObject::connectSlotsByName(edititem);
    } // setupUi

    void retranslateUi(QDialog *edititem)
    {
        edititem->setWindowTitle(QCoreApplication::translate("edititem", "Dialog", nullptr));
        confirmbutton->setText(QCoreApplication::translate("edititem", "Confirm", nullptr));
        namelabel->setText(QCoreApplication::translate("edititem", "Name", nullptr));
        typelabel->setText(QCoreApplication::translate("edititem", "Type", nullptr));
        companylabel->setText(QCoreApplication::translate("edititem", "Company", nullptr));
        pricelabel->setText(QCoreApplication::translate("edititem", "Price", nullptr));
        quantitylabel->setText(QCoreApplication::translate("edititem", "Quantity", nullptr));
    } // retranslateUi

};

namespace Ui {
    class edititem: public Ui_edititem {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_EDITITEM_H
