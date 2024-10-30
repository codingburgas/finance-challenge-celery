/********************************************************************************
** Form generated from reading UI file 'dashboard.ui'
**
** Created by: Qt User Interface Compiler version 6.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DASHBOARD_H
#define UI_DASHBOARD_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_Dashboard
{
public:
    QLabel *backgrounddd;
    QPushButton *editDetails;
    QPushButton *currentBalance;
    QPushButton *savingGoals;
    QPushButton *spendings;
    QPushButton *budget;
    QLabel *label;
    QLabel *mainn;
    QPushButton *plus_dashboard;

    void setupUi(QDialog *Dashboard)
    {
        if (Dashboard->objectName().isEmpty())
            Dashboard->setObjectName("Dashboard");
        Dashboard->resize(1500, 775);
        backgrounddd = new QLabel(Dashboard);
        backgrounddd->setObjectName("backgrounddd");
        backgrounddd->setGeometry(QRect(0, 0, 1500, 775));
        QFont font;
        font.setPointSize(22);
        font.setBold(true);
        backgrounddd->setFont(font);
        backgrounddd->setStyleSheet(QString::fromUtf8("color: white;\n"
""));
        editDetails = new QPushButton(Dashboard);
        editDetails->setObjectName("editDetails");
        editDetails->setGeometry(QRect(589, 623, 322, 86));
        editDetails->setStyleSheet(QString::fromUtf8("background-color: rgb(51, 51, 51);\n"
"border-radius: 40px;\n"
"font-size: 32px;\n"
"weight: 700;\n"
"color: rgb(182, 253, 51);"));
        currentBalance = new QPushButton(Dashboard);
        currentBalance->setObjectName("currentBalance");
        currentBalance->setGeometry(QRect(1068, 210, 251, 43));
        QFont font1;
        font1.setPointSize(16);
        currentBalance->setFont(font1);
        currentBalance->setStyleSheet(QString::fromUtf8("color:white;\n"
"background-color:transparent;\n"
""));
        savingGoals = new QPushButton(Dashboard);
        savingGoals->setObjectName("savingGoals");
        savingGoals->setGeometry(QRect(1070, 270, 251, 44));
        savingGoals->setFont(font1);
        savingGoals->setStyleSheet(QString::fromUtf8("color:white;\n"
"background-color:transparent;"));
        spendings = new QPushButton(Dashboard);
        spendings->setObjectName("spendings");
        spendings->setGeometry(QRect(1070, 340, 251, 43));
        spendings->setFont(font1);
        spendings->setStyleSheet(QString::fromUtf8("color:white;\n"
"background-color:transparent;"));
        budget = new QPushButton(Dashboard);
        budget->setObjectName("budget");
        budget->setGeometry(QRect(1070, 410, 251, 44));
        QFont font2;
        font2.setPointSize(16);
        font2.setUnderline(true);
        budget->setFont(font2);
        budget->setStyleSheet(QString::fromUtf8("color:white;\n"
"background-color:transparent;\n"
"text-decoration: underline;"));
        label = new QLabel(Dashboard);
        label->setObjectName("label");
        label->setGeometry(QRect(568, 176, 258, 51));
        label->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"weight: 500;\n"
"font-size: 36px;"));
        mainn = new QLabel(Dashboard);
        mainn->setObjectName("mainn");
        mainn->setGeometry(QRect(570, 220, 231, 191));
        QFont font3;
        font3.setPointSize(26);
        mainn->setFont(font3);
        mainn->setStyleSheet(QString::fromUtf8("text-align:center;\n"
"color:white;"));
        plus_dashboard = new QPushButton(Dashboard);
        plus_dashboard->setObjectName("plus_dashboard");
        plus_dashboard->setGeometry(QRect(906, 155, 42, 96));
        plus_dashboard->setStyleSheet(QString::fromUtf8("color: rgb(168, 168, 168);\n"
"weight: 300;\n"
"font-size:  64px;\n"
""));

        retranslateUi(Dashboard);

        QMetaObject::connectSlotsByName(Dashboard);
    } // setupUi

    void retranslateUi(QDialog *Dashboard)
    {
        Dashboard->setWindowTitle(QCoreApplication::translate("Dashboard", "Dialog", nullptr));
        backgrounddd->setText(QCoreApplication::translate("Dashboard", "TextLabel", nullptr));
        editDetails->setText(QCoreApplication::translate("Dashboard", "Edit details", nullptr));
        currentBalance->setText(QCoreApplication::translate("Dashboard", "Current balance", nullptr));
        savingGoals->setText(QCoreApplication::translate("Dashboard", "Saving goals", nullptr));
        spendings->setText(QCoreApplication::translate("Dashboard", "Spendings", nullptr));
        budget->setText(QCoreApplication::translate("Dashboard", "Budget", nullptr));
        label->setText(QCoreApplication::translate("Dashboard", "Budget", nullptr));
        mainn->setText(QString());
        plus_dashboard->setText(QCoreApplication::translate("Dashboard", "+", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Dashboard: public Ui_Dashboard {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DASHBOARD_H
