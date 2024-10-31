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
    QLabel *amount_saving;
    QLabel *purposeOfAmount_2;
    QLabel *purposeOfAmount_3;
    QLabel *purposeOfAmount_4;
    QLabel *amountPerGiven_2;
    QLabel *amountPerGiven_3;
    QLabel *amountPerGiven_4;

    void setupUi(QDialog *Dashboard_spendings)
    {
        if (Dashboard_spendings->objectName().isEmpty())
            Dashboard_spendings->setObjectName("Dashboard_spendings");
        Dashboard_spendings->resize(1500, 775);
        spendingsText = new QLabel(Dashboard_spendings);
        spendingsText->setObjectName("spendingsText");
        spendingsText->setGeometry(QRect(186, 82, 258, 43));
        QFont font;
        font.setBold(true);
        font.setItalic(false);
        spendingsText->setFont(font);
        spendingsText->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"font: bold;\n"
"font-size: 30px;"));
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
        recent_activities->setGeometry(QRect(194, 154, 184, 44));
        recent_activities->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"font-size: 23px;"));
        amountPerGiven = new QLabel(Dashboard_spendings);
        amountPerGiven->setObjectName("amountPerGiven");
        amountPerGiven->setGeometry(QRect(420, 280, 171, 91));
        QFont font1;
        font1.setPointSize(16);
        amountPerGiven->setFont(font1);
        amountPerGiven->setStyleSheet(QString::fromUtf8("color:white;"));
        purposeOfAmount = new QLabel(Dashboard_spendings);
        purposeOfAmount->setObjectName("purposeOfAmount");
        purposeOfAmount->setGeometry(QRect(218, 280, 191, 91));
        purposeOfAmount->setFont(font1);
        purposeOfAmount->setStyleSheet(QString::fromUtf8("color:white;"));
        backgroundd = new QLabel(Dashboard_spendings);
        backgroundd->setObjectName("backgroundd");
        backgroundd->setGeometry(QRect(0, 0, 1500, 775));
        amount_saving = new QLabel(Dashboard_spendings);
        amount_saving->setObjectName("amount_saving");
        amount_saving->setGeometry(QRect(412, 227, 95, 36));
        amount_saving->setStyleSheet(QString::fromUtf8("color: rgb(207, 207, 207);\n"
"font-size: 24px;\n"
"weight: 300;"));
        purposeOfAmount_2 = new QLabel(Dashboard_spendings);
        purposeOfAmount_2->setObjectName("purposeOfAmount_2");
        purposeOfAmount_2->setGeometry(QRect(218, 337, 171, 91));
        purposeOfAmount_2->setFont(font1);
        purposeOfAmount_2->setStyleSheet(QString::fromUtf8("color:white;"));
        purposeOfAmount_3 = new QLabel(Dashboard_spendings);
        purposeOfAmount_3->setObjectName("purposeOfAmount_3");
        purposeOfAmount_3->setGeometry(QRect(218, 394, 171, 91));
        purposeOfAmount_3->setFont(font1);
        purposeOfAmount_3->setStyleSheet(QString::fromUtf8("color:white;"));
        purposeOfAmount_4 = new QLabel(Dashboard_spendings);
        purposeOfAmount_4->setObjectName("purposeOfAmount_4");
        purposeOfAmount_4->setGeometry(QRect(218, 451, 181, 91));
        purposeOfAmount_4->setFont(font1);
        purposeOfAmount_4->setStyleSheet(QString::fromUtf8("color:white;"));
        amountPerGiven_2 = new QLabel(Dashboard_spendings);
        amountPerGiven_2->setObjectName("amountPerGiven_2");
        amountPerGiven_2->setGeometry(QRect(420, 337, 171, 91));
        amountPerGiven_2->setFont(font1);
        amountPerGiven_2->setStyleSheet(QString::fromUtf8("color:white;"));
        amountPerGiven_3 = new QLabel(Dashboard_spendings);
        amountPerGiven_3->setObjectName("amountPerGiven_3");
        amountPerGiven_3->setGeometry(QRect(420, 394, 171, 91));
        amountPerGiven_3->setFont(font1);
        amountPerGiven_3->setStyleSheet(QString::fromUtf8("color:white;"));
        amountPerGiven_4 = new QLabel(Dashboard_spendings);
        amountPerGiven_4->setObjectName("amountPerGiven_4");
        amountPerGiven_4->setGeometry(QRect(420, 451, 171, 91));
        amountPerGiven_4->setFont(font1);
        amountPerGiven_4->setStyleSheet(QString::fromUtf8("color:white;"));
        backgroundd->raise();
        spendingsText->raise();
        doneButton->raise();
        recent_activities->raise();
        amountPerGiven->raise();
        purposeOfAmount->raise();
        amount_saving->raise();
        purposeOfAmount_2->raise();
        purposeOfAmount_3->raise();
        purposeOfAmount_4->raise();
        amountPerGiven_2->raise();
        amountPerGiven_3->raise();
        amountPerGiven_4->raise();

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
        amount_saving->setText(QCoreApplication::translate("Dashboard_spendings", "Amount", nullptr));
        purposeOfAmount_2->setText(QString());
        purposeOfAmount_3->setText(QString());
        purposeOfAmount_4->setText(QString());
        amountPerGiven_2->setText(QString());
        amountPerGiven_3->setText(QString());
        amountPerGiven_4->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class Dashboard_spendings: public Ui_Dashboard_spendings {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DASHBOARD_SPENDINGS_H
