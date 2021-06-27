/********************************************************************************
** Form generated from reading UI file 'customerlogin.ui'
**
** Created by: Qt User Interface Compiler version 5.14.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CUSTOMERLOGIN_H
#define UI_CUSTOMERLOGIN_H

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

class Ui_CustomerLogin
{
public:
    QVBoxLayout *verticalLayout_3;
    QHBoxLayout *horizontalLayout;
    QVBoxLayout *verticalLayout;
    QLabel *usernamelabel;
    QLabel *passwordlabel;
    QSpacerItem *horizontalSpacer;
    QVBoxLayout *verticalLayout_2;
    QLineEdit *usernameline;
    QLineEdit *passwordline;
    QHBoxLayout *horizontalLayout_2;
    QSpacerItem *horizontalSpacer_2;
    QPushButton *loginbutton;
    QPushButton *registerbutton;
    QSpacerItem *horizontalSpacer_3;

    void setupUi(QDialog *CustomerLogin)
    {
        if (CustomerLogin->objectName().isEmpty())
            CustomerLogin->setObjectName(QString::fromUtf8("CustomerLogin"));
        CustomerLogin->resize(306, 217);
        verticalLayout_3 = new QVBoxLayout(CustomerLogin);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        usernamelabel = new QLabel(CustomerLogin);
        usernamelabel->setObjectName(QString::fromUtf8("usernamelabel"));
        QFont font;
        font.setPointSize(11);
        usernamelabel->setFont(font);

        verticalLayout->addWidget(usernamelabel);

        passwordlabel = new QLabel(CustomerLogin);
        passwordlabel->setObjectName(QString::fromUtf8("passwordlabel"));
        passwordlabel->setFont(font);

        verticalLayout->addWidget(passwordlabel);


        horizontalLayout->addLayout(verticalLayout);

        horizontalSpacer = new QSpacerItem(10, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        usernameline = new QLineEdit(CustomerLogin);
        usernameline->setObjectName(QString::fromUtf8("usernameline"));

        verticalLayout_2->addWidget(usernameline);

        passwordline = new QLineEdit(CustomerLogin);
        passwordline->setObjectName(QString::fromUtf8("passwordline"));

        verticalLayout_2->addWidget(passwordline);


        horizontalLayout->addLayout(verticalLayout_2);


        verticalLayout_3->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_2);

        loginbutton = new QPushButton(CustomerLogin);
        loginbutton->setObjectName(QString::fromUtf8("loginbutton"));
        loginbutton->setFont(font);

        horizontalLayout_2->addWidget(loginbutton);

        registerbutton = new QPushButton(CustomerLogin);
        registerbutton->setObjectName(QString::fromUtf8("registerbutton"));
        registerbutton->setFont(font);

        horizontalLayout_2->addWidget(registerbutton);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_3);


        verticalLayout_3->addLayout(horizontalLayout_2);


        retranslateUi(CustomerLogin);

        QMetaObject::connectSlotsByName(CustomerLogin);
    } // setupUi

    void retranslateUi(QDialog *CustomerLogin)
    {
        CustomerLogin->setWindowTitle(QCoreApplication::translate("CustomerLogin", "Customer Login", nullptr));
        usernamelabel->setText(QCoreApplication::translate("CustomerLogin", "Username:", nullptr));
        passwordlabel->setText(QCoreApplication::translate("CustomerLogin", "Password:", nullptr));
        loginbutton->setText(QCoreApplication::translate("CustomerLogin", "Login", nullptr));
        registerbutton->setText(QCoreApplication::translate("CustomerLogin", "Register", nullptr));
    } // retranslateUi

};

namespace Ui {
    class CustomerLogin: public Ui_CustomerLogin {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CUSTOMERLOGIN_H
