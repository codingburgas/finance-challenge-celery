/********************************************************************************
** Form generated from reading UI file 'dashboard_newbudget.ui'
**
** Created by: Qt User Interface Compiler version 6.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DASHBOARD_NEWBUDGET_H
#define UI_DASHBOARD_NEWBUDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_dashboard_newBudget
{
public:
    QLabel *backgroundd;
    QLabel *newBudgetText;
    QLabel *nameText;
    QLabel *amountText;
    QLineEdit *writeName;
    QLineEdit *writeAmount;
    QLabel *label_4;
    QLabel *currentBudgetText;
    QLineEdit *writeCurrentBudget;
    QLabel *howmuchText;
    QLabel *howmuchText_2;
    QLineEdit *writeHowMuchSpent;
    QLabel *budgetName1;
    QLabel *budgetName2;
    QLabel *budgetName3;
    QLabel *budgetName4;
    QPushButton *doneButton;

    void setupUi(QDialog *dashboard_newBudget)
    {
        if (dashboard_newBudget->objectName().isEmpty())
            dashboard_newBudget->setObjectName("dashboard_newBudget");
        dashboard_newBudget->resize(1500, 775);
        backgroundd = new QLabel(dashboard_newBudget);
        backgroundd->setObjectName("backgroundd");
        backgroundd->setGeometry(QRect(0, 0, 1500, 775));
        newBudgetText = new QLabel(dashboard_newBudget);
        newBudgetText->setObjectName("newBudgetText");
        newBudgetText->setGeometry(QRect(190, 120, 151, 20));
        newBudgetText->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"font-size: 18px;\n"
"font: bold;"));
        nameText = new QLabel(dashboard_newBudget);
        nameText->setObjectName("nameText");
        nameText->setGeometry(QRect(210, 150, 63, 20));
        nameText->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"font-size: 15px;\n"
""));
        amountText = new QLabel(dashboard_newBudget);
        amountText->setObjectName("amountText");
        amountText->setGeometry(QRect(210, 230, 101, 20));
        amountText->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"font-size: 15px;"));
        writeName = new QLineEdit(dashboard_newBudget);
        writeName->setObjectName("writeName");
        writeName->setGeometry(QRect(210, 180, 121, 31));
        writeName->setStyleSheet(QString::fromUtf8("background-color: rgb(32, 32, 32);\n"
"border-radius: 11px;"));
        writeAmount = new QLineEdit(dashboard_newBudget);
        writeAmount->setObjectName("writeAmount");
        writeAmount->setGeometry(QRect(210, 260, 121, 31));
        writeAmount->setStyleSheet(QString::fromUtf8("background-color: rgb(32, 32, 32);\n"
"border-radius: 11px;"));
        label_4 = new QLabel(dashboard_newBudget);
        label_4->setObjectName("label_4");
        label_4->setGeometry(QRect(530, 120, 121, 20));
        label_4->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"font-size: 18px;\n"
"font: bold;"));
        currentBudgetText = new QLabel(dashboard_newBudget);
        currentBudgetText->setObjectName("currentBudgetText");
        currentBudgetText->setGeometry(QRect(480, 190, 111, 20));
        currentBudgetText->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"font-size: 15px;\n"
""));
        writeCurrentBudget = new QLineEdit(dashboard_newBudget);
        writeCurrentBudget->setObjectName("writeCurrentBudget");
        writeCurrentBudget->setGeometry(QRect(600, 190, 121, 31));
        writeCurrentBudget->setStyleSheet(QString::fromUtf8("background-color: rgb(32, 32, 32);\n"
"border-radius: 11px;"));
        howmuchText = new QLabel(dashboard_newBudget);
        howmuchText->setObjectName("howmuchText");
        howmuchText->setGeometry(QRect(480, 230, 201, 20));
        howmuchText->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"font-size: 15px;"));
        howmuchText_2 = new QLabel(dashboard_newBudget);
        howmuchText_2->setObjectName("howmuchText_2");
        howmuchText_2->setGeometry(QRect(480, 250, 71, 20));
        howmuchText_2->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"font-size: 15px;"));
        writeHowMuchSpent = new QLineEdit(dashboard_newBudget);
        writeHowMuchSpent->setObjectName("writeHowMuchSpent");
        writeHowMuchSpent->setGeometry(QRect(600, 240, 121, 31));
        writeHowMuchSpent->setStyleSheet(QString::fromUtf8("background-color: rgb(32, 32, 32);\n"
"border-radius: 11px;"));
        budgetName1 = new QLabel(dashboard_newBudget);
        budgetName1->setObjectName("budgetName1");
        budgetName1->setGeometry(QRect(890, 160, 111, 20));
        budgetName2 = new QLabel(dashboard_newBudget);
        budgetName2->setObjectName("budgetName2");
        budgetName2->setGeometry(QRect(890, 190, 111, 20));
        budgetName3 = new QLabel(dashboard_newBudget);
        budgetName3->setObjectName("budgetName3");
        budgetName3->setGeometry(QRect(890, 220, 111, 20));
        budgetName4 = new QLabel(dashboard_newBudget);
        budgetName4->setObjectName("budgetName4");
        budgetName4->setGeometry(QRect(890, 250, 111, 20));
        doneButton = new QPushButton(dashboard_newBudget);
        doneButton->setObjectName("doneButton");
        doneButton->setGeometry(QRect(500, 380, 171, 41));
        doneButton->setStyleSheet(QString::fromUtf8("background-color: rgb(51, 51, 51);\n"
"border-radius: 11px;\n"
"font-size: 28px;\n"
"font: bold;\n"
"color: rgb(182, 253, 51);"));

        retranslateUi(dashboard_newBudget);

        QMetaObject::connectSlotsByName(dashboard_newBudget);
    } // setupUi

    void retranslateUi(QDialog *dashboard_newBudget)
    {
        dashboard_newBudget->setWindowTitle(QCoreApplication::translate("dashboard_newBudget", "Dialog", nullptr));
        backgroundd->setText(QCoreApplication::translate("dashboard_newBudget", "TextLabel", nullptr));
        newBudgetText->setText(QCoreApplication::translate("dashboard_newBudget", "Set a new budget", nullptr));
        nameText->setText(QCoreApplication::translate("dashboard_newBudget", "Name", nullptr));
        amountText->setText(QCoreApplication::translate("dashboard_newBudget", "Set an amount", nullptr));
        label_4->setText(QCoreApplication::translate("dashboard_newBudget", "Edit budget", nullptr));
        currentBudgetText->setText(QCoreApplication::translate("dashboard_newBudget", "Current budget:", nullptr));
        howmuchText->setText(QCoreApplication::translate("dashboard_newBudget", "How much have", nullptr));
        howmuchText_2->setText(QCoreApplication::translate("dashboard_newBudget", "you spent:", nullptr));
        budgetName1->setText(QCoreApplication::translate("dashboard_newBudget", "Budget Name 1 ", nullptr));
        budgetName2->setText(QCoreApplication::translate("dashboard_newBudget", "Budget Name 2 ", nullptr));
        budgetName3->setText(QCoreApplication::translate("dashboard_newBudget", "Budget Name 3 ", nullptr));
        budgetName4->setText(QCoreApplication::translate("dashboard_newBudget", "Budget Name 4 ", nullptr));
        doneButton->setText(QCoreApplication::translate("dashboard_newBudget", "Done", nullptr));
    } // retranslateUi

};

namespace Ui {
    class dashboard_newBudget: public Ui_dashboard_newBudget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DASHBOARD_NEWBUDGET_H
