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
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QLineEdit *lineEdit;
    QLineEdit *lineEdit_2;
    QLineEdit *lineEdit_3;
    QPushButton *pushButton;
    QLabel *label_5;
    QLabel *label_6;
    QLabel *label_7;
    QLineEdit *lineEdit_4;
    QLineEdit *lineEdit_5;
    QPushButton *pushButton_2;

    void setupUi(QDialog *Register)
    {
        if (Register->objectName().isEmpty())
            Register->setObjectName("Register");
        Register->resize(1920, 1080);
        label = new QLabel(Register);
        label->setObjectName("label");
        label->setGeometry(QRect(310, 110, 121, 51));
        label_2 = new QLabel(Register);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(260, 180, 71, 20));
        label_3 = new QLabel(Register);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(260, 230, 63, 20));
        label_4 = new QLabel(Register);
        label_4->setObjectName("label_4");
        label_4->setGeometry(QRect(260, 280, 63, 20));
        lineEdit = new QLineEdit(Register);
        lineEdit->setObjectName("lineEdit");
        lineEdit->setGeometry(QRect(370, 180, 113, 26));
        lineEdit_2 = new QLineEdit(Register);
        lineEdit_2->setObjectName("lineEdit_2");
        lineEdit_2->setGeometry(QRect(370, 230, 113, 26));
        lineEdit_3 = new QLineEdit(Register);
        lineEdit_3->setObjectName("lineEdit_3");
        lineEdit_3->setGeometry(QRect(370, 280, 113, 26));
        pushButton = new QPushButton(Register);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(310, 330, 93, 29));
        label_5 = new QLabel(Register);
        label_5->setObjectName("label_5");
        label_5->setGeometry(QRect(600, 120, 171, 20));
        label_6 = new QLabel(Register);
        label_6->setObjectName("label_6");
        label_6->setGeometry(QRect(570, 180, 71, 20));
        label_7 = new QLabel(Register);
        label_7->setObjectName("label_7");
        label_7->setGeometry(QRect(570, 220, 63, 20));
        lineEdit_4 = new QLineEdit(Register);
        lineEdit_4->setObjectName("lineEdit_4");
        lineEdit_4->setGeometry(QRect(670, 180, 113, 26));
        lineEdit_5 = new QLineEdit(Register);
        lineEdit_5->setObjectName("lineEdit_5");
        lineEdit_5->setGeometry(QRect(670, 220, 113, 26));
        pushButton_2 = new QPushButton(Register);
        pushButton_2->setObjectName("pushButton_2");
        pushButton_2->setGeometry(QRect(630, 330, 93, 29));

        retranslateUi(Register);

        QMetaObject::connectSlotsByName(Register);
    } // setupUi

    void retranslateUi(QDialog *Register)
    {
        Register->setWindowTitle(QCoreApplication::translate("Register", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("Register", "Welcome!", nullptr));
        label_2->setText(QCoreApplication::translate("Register", "Username:", nullptr));
        label_3->setText(QCoreApplication::translate("Register", "Email:", nullptr));
        label_4->setText(QCoreApplication::translate("Register", "Password:", nullptr));
        pushButton->setText(QCoreApplication::translate("Register", "Confirm", nullptr));
        label_5->setText(QCoreApplication::translate("Register", "Already have an account?", nullptr));
        label_6->setText(QCoreApplication::translate("Register", "Username:", nullptr));
        label_7->setText(QCoreApplication::translate("Register", "Password:", nullptr));
        pushButton_2->setText(QCoreApplication::translate("Register", "Log in", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Register: public Ui_Register {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_REGISTER_H
