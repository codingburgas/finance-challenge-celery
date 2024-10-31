/********************************************************************************
** Form generated from reading UI file 'dashboard_newbudget.ui'
**
** Created by: Qt User Interface Compiler version 6.7.0
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
    QLineEdit *editCurrentBudget;
    QLabel *howmuchText;
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
        newBudgetText->setGeometry(QRect(204, 97, 291, 43));
        newBudgetText->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"font-size: 36px;\n"
"weight: 500;\n"
""));
        newBudgetText->setTextFormat(Qt::PlainText);
        nameText = new QLabel(dashboard_newBudget);
        nameText->setObjectName("nameText");
        nameText->setGeometry(QRect(214, 225, 75, 29));
        nameText->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"font-size: 24px;\n"
"weiht: 300;\n"
""));
        amountText = new QLabel(dashboard_newBudget);
        amountText->setObjectName("amountText");
        amountText->setGeometry(QRect(214, 354, 177, 29));
        amountText->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"font-size: 24px;\n"
"weight: 300;"));
        writeName = new QLineEdit(dashboard_newBudget);
        writeName->setObjectName("writeName");
        writeName->setGeometry(QRect(210, 270, 285, 67));
        QFont font;
        font.setPointSize(12);
        writeName->setFont(font);
        writeName->setStyleSheet(QString::fromUtf8("background-color: rgb(32, 32, 32);\n"
"border-radius: 20px;\n"
"padding: 0 20;\n"
"color:white;"));
        writeAmount = new QLineEdit(dashboard_newBudget);
        writeAmount->setObjectName("writeAmount");
        writeAmount->setGeometry(QRect(210, 400, 285, 67));
        writeAmount->setFont(font);
        writeAmount->setStyleSheet(QString::fromUtf8("background-color: rgb(32, 32, 32);\n"
"border-radius: 20px;\n"
"padding: 0 20;\n"
"color:white;"));
        label_4 = new QLabel(dashboard_newBudget);
        label_4->setObjectName("label_4");
        label_4->setGeometry(QRect(610, 90, 258, 51));
        label_4->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"font-size: 36px;\n"
"weight: 500;"));
        currentBudgetText = new QLabel(dashboard_newBudget);
        currentBudgetText->setObjectName("currentBudgetText");
        currentBudgetText->setGeometry(QRect(610, 220, 241, 36));
        currentBudgetText->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"font-size: 24px;\n"
"weight: 300;\n"
""));
        editCurrentBudget = new QLineEdit(dashboard_newBudget);
        editCurrentBudget->setObjectName("editCurrentBudget");
        editCurrentBudget->setGeometry(QRect(610, 270, 285, 67));
        editCurrentBudget->setFont(font);
        editCurrentBudget->setStyleSheet(QString::fromUtf8("background-color: #2C2B2C;\n"
"border-radius: 20px;\n"
"padding: 0 20;\n"
"color:white;\n"
""));
        howmuchText = new QLabel(dashboard_newBudget);
        howmuchText->setObjectName("howmuchText");
        howmuchText->setGeometry(QRect(610, 350, 291, 29));
        howmuchText->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"font-size: 24px;\n"
"weight: 300;"));
        writeHowMuchSpent = new QLineEdit(dashboard_newBudget);
        writeHowMuchSpent->setObjectName("writeHowMuchSpent");
        writeHowMuchSpent->setGeometry(QRect(610, 400, 285, 67));
        writeHowMuchSpent->setFont(font);
        writeHowMuchSpent->setStyleSheet(QString::fromUtf8("background-color: #2C2B2C;\n"
"border-radius: 20px;\n"
"padding: 0 20;\n"
"color:white;"));
        budgetName1 = new QLabel(dashboard_newBudget);
        budgetName1->setObjectName("budgetName1");
        budgetName1->setGeometry(QRect(1038, 119, 273, 44));
        budgetName1->setStyleSheet(QString::fromUtf8("color:white;"));
        budgetName2 = new QLabel(dashboard_newBudget);
        budgetName2->setObjectName("budgetName2");
        budgetName2->setGeometry(QRect(1038, 203, 273, 44));
        budgetName2->setStyleSheet(QString::fromUtf8("color:white;"));
        budgetName3 = new QLabel(dashboard_newBudget);
        budgetName3->setObjectName("budgetName3");
        budgetName3->setGeometry(QRect(1038, 287, 273, 44));
        budgetName3->setStyleSheet(QString::fromUtf8("color:white;"));
        budgetName4 = new QLabel(dashboard_newBudget);
        budgetName4->setObjectName("budgetName4");
        budgetName4->setGeometry(QRect(1036, 371, 273, 44));
        budgetName4->setStyleSheet(QString::fromUtf8("color:white;"));
        doneButton = new QPushButton(dashboard_newBudget);
        doneButton->setObjectName("doneButton");
        doneButton->setGeometry(QRect(589, 623, 322, 86));
        doneButton->setStyleSheet(QString::fromUtf8("background-color: rgb(51, 51, 51);\n"
"border-radius:  40px;\n"
"font-size: 32px;\n"
"weight: 700;\n"
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
        howmuchText->setText(QCoreApplication::translate("dashboard_newBudget", "How much have you spent:", nullptr));
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
