/********************************************************************************
** Form generated from reading UI file 'dashboard_newbalance.ui'
**
** Created by: Qt User Interface Compiler version 6.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DASHBOARD_NEWBALANCE_H
#define UI_DASHBOARD_NEWBALANCE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_dashboard_newBalance
{
public:
    QLabel *backgroundd;
    QLabel *textNewBalance;
    QLineEdit *newBalanceEdit;
    QLabel *textSubract;
    QPushButton *doneButton;
    QPushButton *currentBalance;
    QPushButton *savingGoals;
    QPushButton *spendings;
    QPushButton *budget;
    QLineEdit *addOrSubPurpose;
    QLabel *label;
    QLabel *label_2;
    QLineEdit *addOrSubAmount;

    void setupUi(QDialog *dashboard_newBalance)
    {
        if (dashboard_newBalance->objectName().isEmpty())
            dashboard_newBalance->setObjectName("dashboard_newBalance");
        dashboard_newBalance->resize(1500, 775);
        backgroundd = new QLabel(dashboard_newBalance);
        backgroundd->setObjectName("backgroundd");
        backgroundd->setGeometry(QRect(0, 0, 1500, 775));
        textNewBalance = new QLabel(dashboard_newBalance);
        textNewBalance->setObjectName("textNewBalance");
        textNewBalance->setGeometry(QRect(590, 110, 367, 43));
        textNewBalance->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"font-size: 30px;\n"
"weight: 400;"));
        newBalanceEdit = new QLineEdit(dashboard_newBalance);
        newBalanceEdit->setObjectName("newBalanceEdit");
        newBalanceEdit->setGeometry(QRect(560, 160, 341, 67));
        newBalanceEdit->setStyleSheet(QString::fromUtf8("background-color: rgb(32, 32, 32);\n"
"border-radius: 20px;"));
        textSubract = new QLabel(dashboard_newBalance);
        textSubract->setObjectName("textSubract");
        textSubract->setGeometry(QRect(556, 235, 388, 43));
        textSubract->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"font-size: 30px;\n"
"weight: 400;"));
        doneButton = new QPushButton(dashboard_newBalance);
        doneButton->setObjectName("doneButton");
        doneButton->setGeometry(QRect(589, 623, 322, 86));
        doneButton->setStyleSheet(QString::fromUtf8("background-color: rgb(51, 51, 51);\n"
"border-radius: 40px;\n"
"font-size: 32px;\n"
"color: rgb(182, 253, 51);"));
        currentBalance = new QPushButton(dashboard_newBalance);
        currentBalance->setObjectName("currentBalance");
        currentBalance->setGeometry(QRect(1085, 216, 258, 43));
        savingGoals = new QPushButton(dashboard_newBalance);
        savingGoals->setObjectName("savingGoals");
        savingGoals->setGeometry(QRect(1085, 278, 258, 44));
        spendings = new QPushButton(dashboard_newBalance);
        spendings->setObjectName("spendings");
        spendings->setGeometry(QRect(1085, 345, 258, 43));
        budget = new QPushButton(dashboard_newBalance);
        budget->setObjectName("budget");
        budget->setGeometry(QRect(1085, 411, 258, 44));
        addOrSubPurpose = new QLineEdit(dashboard_newBalance);
        addOrSubPurpose->setObjectName("addOrSubPurpose");
        addOrSubPurpose->setGeometry(QRect(640, 380, 268, 67));
        addOrSubPurpose->setStyleSheet(QString::fromUtf8("background-color: rgb(32, 32, 32);\n"
"border-radius: 20px;"));
        label = new QLabel(dashboard_newBalance);
        label->setObjectName("label");
        label->setGeometry(QRect(540, 400, 91, 20));
        label->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"font-size: 20px;\n"
"weight: 300;"));
        label_2 = new QLabel(dashboard_newBalance);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(540, 310, 71, 20));
        label_2->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"font-size: 20px;\n"
"weight: 300;\n"
"\n"
""));
        addOrSubAmount = new QLineEdit(dashboard_newBalance);
        addOrSubAmount->setObjectName("addOrSubAmount");
        addOrSubAmount->setGeometry(QRect(640, 290, 268, 67));
        addOrSubAmount->setStyleSheet(QString::fromUtf8("background-color: rgb(32, 32, 32);\n"
"border-radius: 20px;"));

        retranslateUi(dashboard_newBalance);

        QMetaObject::connectSlotsByName(dashboard_newBalance);
    } // setupUi

    void retranslateUi(QDialog *dashboard_newBalance)
    {
        dashboard_newBalance->setWindowTitle(QCoreApplication::translate("dashboard_newBalance", "Dialog", nullptr));
        backgroundd->setText(QCoreApplication::translate("dashboard_newBalance", "TextLabel", nullptr));
        textNewBalance->setText(QCoreApplication::translate("dashboard_newBalance", "Set your new balance:", nullptr));
        textSubract->setText(QCoreApplication::translate("dashboard_newBalance", "Edit your current balance:", nullptr));
        doneButton->setText(QCoreApplication::translate("dashboard_newBalance", "Done", nullptr));
        currentBalance->setText(QCoreApplication::translate("dashboard_newBalance", "Current Balance", nullptr));
        savingGoals->setText(QCoreApplication::translate("dashboard_newBalance", "Saving Goals", nullptr));
        spendings->setText(QCoreApplication::translate("dashboard_newBalance", "Spendings", nullptr));
        budget->setText(QCoreApplication::translate("dashboard_newBalance", "Budget", nullptr));
        label->setText(QCoreApplication::translate("dashboard_newBalance", "For/From:", nullptr));
        label_2->setText(QCoreApplication::translate("dashboard_newBalance", "Amount:", nullptr));
    } // retranslateUi

};

namespace Ui {
    class dashboard_newBalance: public Ui_dashboard_newBalance {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DASHBOARD_NEWBALANCE_H
