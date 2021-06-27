/********************************************************************************
** Form generated from reading UI file 'loginpage.ui'
**
** Created by: Qt User Interface Compiler version 5.14.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LOGINPAGE_H
#define UI_LOGINPAGE_H

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

class Ui_loginpage
{
public:
    QVBoxLayout *verticalLayout_3;
    QHBoxLayout *horizontalLayout;
    QVBoxLayout *verticalLayout_2;
    QLabel *usernamelabel;
    QLabel *passwordlabel;
    QVBoxLayout *verticalLayout;
    QLineEdit *usernameline;
    QLineEdit *passwordline;
    QSpacerItem *verticalSpacer;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *loginbutton;
    QSpacerItem *horizontalSpacer;
    QPushButton *registerbutton;

    void setupUi(QDialog *loginpage)
    {
        if (loginpage->objectName().isEmpty())
            loginpage->setObjectName(QString::fromUtf8("loginpage"));
        loginpage->resize(385, 179);
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(loginpage->sizePolicy().hasHeightForWidth());
        loginpage->setSizePolicy(sizePolicy);
        loginpage->setStyleSheet(QString::fromUtf8("#loginbutton\n"
"{\n"
"	border-radius: 10px;\n"
"  	background: #BADA55;\n"
"}\n"
"#registerbutton\n"
"{\n"
"	border-radius: 10px;\n"
"  	background: #BADA55;\n"
"}"));
        verticalLayout_3 = new QVBoxLayout(loginpage);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        usernamelabel = new QLabel(loginpage);
        usernamelabel->setObjectName(QString::fromUtf8("usernamelabel"));
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(usernamelabel->sizePolicy().hasHeightForWidth());
        usernamelabel->setSizePolicy(sizePolicy1);
        QFont font;
        font.setPointSize(11);
        usernamelabel->setFont(font);

        verticalLayout_2->addWidget(usernamelabel);

        passwordlabel = new QLabel(loginpage);
        passwordlabel->setObjectName(QString::fromUtf8("passwordlabel"));
        sizePolicy1.setHeightForWidth(passwordlabel->sizePolicy().hasHeightForWidth());
        passwordlabel->setSizePolicy(sizePolicy1);
        passwordlabel->setFont(font);

        verticalLayout_2->addWidget(passwordlabel);


        horizontalLayout->addLayout(verticalLayout_2);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        usernameline = new QLineEdit(loginpage);
        usernameline->setObjectName(QString::fromUtf8("usernameline"));
        sizePolicy1.setHeightForWidth(usernameline->sizePolicy().hasHeightForWidth());
        usernameline->setSizePolicy(sizePolicy1);

        verticalLayout->addWidget(usernameline);

        passwordline = new QLineEdit(loginpage);
        passwordline->setObjectName(QString::fromUtf8("passwordline"));
        sizePolicy1.setHeightForWidth(passwordline->sizePolicy().hasHeightForWidth());
        passwordline->setSizePolicy(sizePolicy1);
        passwordline->setEchoMode(QLineEdit::Password);

        verticalLayout->addWidget(passwordline);


        horizontalLayout->addLayout(verticalLayout);


        verticalLayout_3->addLayout(horizontalLayout);

        verticalSpacer = new QSpacerItem(20, 5, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout_3->addItem(verticalSpacer);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        loginbutton = new QPushButton(loginpage);
        loginbutton->setObjectName(QString::fromUtf8("loginbutton"));
        loginbutton->setFont(font);

        horizontalLayout_2->addWidget(loginbutton);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer);

        registerbutton = new QPushButton(loginpage);
        registerbutton->setObjectName(QString::fromUtf8("registerbutton"));
        QSizePolicy sizePolicy2(QSizePolicy::Minimum, QSizePolicy::Fixed);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(registerbutton->sizePolicy().hasHeightForWidth());
        registerbutton->setSizePolicy(sizePolicy2);
        registerbutton->setFont(font);

        horizontalLayout_2->addWidget(registerbutton);


        verticalLayout_3->addLayout(horizontalLayout_2);


        retranslateUi(loginpage);

        QMetaObject::connectSlotsByName(loginpage);
    } // setupUi

    void retranslateUi(QDialog *loginpage)
    {
        loginpage->setWindowTitle(QCoreApplication::translate("loginpage", "Dialog", nullptr));
        usernamelabel->setText(QCoreApplication::translate("loginpage", "Username:", nullptr));
        passwordlabel->setText(QCoreApplication::translate("loginpage", "Password:", nullptr));
        loginbutton->setText(QCoreApplication::translate("loginpage", "Login", nullptr));
        registerbutton->setText(QCoreApplication::translate("loginpage", "Register", nullptr));
    } // retranslateUi

};

namespace Ui {
    class loginpage: public Ui_loginpage {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LOGINPAGE_H
