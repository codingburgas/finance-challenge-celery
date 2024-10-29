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
    QLabel *textOr;
    QLabel *textSubract;
    QLineEdit *addOrSubAmount;
    QPushButton *doneButton;
    QPushButton *currentBalance;
    QPushButton *savingGoals;
    QPushButton *spendings;
    QPushButton *budget;
    QLabel *textSubract_2;
    QLineEdit *addOrSubPurpose;
    QLabel *textSubract_3;

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
        textNewBalance->setGeometry(QRect(480, 100, 221, 31));
        textNewBalance->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"font-size: 20px;\n"
"font: bold;"));
        newBalanceEdit = new QLineEdit(dashboard_newBalance);
        newBalanceEdit->setObjectName("newBalanceEdit");
        newBalanceEdit->setGeometry(QRect(520, 130, 131, 26));
        newBalanceEdit->setStyleSheet(QString::fromUtf8("background-color: rgb(32, 32, 32);\n"
"border-radius: 11px;"));
        textOr = new QLabel(dashboard_newBalance);
        textOr->setObjectName("textOr");
        textOr->setGeometry(QRect(570, 190, 63, 20));
        textOr->setStyleSheet(QString::fromUtf8("color: rgb(119, 119, 119);\n"
"font-size: 18px;"));
        textSubract = new QLabel(dashboard_newBalance);
        textSubract->setObjectName("textSubract");
        textSubract->setGeometry(QRect(490, 230, 261, 51));
        textSubract->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"font-size: 20px;\n"
"font: bold;"));
        addOrSubAmount = new QLineEdit(dashboard_newBalance);
        addOrSubAmount->setObjectName("addOrSubAmount");
        addOrSubAmount->setGeometry(QRect(520, 290, 131, 26));
        addOrSubAmount->setStyleSheet(QString::fromUtf8("background-color: rgb(32, 32, 32);\n"
"border-radius: 11px;"));
        doneButton = new QPushButton(dashboard_newBalance);
        doneButton->setObjectName("doneButton");
        doneButton->setGeometry(QRect(500, 390, 171, 41));
        doneButton->setStyleSheet(QString::fromUtf8("background-color: rgb(51, 51, 51);\n"
"border-radius: 11px;\n"
"font-size: 28px;\n"
"font: bold;\n"
"color: rgb(182, 253, 51);"));
        currentBalance = new QPushButton(dashboard_newBalance);
        currentBalance->setObjectName("currentBalance");
        currentBalance->setGeometry(QRect(920, 180, 211, 31));
        savingGoals = new QPushButton(dashboard_newBalance);
        savingGoals->setObjectName("savingGoals");
        savingGoals->setGeometry(QRect(920, 230, 211, 31));
        spendings = new QPushButton(dashboard_newBalance);
        spendings->setObjectName("spendings");
        spendings->setGeometry(QRect(920, 278, 211, 31));
        budget = new QPushButton(dashboard_newBalance);
        budget->setObjectName("budget");
        budget->setGeometry(QRect(920, 328, 211, 31));
        textSubract_2 = new QLabel(dashboard_newBalance);
        textSubract_2->setObjectName("textSubract_2");
        textSubract_2->setGeometry(QRect(420, 280, 91, 41));
        textSubract_2->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"font-size: 20px;\n"
"font: bold;"));
        addOrSubPurpose = new QLineEdit(dashboard_newBalance);
        addOrSubPurpose->setObjectName("addOrSubPurpose");
        addOrSubPurpose->setGeometry(QRect(520, 330, 131, 26));
        addOrSubPurpose->setStyleSheet(QString::fromUtf8("background-color: rgb(32, 32, 32);\n"
"border-radius: 11px;"));
        textSubract_3 = new QLabel(dashboard_newBalance);
        textSubract_3->setObjectName("textSubract_3");
        textSubract_3->setGeometry(QRect(420, 320, 91, 41));
        textSubract_3->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"font-size: 20px;\n"
"font: bold;"));

        retranslateUi(dashboard_newBalance);

        QMetaObject::connectSlotsByName(dashboard_newBalance);
    } // setupUi

    void retranslateUi(QDialog *dashboard_newBalance)
    {
        dashboard_newBalance->setWindowTitle(QCoreApplication::translate("dashboard_newBalance", "Dialog", nullptr));
        backgroundd->setText(QCoreApplication::translate("dashboard_newBalance", "TextLabel", nullptr));
        textNewBalance->setText(QCoreApplication::translate("dashboard_newBalance", "Set your new balance:", nullptr));
        textOr->setText(QCoreApplication::translate("dashboard_newBalance", "Or", nullptr));
        textSubract->setText(QCoreApplication::translate("dashboard_newBalance", "Add or subtract from your\n"
"current balance:", nullptr));
        doneButton->setText(QCoreApplication::translate("dashboard_newBalance", "Done", nullptr));
        currentBalance->setText(QCoreApplication::translate("dashboard_newBalance", "Current Balance", nullptr));
        savingGoals->setText(QCoreApplication::translate("dashboard_newBalance", "Saving Goals", nullptr));
        spendings->setText(QCoreApplication::translate("dashboard_newBalance", "Spendings", nullptr));
        budget->setText(QCoreApplication::translate("dashboard_newBalance", "Budget", nullptr));
        textSubract_2->setText(QCoreApplication::translate("dashboard_newBalance", "Amount:", nullptr));
        textSubract_3->setText(QCoreApplication::translate("dashboard_newBalance", "Purpose:", nullptr));
    } // retranslateUi

};

namespace Ui {
    class dashboard_newBalance: public Ui_dashboard_newBalance {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DASHBOARD_NEWBALANCE_H
