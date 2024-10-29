/********************************************************************************
** Form generated from reading UI file 'dashboard_budget.ui'
**
** Created by: Qt User Interface Compiler version 6.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DASHBOARD_BUDGET_H
#define UI_DASHBOARD_BUDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_dashboard_budget
{
public:
    QLabel *backgroundd;
    QLabel *budgetText;
    QPushButton *editDetails;
    QPushButton *currentBalance;
    QPushButton *savingGoals;
    QPushButton *spendings;
    QPushButton *budget;
    QPushButton *newBudget;
    QLabel *food_drink;
    QLabel *clothes_shoes;
    QLabel *medicines;
    QLabel *rent;
    QLabel *education;
    QLabel *entertainment;

    void setupUi(QDialog *dashboard_budget)
    {
        if (dashboard_budget->objectName().isEmpty())
            dashboard_budget->setObjectName("dashboard_budget");
        dashboard_budget->resize(1500, 775);
        backgroundd = new QLabel(dashboard_budget);
        backgroundd->setObjectName("backgroundd");
        backgroundd->setGeometry(QRect(0, 0, 1500, 771));
        budgetText = new QLabel(dashboard_budget);
        budgetText->setObjectName("budgetText");
        budgetText->setGeometry(QRect(400, 270, 121, 51));
        budgetText->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"font: bold;\n"
"font-size: 28px;"));
        editDetails = new QPushButton(dashboard_budget);
        editDetails->setObjectName("editDetails");
        editDetails->setGeometry(QRect(480, 690, 171, 41));
        editDetails->setStyleSheet(QString::fromUtf8("background-color: rgb(51, 51, 51);\n"
"border-radius: 11px;\n"
"font-size: 28px;\n"
"font: bold;\n"
"color: rgb(182, 253, 51);"));
        currentBalance = new QPushButton(dashboard_budget);
        currentBalance->setObjectName("currentBalance");
        currentBalance->setGeometry(QRect(860, 370, 328, 43));
        QFont font;
        font.setPointSize(16);
        currentBalance->setFont(font);
        currentBalance->setStyleSheet(QString::fromUtf8("color:white;"));
        savingGoals = new QPushButton(dashboard_budget);
        savingGoals->setObjectName("savingGoals");
        savingGoals->setGeometry(QRect(860, 440, 328, 43));
        savingGoals->setFont(font);
        savingGoals->setStyleSheet(QString::fromUtf8("color:white;"));
        spendings = new QPushButton(dashboard_budget);
        spendings->setObjectName("spendings");
        spendings->setGeometry(QRect(860, 510, 328, 43));
        spendings->setFont(font);
        spendings->setStyleSheet(QString::fromUtf8("color:white;"));
        budget = new QPushButton(dashboard_budget);
        budget->setObjectName("budget");
        budget->setGeometry(QRect(860, 580, 328, 43));
        budget->setFont(font);
        budget->setStyleSheet(QString::fromUtf8("color:white;"));
        newBudget = new QPushButton(dashboard_budget);
        newBudget->setObjectName("newBudget");
        newBudget->setGeometry(QRect(660, 290, 51, 29));
        newBudget->setStyleSheet(QString::fromUtf8("background-color: rgb(182, 253, 51);\n"
"color: rgb(51, 51, 51);\n"
"border-radius: 15px;\n"
""));
        food_drink = new QLabel(dashboard_budget);
        food_drink->setObjectName("food_drink");
        food_drink->setGeometry(QRect(150, 380, 111, 20));
        clothes_shoes = new QLabel(dashboard_budget);
        clothes_shoes->setObjectName("clothes_shoes");
        clothes_shoes->setGeometry(QRect(150, 410, 121, 20));
        medicines = new QLabel(dashboard_budget);
        medicines->setObjectName("medicines");
        medicines->setGeometry(QRect(150, 440, 71, 20));
        rent = new QLabel(dashboard_budget);
        rent->setObjectName("rent");
        rent->setGeometry(QRect(150, 470, 63, 20));
        education = new QLabel(dashboard_budget);
        education->setObjectName("education");
        education->setGeometry(QRect(150, 500, 91, 20));
        entertainment = new QLabel(dashboard_budget);
        entertainment->setObjectName("entertainment");
        entertainment->setGeometry(QRect(150, 530, 101, 20));

        retranslateUi(dashboard_budget);

        QMetaObject::connectSlotsByName(dashboard_budget);
    } // setupUi

    void retranslateUi(QDialog *dashboard_budget)
    {
        dashboard_budget->setWindowTitle(QCoreApplication::translate("dashboard_budget", "Dialog", nullptr));
        backgroundd->setText(QCoreApplication::translate("dashboard_budget", "TextLabel", nullptr));
        budgetText->setText(QCoreApplication::translate("dashboard_budget", "Budget", nullptr));
        editDetails->setText(QCoreApplication::translate("dashboard_budget", "Edit details", nullptr));
        currentBalance->setText(QCoreApplication::translate("dashboard_budget", "Current balance", nullptr));
        savingGoals->setText(QCoreApplication::translate("dashboard_budget", "Saving goals", nullptr));
        spendings->setText(QCoreApplication::translate("dashboard_budget", "Spendings", nullptr));
        budget->setText(QCoreApplication::translate("dashboard_budget", "Budget", nullptr));
        newBudget->setText(QCoreApplication::translate("dashboard_budget", "+", nullptr));
        food_drink->setText(QCoreApplication::translate("dashboard_budget", "Food and drink", nullptr));
        clothes_shoes->setText(QCoreApplication::translate("dashboard_budget", "Clothes and shoes", nullptr));
        medicines->setText(QCoreApplication::translate("dashboard_budget", "Medicines", nullptr));
        rent->setText(QCoreApplication::translate("dashboard_budget", "Rent", nullptr));
        education->setText(QCoreApplication::translate("dashboard_budget", "Education", nullptr));
        entertainment->setText(QCoreApplication::translate("dashboard_budget", "\320\225ntertainment", nullptr));
    } // retranslateUi

};

namespace Ui {
    class dashboard_budget: public Ui_dashboard_budget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DASHBOARD_BUDGET_H
