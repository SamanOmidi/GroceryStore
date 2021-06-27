/********************************************************************************
** Form generated from reading UI file 'start.ui'
**
** Created by: Qt User Interface Compiler version 5.14.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_START_H
#define UI_START_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_Start
{
public:
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QRadioButton *adminradiobutton;
    QHBoxLayout *horizontalLayout_2;
    QRadioButton *customerradiobutton;
    QHBoxLayout *horizontalLayout_3;
    QSpacerItem *horizontalSpacer;
    QPushButton *enterbutton;
    QSpacerItem *horizontalSpacer_2;

    void setupUi(QDialog *Start)
    {
        if (Start->objectName().isEmpty())
            Start->setObjectName(QString::fromUtf8("Start"));
        Start->resize(197, 189);
        verticalLayout = new QVBoxLayout(Start);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        adminradiobutton = new QRadioButton(Start);
        adminradiobutton->setObjectName(QString::fromUtf8("adminradiobutton"));
        QFont font;
        font.setPointSize(11);
        adminradiobutton->setFont(font);

        horizontalLayout->addWidget(adminradiobutton);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        customerradiobutton = new QRadioButton(Start);
        customerradiobutton->setObjectName(QString::fromUtf8("customerradiobutton"));
        customerradiobutton->setFont(font);

        horizontalLayout_2->addWidget(customerradiobutton);


        horizontalLayout->addLayout(horizontalLayout_2);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer);

        enterbutton = new QPushButton(Start);
        enterbutton->setObjectName(QString::fromUtf8("enterbutton"));
        enterbutton->setFont(font);

        horizontalLayout_3->addWidget(enterbutton);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_2);


        verticalLayout->addLayout(horizontalLayout_3);


        retranslateUi(Start);

        QMetaObject::connectSlotsByName(Start);
    } // setupUi

    void retranslateUi(QDialog *Start)
    {
        Start->setWindowTitle(QCoreApplication::translate("Start", "Dialog", nullptr));
        adminradiobutton->setText(QCoreApplication::translate("Start", "Admin", nullptr));
        customerradiobutton->setText(QCoreApplication::translate("Start", "Customer", nullptr));
        enterbutton->setText(QCoreApplication::translate("Start", "Enter", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Start: public Ui_Start {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_START_H
