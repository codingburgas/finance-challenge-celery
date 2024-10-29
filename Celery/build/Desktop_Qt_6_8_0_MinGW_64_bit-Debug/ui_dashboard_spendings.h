/********************************************************************************
** Form generated from reading UI file 'dashboard_spendings.ui'
**
** Created by: Qt User Interface Compiler version 6.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DASHBOARD_SPENDINGS_H
#define UI_DASHBOARD_SPENDINGS_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_Dashboard_spendings
{
public:
    QLabel *spendingsText;
    QPushButton *doneButton;
    QLabel *recent_activities;
    QLabel *amountPerGiven;
    QLabel *purposeOfAmount;
    QLabel *backgroundd;

    void setupUi(QDialog *Dashboard_spendings)
    {
        if (Dashboard_spendings->objectName().isEmpty())
            Dashboard_spendings->setObjectName("Dashboard_spendings");
        Dashboard_spendings->resize(1500, 775);
        spendingsText = new QLabel(Dashboard_spendings);
        spendingsText->setObjectName("spendingsText");
        spendingsText->setGeometry(QRect(190, 90, 141, 41));
        spendingsText->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"font: bold;\n"
"font-size: 28px;"));
        doneButton = new QPushButton(Dashboard_spendings);
        doneButton->setObjectName("doneButton");
        doneButton->setGeometry(QRect(589, 623, 322, 86));
        doneButton->setStyleSheet(QString::fromUtf8("background-color: rgb(51, 51, 51);\n"
"border-radius: 40px;\n"
"font-size: 28px;\n"
"font: bold;\n"
"color: rgb(182, 253, 51);"));
        recent_activities = new QLabel(Dashboard_spendings);
        recent_activities->setObjectName("recent_activities");
        recent_activities->setGeometry(QRect(190, 130, 161, 20));
        recent_activities->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"font-size: 20px;"));
        amountPerGiven = new QLabel(Dashboard_spendings);
        amountPerGiven->setObjectName("amountPerGiven");
        amountPerGiven->setGeometry(QRect(380, 280, 171, 91));
        QFont font;
        font.setPointSize(16);
        amountPerGiven->setFont(font);
        amountPerGiven->setStyleSheet(QString::fromUtf8("color:white;"));
        purposeOfAmount = new QLabel(Dashboard_spendings);
        purposeOfAmount->setObjectName("purposeOfAmount");
        purposeOfAmount->setGeometry(QRect(218, 280, 141, 91));
        purposeOfAmount->setFont(font);
        purposeOfAmount->setStyleSheet(QString::fromUtf8("color:white;"));
        backgroundd = new QLabel(Dashboard_spendings);
        backgroundd->setObjectName("backgroundd");
        backgroundd->setGeometry(QRect(0, 0, 1500, 775));
        backgroundd->raise();
        spendingsText->raise();
        doneButton->raise();
        recent_activities->raise();
        amountPerGiven->raise();
        purposeOfAmount->raise();

        retranslateUi(Dashboard_spendings);

        QMetaObject::connectSlotsByName(Dashboard_spendings);
    } // setupUi

    void retranslateUi(QDialog *Dashboard_spendings)
    {
        Dashboard_spendings->setWindowTitle(QCoreApplication::translate("Dashboard_spendings", "Dialog", nullptr));
        spendingsText->setText(QCoreApplication::translate("Dashboard_spendings", "Spendings", nullptr));
        doneButton->setText(QCoreApplication::translate("Dashboard_spendings", "Done", nullptr));
        recent_activities->setText(QCoreApplication::translate("Dashboard_spendings", "Recent activities:", nullptr));
        amountPerGiven->setText(QString());
        purposeOfAmount->setText(QString());
        backgroundd->setText(QCoreApplication::translate("Dashboard_spendings", "TextLabel", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Dashboard_spendings: public Ui_Dashboard_spendings {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DASHBOARD_SPENDINGS_H
