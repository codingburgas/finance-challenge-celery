/********************************************************************************
** Form generated from reading UI file 'dashboard_spendings.ui'
**
** Created by: Qt User Interface Compiler version 6.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DASHBOARD_SPENDINGS_H
#define UI_DASHBOARD_SPENDINGS_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_Dashboard_spendings
{
public:
    QLabel *backgroundd;
    QLabel *spendingsText;
    QLabel *budgetText;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QLineEdit *lineEdit;
    QLineEdit *lineEdit_2;
    QLineEdit *lineEdit_3;
    QLabel *savingGoalsText;
    QLabel *label_6;
    QLineEdit *lineEdit_4;
    QLabel *label_7;
    QLineEdit *lineEdit_5;
    QPushButton *doneButton;
    QPushButton *editDetails;

    void setupUi(QDialog *Dashboard_spendings)
    {
        if (Dashboard_spendings->objectName().isEmpty())
            Dashboard_spendings->setObjectName("Dashboard_spendings");
        Dashboard_spendings->resize(1500, 775);
        backgroundd = new QLabel(Dashboard_spendings);
        backgroundd->setObjectName("backgroundd");
        backgroundd->setGeometry(QRect(0, 0, 63, 20));
        spendingsText = new QLabel(Dashboard_spendings);
        spendingsText->setObjectName("spendingsText");
        spendingsText->setGeometry(QRect(190, 100, 121, 31));
        budgetText = new QLabel(Dashboard_spendings);
        budgetText->setObjectName("budgetText");
        budgetText->setGeometry(QRect(190, 160, 63, 20));
        label_2 = new QLabel(Dashboard_spendings);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(190, 200, 63, 20));
        label_3 = new QLabel(Dashboard_spendings);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(190, 230, 63, 20));
        label_4 = new QLabel(Dashboard_spendings);
        label_4->setObjectName("label_4");
        label_4->setGeometry(QRect(190, 260, 63, 20));
        lineEdit = new QLineEdit(Dashboard_spendings);
        lineEdit->setObjectName("lineEdit");
        lineEdit->setGeometry(QRect(270, 200, 113, 26));
        lineEdit->setStyleSheet(QString::fromUtf8("background-color: rgb(25, 24, 24);\n"
"border-radius: 11px;\n"
"\n"
""));
        lineEdit_2 = new QLineEdit(Dashboard_spendings);
        lineEdit_2->setObjectName("lineEdit_2");
        lineEdit_2->setGeometry(QRect(270, 230, 113, 26));
        lineEdit_2->setStyleSheet(QString::fromUtf8("background-color: rgb(25, 24, 24);\n"
"border-radius: 11px;"));
        lineEdit_3 = new QLineEdit(Dashboard_spendings);
        lineEdit_3->setObjectName("lineEdit_3");
        lineEdit_3->setGeometry(QRect(270, 260, 113, 26));
        lineEdit_3->setStyleSheet(QString::fromUtf8("background-color: rgb(25, 24, 24);\n"
"border-radius: 11px;"));
        savingGoalsText = new QLabel(Dashboard_spendings);
        savingGoalsText->setObjectName("savingGoalsText");
        savingGoalsText->setGeometry(QRect(500, 160, 101, 20));
        label_6 = new QLabel(Dashboard_spendings);
        label_6->setObjectName("label_6");
        label_6->setGeometry(QRect(480, 200, 63, 20));
        lineEdit_4 = new QLineEdit(Dashboard_spendings);
        lineEdit_4->setObjectName("lineEdit_4");
        lineEdit_4->setGeometry(QRect(550, 200, 113, 26));
        lineEdit_4->setStyleSheet(QString::fromUtf8("background-color: rgb(25, 24, 24);\n"
"border-radius: 11px;"));
        label_7 = new QLabel(Dashboard_spendings);
        label_7->setObjectName("label_7");
        label_7->setGeometry(QRect(480, 240, 63, 20));
        lineEdit_5 = new QLineEdit(Dashboard_spendings);
        lineEdit_5->setObjectName("lineEdit_5");
        lineEdit_5->setGeometry(QRect(550, 240, 113, 26));
        lineEdit_5->setStyleSheet(QString::fromUtf8("background-color: rgb(25, 24, 24);\n"
"border-radius: 11px;"));
        doneButton = new QPushButton(Dashboard_spendings);
        doneButton->setObjectName("doneButton");
        doneButton->setGeometry(QRect(380, 350, 93, 29));
        editDetails = new QPushButton(Dashboard_spendings);
        editDetails->setObjectName("editDetails");
        editDetails->setGeometry(QRect(350, 450, 171, 41));
        editDetails->setStyleSheet(QString::fromUtf8("background-color: rgb(51, 51, 51);\n"
"border-radius: 11px;\n"
"font-size: 28px;\n"
"font: bold;\n"
"color: rgb(182, 253, 51);"));

        retranslateUi(Dashboard_spendings);

        QMetaObject::connectSlotsByName(Dashboard_spendings);
    } // setupUi

    void retranslateUi(QDialog *Dashboard_spendings)
    {
        Dashboard_spendings->setWindowTitle(QCoreApplication::translate("Dashboard_spendings", "Dialog", nullptr));
        backgroundd->setText(QCoreApplication::translate("Dashboard_spendings", "TextLabel", nullptr));
        spendingsText->setText(QCoreApplication::translate("Dashboard_spendings", "Spendings", nullptr));
        budgetText->setText(QCoreApplication::translate("Dashboard_spendings", "Budget", nullptr));
        label_2->setText(QCoreApplication::translate("Dashboard_spendings", "TextLabel", nullptr));
        label_3->setText(QCoreApplication::translate("Dashboard_spendings", "TextLabel", nullptr));
        label_4->setText(QCoreApplication::translate("Dashboard_spendings", "TextLabel", nullptr));
        savingGoalsText->setText(QCoreApplication::translate("Dashboard_spendings", " Saving goals", nullptr));
        label_6->setText(QCoreApplication::translate("Dashboard_spendings", "TextLabel", nullptr));
        label_7->setText(QCoreApplication::translate("Dashboard_spendings", "TextLabel", nullptr));
        doneButton->setText(QCoreApplication::translate("Dashboard_spendings", "Done", nullptr));
        editDetails->setText(QCoreApplication::translate("Dashboard_spendings", "Edit details", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Dashboard_spendings: public Ui_Dashboard_spendings {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DASHBOARD_SPENDINGS_H
