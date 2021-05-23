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
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_loginpage
{
public:
    QPushButton *loginbutton;
    QPushButton *registerbutton;
    QWidget *widget;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *usernamelabel;
    QSpacerItem *horizontalSpacer;
    QLineEdit *usernameline;
    QHBoxLayout *horizontalLayout_2;
    QLabel *passwordlabel;
    QSpacerItem *horizontalSpacer_2;
    QLineEdit *passwordline;

    void setupUi(QDialog *loginpage)
    {
        if (loginpage->objectName().isEmpty())
            loginpage->setObjectName(QString::fromUtf8("loginpage"));
        loginpage->resize(500, 500);
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
        loginbutton = new QPushButton(loginpage);
        loginbutton->setObjectName(QString::fromUtf8("loginbutton"));
        loginbutton->setGeometry(QRect(120, 240, 121, 28));
        QFont font;
        font.setPointSize(11);
        loginbutton->setFont(font);
        registerbutton = new QPushButton(loginpage);
        registerbutton->setObjectName(QString::fromUtf8("registerbutton"));
        registerbutton->setGeometry(QRect(280, 240, 131, 28));
        registerbutton->setFont(font);
        widget = new QWidget(loginpage);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(120, 160, 289, 62));
        verticalLayout = new QVBoxLayout(widget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        usernamelabel = new QLabel(widget);
        usernamelabel->setObjectName(QString::fromUtf8("usernamelabel"));
        usernamelabel->setFont(font);

        horizontalLayout->addWidget(usernamelabel);

        horizontalSpacer = new QSpacerItem(60, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        usernameline = new QLineEdit(widget);
        usernameline->setObjectName(QString::fromUtf8("usernameline"));
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(usernameline->sizePolicy().hasHeightForWidth());
        usernameline->setSizePolicy(sizePolicy);

        horizontalLayout->addWidget(usernameline);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        passwordlabel = new QLabel(widget);
        passwordlabel->setObjectName(QString::fromUtf8("passwordlabel"));
        passwordlabel->setFont(font);

        horizontalLayout_2->addWidget(passwordlabel);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_2);

        passwordline = new QLineEdit(widget);
        passwordline->setObjectName(QString::fromUtf8("passwordline"));
        passwordline->setEchoMode(QLineEdit::Password);

        horizontalLayout_2->addWidget(passwordline);


        verticalLayout->addLayout(horizontalLayout_2);


        retranslateUi(loginpage);

        QMetaObject::connectSlotsByName(loginpage);
    } // setupUi

    void retranslateUi(QDialog *loginpage)
    {
        loginpage->setWindowTitle(QCoreApplication::translate("loginpage", "Dialog", nullptr));
        loginbutton->setText(QCoreApplication::translate("loginpage", "Login", nullptr));
        registerbutton->setText(QCoreApplication::translate("loginpage", "Register", nullptr));
        usernamelabel->setText(QCoreApplication::translate("loginpage", "Username:", nullptr));
        passwordlabel->setText(QCoreApplication::translate("loginpage", "Password:", nullptr));
    } // retranslateUi

};

namespace Ui {
    class loginpage: public Ui_loginpage {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LOGINPAGE_H
