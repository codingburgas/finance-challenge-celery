/********************************************************************************
** Form generated from reading UI file 'register.ui'
**
** Created by: Qt User Interface Compiler version 6.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_REGISTER_H
#define UI_REGISTER_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>

QT_BEGIN_NAMESPACE

class Ui_Register
{
public:
    QLabel *welcome;
    QLabel *username_create;
    QLabel *addEmail;
    QLabel *password;
    QLineEdit *lineEdit;
    QLineEdit *lineEdit_2;
    QLineEdit *lineEdit_3;
    QLabel *haveAccount;
    QLabel *username_logIn;
    QLabel *password_logIn;
    QLineEdit *lineEdit_4;
    QLineEdit *lineEdit_5;
    QLabel *signInbtn;
    QLabel *signInbtn_2;

    void setupUi(QDialog *Register)
    {
        if (Register->objectName().isEmpty())
            Register->setObjectName("Register");
        Register->resize(1920, 1080);
        Register->setStyleSheet(QString::fromUtf8("color: rgb(178, 215, 138);\n"
"font-size: 28px;\n"
"font: bold;"));
        welcome = new QLabel(Register);
        welcome->setObjectName("welcome");
        welcome->setGeometry(QRect(180, 100, 311, 61));
        welcome->setStyleSheet(QString::fromUtf8("color: rgb(182, 253, 51);\n"
"font: bold;\n"
"font-size: 64px;\n"
""));
        username_create = new QLabel(Register);
        username_create->setObjectName("username_create");
        username_create->setGeometry(QRect(220, 180, 141, 31));
        username_create->setStyleSheet(QString::fromUtf8("color: rgb(178, 215, 138);\n"
"font-size: 28px;\n"
"font: bold;"));
        addEmail = new QLabel(Register);
        addEmail->setObjectName("addEmail");
        addEmail->setGeometry(QRect(220, 260, 81, 41));
        addEmail->setStyleSheet(QString::fromUtf8("color: rgb(178, 215, 138);\n"
"font-size:28px;\n"
"font: bold;"));
        password = new QLabel(Register);
        password->setObjectName("password");
        password->setGeometry(QRect(220, 340, 141, 31));
        password->setStyleSheet(QString::fromUtf8("color: rgb(178, 215, 138);\n"
"font-size: 28px;\n"
"font:bold;"));
        lineEdit = new QLineEdit(Register);
        lineEdit->setObjectName("lineEdit");
        lineEdit->setGeometry(QRect(220, 220, 231, 31));
        lineEdit->setStyleSheet(QString::fromUtf8("background-color: rgb(193, 222, 161);\n"
"border-radius: 9px;\n"
""));
        lineEdit_2 = new QLineEdit(Register);
        lineEdit_2->setObjectName("lineEdit_2");
        lineEdit_2->setGeometry(QRect(220, 300, 231, 31));
        lineEdit_2->setStyleSheet(QString::fromUtf8("background-color: rgb(193, 222, 161);\n"
"border-radius: 9px;"));
        lineEdit_3 = new QLineEdit(Register);
        lineEdit_3->setObjectName("lineEdit_3");
        lineEdit_3->setGeometry(QRect(220, 380, 231, 31));
        lineEdit_3->setStyleSheet(QString::fromUtf8("background-color: rgb(193, 222, 161);\n"
"border-radius: 9px;"));
        haveAccount = new QLabel(Register);
        haveAccount->setObjectName("haveAccount");
        haveAccount->setGeometry(QRect(590, 110, 491, 41));
        haveAccount->setStyleSheet(QString::fromUtf8("color: rgb(182, 253, 51);\n"
"font-size: 40px;\n"
"font: bold;"));
        username_logIn = new QLabel(Register);
        username_logIn->setObjectName("username_logIn");
        username_logIn->setGeometry(QRect(620, 180, 161, 31));
        password_logIn = new QLabel(Register);
        password_logIn->setObjectName("password_logIn");
        password_logIn->setGeometry(QRect(620, 260, 151, 31));
        lineEdit_4 = new QLineEdit(Register);
        lineEdit_4->setObjectName("lineEdit_4");
        lineEdit_4->setGeometry(QRect(620, 220, 231, 31));
        lineEdit_4->setStyleSheet(QString::fromUtf8("background-color: rgb(193, 222, 161);\n"
"border-radius: 9px;"));
        lineEdit_5 = new QLineEdit(Register);
        lineEdit_5->setObjectName("lineEdit_5");
        lineEdit_5->setGeometry(QRect(620, 300, 231, 31));
        lineEdit_5->setStyleSheet(QString::fromUtf8("background-color: rgb(193, 222, 161);\n"
"border-radius: 9px;"));
        signInbtn = new QLabel(Register);
        signInbtn->setObjectName("signInbtn");
        signInbtn->setGeometry(QRect(270, 440, 154, 48));
        QFont font;
        font.setFamilies({QString::fromUtf8("Arial")});
        font.setBold(true);
        font.setItalic(false);
        signInbtn->setFont(font);
        signInbtn->setStyleSheet(QString::fromUtf8("color: rgb(236, 250, 226);\n"
"font_size: 30px;\n"
""));
        signInbtn_2 = new QLabel(Register);
        signInbtn_2->setObjectName("signInbtn_2");
        signInbtn_2->setGeometry(QRect(680, 430, 154, 48));
        signInbtn_2->setFont(font);
        signInbtn_2->setStyleSheet(QString::fromUtf8("color: rgb(236, 250, 226);\n"
"font_size: 30px;\n"
""));

        retranslateUi(Register);

        QMetaObject::connectSlotsByName(Register);
    } // setupUi

    void retranslateUi(QDialog *Register)
    {
        Register->setWindowTitle(QCoreApplication::translate("Register", "Dialog", nullptr));
        welcome->setText(QCoreApplication::translate("Register", "Welcome!", nullptr));
        username_create->setText(QCoreApplication::translate("Register", "Username:", nullptr));
        addEmail->setText(QCoreApplication::translate("Register", "Email:", nullptr));
        password->setText(QCoreApplication::translate("Register", "Password:", nullptr));
        haveAccount->setText(QCoreApplication::translate("Register", "Already have an account?", nullptr));
        username_logIn->setText(QCoreApplication::translate("Register", "Username:", nullptr));
        password_logIn->setText(QCoreApplication::translate("Register", "Password:", nullptr));
        signInbtn->setText(QCoreApplication::translate("Register", "Confirm", nullptr));
        signInbtn_2->setText(QCoreApplication::translate("Register", "Log in", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Register: public Ui_Register {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_REGISTER_H
