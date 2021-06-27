/********************************************************************************
** Form generated from reading UI file 'addnewgroup.ui'
**
** Created by: Qt User Interface Compiler version 5.14.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADDNEWGROUP_H
#define UI_ADDNEWGROUP_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_AddNewGroup
{
public:
    QVBoxLayout *verticalLayout_2;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_2;
    QSpacerItem *horizontalSpacer_3;
    QLabel *productstypeslabel;
    QSpacerItem *horizontalSpacer_4;
    QSpacerItem *verticalSpacer_3;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer_5;
    QTextBrowser *itemstypesText;
    QSpacerItem *horizontalSpacer_6;
    QSpacerItem *verticalSpacer_2;
    QHBoxLayout *horizontalLayout_3;
    QLabel *questionlabel;
    QSpacerItem *horizontalSpacer_7;
    QLineEdit *answerline;
    QSpacerItem *verticalSpacer;
    QHBoxLayout *horizontalLayout_4;
    QSpacerItem *horizontalSpacer;
    QPushButton *confirmbutton;
    QSpacerItem *horizontalSpacer_2;

    void setupUi(QDialog *AddNewGroup)
    {
        if (AddNewGroup->objectName().isEmpty())
            AddNewGroup->setObjectName(QString::fromUtf8("AddNewGroup"));
        AddNewGroup->resize(504, 409);
        verticalLayout_2 = new QVBoxLayout(AddNewGroup);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_3);

        productstypeslabel = new QLabel(AddNewGroup);
        productstypeslabel->setObjectName(QString::fromUtf8("productstypeslabel"));
        QFont font;
        font.setPointSize(11);
        productstypeslabel->setFont(font);

        horizontalLayout_2->addWidget(productstypeslabel);

        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_4);


        verticalLayout->addLayout(horizontalLayout_2);

        verticalSpacer_3 = new QSpacerItem(20, 5, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout->addItem(verticalSpacer_3);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalSpacer_5 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_5);

        itemstypesText = new QTextBrowser(AddNewGroup);
        itemstypesText->setObjectName(QString::fromUtf8("itemstypesText"));
        itemstypesText->setFont(font);

        horizontalLayout->addWidget(itemstypesText);

        horizontalSpacer_6 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_6);


        verticalLayout->addLayout(horizontalLayout);


        verticalLayout_2->addLayout(verticalLayout);

        verticalSpacer_2 = new QSpacerItem(20, 20, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout_2->addItem(verticalSpacer_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        questionlabel = new QLabel(AddNewGroup);
        questionlabel->setObjectName(QString::fromUtf8("questionlabel"));
        questionlabel->setFont(font);

        horizontalLayout_3->addWidget(questionlabel);

        horizontalSpacer_7 = new QSpacerItem(40, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_7);

        answerline = new QLineEdit(AddNewGroup);
        answerline->setObjectName(QString::fromUtf8("answerline"));
        answerline->setFont(font);

        horizontalLayout_3->addWidget(answerline);


        verticalLayout_2->addLayout(horizontalLayout_3);

        verticalSpacer = new QSpacerItem(20, 20, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout_2->addItem(verticalSpacer);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer);

        confirmbutton = new QPushButton(AddNewGroup);
        confirmbutton->setObjectName(QString::fromUtf8("confirmbutton"));
        confirmbutton->setFont(font);

        horizontalLayout_4->addWidget(confirmbutton);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_2);


        verticalLayout_2->addLayout(horizontalLayout_4);


        retranslateUi(AddNewGroup);

        QMetaObject::connectSlotsByName(AddNewGroup);
    } // setupUi

    void retranslateUi(QDialog *AddNewGroup)
    {
        AddNewGroup->setWindowTitle(QCoreApplication::translate("AddNewGroup", "Dialog", nullptr));
        productstypeslabel->setText(QCoreApplication::translate("AddNewGroup", "Products Types/Categories:", nullptr));
        questionlabel->setText(QCoreApplication::translate("AddNewGroup", "Which Type/Category You Want To Group?", nullptr));
        confirmbutton->setText(QCoreApplication::translate("AddNewGroup", "Confirm", nullptr));
    } // retranslateUi

};

namespace Ui {
    class AddNewGroup: public Ui_AddNewGroup {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADDNEWGROUP_H
