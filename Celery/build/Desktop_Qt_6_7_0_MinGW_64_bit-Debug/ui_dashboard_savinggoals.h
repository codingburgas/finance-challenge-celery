/********************************************************************************
** Form generated from reading UI file 'dashboard_savinggoals.ui'
**
** Created by: Qt User Interface Compiler version 6.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DASHBOARD_SAVINGGOALS_H
#define UI_DASHBOARD_SAVINGGOALS_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_dashboard_savingGoals
{
public:
    QLabel *savingGoalsText;
    QLabel *recentActivitiesText;
    QLabel *for_saving;
    QLabel *amount_saving;
    QPushButton *editDetailsButton;
    QLabel *backgroundd;
    QLabel *amount_saving_2;

    void setupUi(QDialog *dashboard_savingGoals)
    {
        if (dashboard_savingGoals->objectName().isEmpty())
            dashboard_savingGoals->setObjectName("dashboard_savingGoals");
        dashboard_savingGoals->resize(1500, 775);
        savingGoalsText = new QLabel(dashboard_savingGoals);
        savingGoalsText->setObjectName("savingGoalsText");
        savingGoalsText->setGeometry(QRect(186, 82, 258, 43));
        savingGoalsText->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"font-size: 36px;\n"
"weight: 500;"));
        recentActivitiesText = new QLabel(dashboard_savingGoals);
        recentActivitiesText->setObjectName("recentActivitiesText");
        recentActivitiesText->setGeometry(QRect(194, 154, 273, 44));
        recentActivitiesText->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"font-size: 24px;\n"
"weight: 300px;"));
        for_saving = new QLabel(dashboard_savingGoals);
        for_saving->setObjectName("for_saving");
        for_saving->setGeometry(QRect(213, 227, 36, 36));
        for_saving->setStyleSheet(QString::fromUtf8("color: rgb(207, 207, 207);\n"
"font-size: 24px;\n"
"weight: 300;"));
        amount_saving = new QLabel(dashboard_savingGoals);
        amount_saving->setObjectName("amount_saving");
        amount_saving->setGeometry(QRect(412, 227, 95, 36));
        amount_saving->setStyleSheet(QString::fromUtf8("color: rgb(207, 207, 207);\n"
"font-size: 24px;\n"
"weight: 300;"));
        editDetailsButton = new QPushButton(dashboard_savingGoals);
        editDetailsButton->setObjectName("editDetailsButton");
        editDetailsButton->setGeometry(QRect(589, 623, 322, 86));
        editDetailsButton->setStyleSheet(QString::fromUtf8("background-color: rgb(51, 51, 51);\n"
"border-radius: 40px;\n"
"font-size: 28px;\n"
"font: bold;\n"
"color: rgb(182, 253, 51);"));
        backgroundd = new QLabel(dashboard_savingGoals);
        backgroundd->setObjectName("backgroundd");
        backgroundd->setGeometry(QRect(0, 0, 1500, 775));
        amount_saving_2 = new QLabel(dashboard_savingGoals);
        amount_saving_2->setObjectName("amount_saving_2");
        amount_saving_2->setGeometry(QRect(760, 740, 95, 36));
        amount_saving_2->setStyleSheet(QString::fromUtf8("color: rgb(207, 207, 207);\n"
"font-size: 24px;\n"
"weight: 300;"));
        backgroundd->raise();
        savingGoalsText->raise();
        recentActivitiesText->raise();
        for_saving->raise();
        amount_saving->raise();
        editDetailsButton->raise();
        amount_saving_2->raise();

        retranslateUi(dashboard_savingGoals);

        QMetaObject::connectSlotsByName(dashboard_savingGoals);
    } // setupUi

    void retranslateUi(QDialog *dashboard_savingGoals)
    {
        dashboard_savingGoals->setWindowTitle(QCoreApplication::translate("dashboard_savingGoals", "Dialog", nullptr));
        savingGoalsText->setText(QCoreApplication::translate("dashboard_savingGoals", "Saving goals", nullptr));
        recentActivitiesText->setText(QCoreApplication::translate("dashboard_savingGoals", "Recent activities:", nullptr));
        for_saving->setText(QCoreApplication::translate("dashboard_savingGoals", "For", nullptr));
        amount_saving->setText(QCoreApplication::translate("dashboard_savingGoals", "Amount", nullptr));
        editDetailsButton->setText(QCoreApplication::translate("dashboard_savingGoals", "Done", nullptr));
        backgroundd->setText(QCoreApplication::translate("dashboard_savingGoals", "TextLabel", nullptr));
        amount_saving_2->setText(QCoreApplication::translate("dashboard_savingGoals", "Amount", nullptr));
    } // retranslateUi

};

namespace Ui {
    class dashboard_savingGoals: public Ui_dashboard_savingGoals {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DASHBOARD_SAVINGGOALS_H
