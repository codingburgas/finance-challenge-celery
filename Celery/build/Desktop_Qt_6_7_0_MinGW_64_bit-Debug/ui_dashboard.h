/********************************************************************************
** Form generated from reading UI file 'dashboard.ui'
**
** Created by: Qt User Interface Compiler version 6.7.0
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
    QLabel *backgroundd;
    QPushButton *editDetails;
    QPushButton *currentBalance;
    QPushButton *savingGoals;
    QPushButton *spendings;
    QPushButton *budget;
    QLabel *heading;
    QLabel *input;

    void setupUi(QDialog *Dashboard)
    {
        if (Dashboard->objectName().isEmpty())
            Dashboard->setObjectName("Dashboard");
        Dashboard->resize(1500, 775);
        backgroundd = new QLabel(Dashboard);
        backgroundd->setObjectName("backgroundd");
        backgroundd->setGeometry(QRect(0, 0, 1500, 775));
        QFont font;
        font.setBold(true);
        backgroundd->setFont(font);
        editDetails = new QPushButton(Dashboard);
        editDetails->setObjectName("editDetails");
        editDetails->setGeometry(QRect(589, 623, 322, 86));
        editDetails->setStyleSheet(QString::fromUtf8("background-color: rgb(51, 51, 51);\n"
"font-size: 28px;\n"
"font: bold;\n"
"color: rgb(182, 253, 51);\n"
"border-radius: 40px;"));
        currentBalance = new QPushButton(Dashboard);
        currentBalance->setObjectName("currentBalance");
        currentBalance->setGeometry(QRect(1068, 210, 328, 43));
        QFont font1;
        font1.setPointSize(16);
        currentBalance->setFont(font1);
        currentBalance->setStyleSheet(QString::fromUtf8("color:white;"));
        savingGoals = new QPushButton(Dashboard);
        savingGoals->setObjectName("savingGoals");
        savingGoals->setGeometry(QRect(1085, 278, 258, 44));
        savingGoals->setFont(font1);
        savingGoals->setStyleSheet(QString::fromUtf8("color:white;"));
        spendings = new QPushButton(Dashboard);
        spendings->setObjectName("spendings");
        spendings->setGeometry(QRect(1074, 345, 258, 43));
        spendings->setFont(font1);
        spendings->setStyleSheet(QString::fromUtf8("color:white;"));
        budget = new QPushButton(Dashboard);
        budget->setObjectName("budget");
        budget->setGeometry(QRect(1058, 410, 258, 44));
        budget->setFont(font1);
        budget->setStyleSheet(QString::fromUtf8("color:white;"));
        heading = new QLabel(Dashboard);
        heading->setObjectName("heading");
        heading->setGeometry(QRect(568, 176, 258, 51));
        QFont font2;
        font2.setPointSize(21);
        heading->setFont(font2);
        heading->setStyleSheet(QString::fromUtf8("color:white;\n"
""));
        input = new QLabel(Dashboard);
        input->setObjectName("input");
        input->setGeometry(QRect(630, 290, 200, 200));
        QFont font3;
        font3.setPointSize(22);
        input->setFont(font3);

        retranslateUi(Dashboard);

        QMetaObject::connectSlotsByName(Dashboard);
    } // setupUi

    void retranslateUi(QDialog *Dashboard)
    {
        Dashboard->setWindowTitle(QCoreApplication::translate("Dashboard", "Dialog", nullptr));
        backgroundd->setText(QCoreApplication::translate("Dashboard", "TextLabel", nullptr));
        editDetails->setText(QCoreApplication::translate("Dashboard", "Edit details", nullptr));
        currentBalance->setText(QCoreApplication::translate("Dashboard", "Current balance", nullptr));
        savingGoals->setText(QCoreApplication::translate("Dashboard", "Saving goals", nullptr));
        spendings->setText(QCoreApplication::translate("Dashboard", "Spendings", nullptr));
        budget->setText(QCoreApplication::translate("Dashboard", "Budget", nullptr));
        heading->setText(QCoreApplication::translate("Dashboard", "Budget", nullptr));
        input->setText(QCoreApplication::translate("Dashboard", "TextLabel", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Dashboard: public Ui_Dashboard {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DASHBOARD_H
