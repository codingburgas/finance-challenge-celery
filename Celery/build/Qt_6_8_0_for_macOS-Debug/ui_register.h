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
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_Register
{
public:
    QLabel *welcome;
    QLabel *username_create;
    QLabel *addEmail;
    QLabel *password;
    QLineEdit *regUser;
    QLineEdit *regPass;
    QLineEdit *regEmail;
    QLabel *haveAccount;
    QLabel *username_logIn;
    QLabel *password_logIn;
    QLineEdit *logUser;
    QLineEdit *logPass;
    QLabel *backgrounddd;
    QPushButton *loginButton;
    QPushButton *confirmButton;

    void setupUi(QDialog *Register)
    {
        if (Register->objectName().isEmpty())
            Register->setObjectName("Register");
        Register->resize(1500, 775);
        Register->setStyleSheet(QString::fromUtf8("color: rgb(178, 215, 138);\n"
"font-size: 28px;\n"
"font: bold;"));
        welcome = new QLabel(Register);
        welcome->setObjectName("welcome");
        welcome->setGeometry(QRect(423, 193, 311, 61));
        QFont font;
        font.setBold(true);
        font.setItalic(false);
        welcome->setFont(font);
        welcome->setStyleSheet(QString::fromUtf8("color: rgb(182, 253, 51);\n"
"font: bold;\n"
"font-size:46px;\n"
""));
        username_create = new QLabel(Register);
        username_create->setObjectName("username_create");
        username_create->setGeometry(QRect(428, 270, 141, 31));
        username_create->setStyleSheet(QString::fromUtf8("color: rgb(178, 215, 138);\n"
"font-size: 20px;\n"
""));
        addEmail = new QLabel(Register);
        addEmail->setObjectName("addEmail");
        addEmail->setGeometry(QRect(428, 353, 81, 41));
        addEmail->setStyleSheet(QString::fromUtf8("color: rgb(178, 215, 138);\n"
"font-size:20px;\n"
""));
        password = new QLabel(Register);
        password->setObjectName("password");
        password->setGeometry(QRect(428, 444, 141, 31));
        password->setStyleSheet(QString::fromUtf8("color: rgb(178, 215, 138);\n"
"font-size: 20px;\n"
""));
        regUser = new QLineEdit(Register);
        regUser->setObjectName("regUser");
        regUser->setGeometry(QRect(429, 302, 292, 51));
        regUser->setStyleSheet(QString::fromUtf8("background-color: rgb(193, 222, 161);\n"
"border-radius: 9px;\n"
" padding: 10px;\n"
"color: white;\n"
"font-size:20px;"));
        regPass = new QLineEdit(Register);
        regPass->setObjectName("regPass");
        regPass->setGeometry(QRect(429, 487, 292, 51));
        regPass->setStyleSheet(QString::fromUtf8("background-color: rgb(193, 222, 161);\n"
"border-radius: 9px;\n"
" padding: 10px;\n"
"color: white;\n"
"font-size:20px;"));
        regEmail = new QLineEdit(Register);
        regEmail->setObjectName("regEmail");
        regEmail->setGeometry(QRect(429, 387, 292, 51));
        regEmail->setStyleSheet(QString::fromUtf8("background-color: rgb(193, 222, 161);\n"
"border-radius: 9px;\n"
" padding: 10px;\n"
"color: white;\n"
"font-size:20px;"));
        haveAccount = new QLabel(Register);
        haveAccount->setObjectName("haveAccount");
        haveAccount->setGeometry(QRect(834, 185, 491, 91));
        haveAccount->setFont(font);
        haveAccount->setStyleSheet(QString::fromUtf8("color: rgb(182, 253, 51);\n"
"font-size: 35px;\n"
"font: bold;\n"
"line-height: 10px;"));
        username_logIn = new QLabel(Register);
        username_logIn->setObjectName("username_logIn");
        username_logIn->setGeometry(QRect(832, 270, 161, 31));
        username_logIn->setStyleSheet(QString::fromUtf8("font-size:20px;"));
        password_logIn = new QLabel(Register);
        password_logIn->setObjectName("password_logIn");
        password_logIn->setGeometry(QRect(834, 364, 151, 31));
        password_logIn->setStyleSheet(QString::fromUtf8("font-size:20px;"));
        logUser = new QLineEdit(Register);
        logUser->setObjectName("logUser");
        logUser->setGeometry(QRect(833, 302, 292, 51));
        logUser->setFont(font);
        logUser->setStyleSheet(QString::fromUtf8("background-color: rgb(193, 222, 161);\n"
"border-radius: 9px;\n"
" padding: 10px;\n"
"color: white;\n"
"font-size:20px;\n"
""));
        logPass = new QLineEdit(Register);
        logPass->setObjectName("logPass");
        logPass->setGeometry(QRect(833, 396, 292, 51));
        logPass->setStyleSheet(QString::fromUtf8("background-color: rgb(193, 222, 161);\n"
"border-radius: 9px;\n"
" padding: 10px;\n"
"color: white;\n"
"font-size:20px;"));
        backgrounddd = new QLabel(Register);
        backgrounddd->setObjectName("backgrounddd");
        backgrounddd->setGeometry(QRect(0, 0, 1500, 775));
        loginButton = new QPushButton(Register);
        loginButton->setObjectName("loginButton");
        loginButton->setGeometry(QRect(833, 561, 104, 42));
        QFont font1;
        font1.setFamilies({QString::fromUtf8("Arial")});
        font1.setBold(true);
        font1.setItalic(false);
        loginButton->setFont(font1);
        loginButton->setCursor(QCursor(Qt::CursorShape::ArrowCursor));
        loginButton->setAutoFillBackground(false);
        loginButton->setStyleSheet(QString::fromUtf8("background-color: transparent;\n"
"         border-radius: 70px;\n"
"  font: bold;"));
        confirmButton = new QPushButton(Register);
        confirmButton->setObjectName("confirmButton");
        confirmButton->setGeometry(QRect(429, 561, 120, 45));
        confirmButton->setFont(font1);
        confirmButton->setCursor(QCursor(Qt::CursorShape::ArrowCursor));
        confirmButton->setAutoFillBackground(false);
        confirmButton->setStyleSheet(QString::fromUtf8("background-color: transparent;\n"
"          border-radius: 70px;\n"
"          font: bold;"));
        backgrounddd->raise();
        welcome->raise();
        username_create->raise();
        addEmail->raise();
        password->raise();
        regUser->raise();
        regPass->raise();
        regEmail->raise();
        haveAccount->raise();
        username_logIn->raise();
        password_logIn->raise();
        logUser->raise();
        logPass->raise();
        loginButton->raise();
        confirmButton->raise();

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
        haveAccount->setText(QCoreApplication::translate("Register", "Already have an \n"
"account?", nullptr));
        username_logIn->setText(QCoreApplication::translate("Register", "Username:", nullptr));
        password_logIn->setText(QCoreApplication::translate("Register", "Password:", nullptr));
        backgrounddd->setText(QCoreApplication::translate("Register", "TextLabel", nullptr));
        loginButton->setText(QCoreApplication::translate("Register", "Log In", nullptr));
        confirmButton->setText(QCoreApplication::translate("Register", "Confirm", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Register: public Ui_Register {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_REGISTER_H