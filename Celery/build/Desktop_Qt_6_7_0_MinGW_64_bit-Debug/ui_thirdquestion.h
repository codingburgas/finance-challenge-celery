/********************************************************************************
** Form generated from reading UI file 'thirdquestion.ui'
**
** Created by: Qt User Interface Compiler version 6.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_THIRDQUESTION_H
#define UI_THIRDQUESTION_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>

QT_BEGIN_NAMESPACE

class Ui_thirdQuestion
{
public:
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLineEdit *lineEdit;
    QLineEdit *lineEdit_2;
    QLabel *label_4;
    QLabel *backgroundd;

    void setupUi(QDialog *thirdQuestion)
    {
        if (thirdQuestion->objectName().isEmpty())
            thirdQuestion->setObjectName("thirdQuestion");
        thirdQuestion->resize(1920, 1080);
        label = new QLabel(thirdQuestion);
        label->setObjectName("label");
        label->setGeometry(QRect(260, 50, 681, 91));
        label->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"font-size: 64px;\n"
"font: bold;"));
        label_2 = new QLabel(thirdQuestion);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(350, 180, 111, 41));
        label_2->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"font-size: 30px;\n"
"font: bold;"));
        label_3 = new QLabel(thirdQuestion);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(350, 240, 211, 31));
        label_3->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"font-size: 30px;\n"
"font: bold;"));
        lineEdit = new QLineEdit(thirdQuestion);
        lineEdit->setObjectName("lineEdit");
        lineEdit->setGeometry(QRect(470, 190, 291, 26));
        lineEdit->setStyleSheet(QString::fromUtf8("background-color: rgb(51, 51, 51);\n"
"border-radius: 11px;"));
        lineEdit_2 = new QLineEdit(thirdQuestion);
        lineEdit_2->setObjectName("lineEdit_2");
        lineEdit_2->setGeometry(QRect(560, 240, 201, 26));
        lineEdit_2->setStyleSheet(QString::fromUtf8("background-color: rgb(51, 51, 51);\n"
"border-radius: 11px;"));
        label_4 = new QLabel(thirdQuestion);
        label_4->setObjectName("label_4");
        label_4->setGeometry(QRect(530, 320, 63, 20));
        label_4->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"font-size: 20px;\n"
"font: bold;"));
        backgroundd = new QLabel(thirdQuestion);
        backgroundd->setObjectName("backgroundd");
        backgroundd->setGeometry(QRect(0, 0, 61, 41));

        retranslateUi(thirdQuestion);

        QMetaObject::connectSlotsByName(thirdQuestion);
    } // setupUi

    void retranslateUi(QDialog *thirdQuestion)
    {
        thirdQuestion->setWindowTitle(QCoreApplication::translate("thirdQuestion", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("thirdQuestion", "What is your budget?", nullptr));
        label_2->setText(QCoreApplication::translate("thirdQuestion", "Name:", nullptr));
        label_3->setText(QCoreApplication::translate("thirdQuestion", "Total amount:", nullptr));
        label_4->setText(QCoreApplication::translate("thirdQuestion", "OK", nullptr));
        backgroundd->setText(QCoreApplication::translate("thirdQuestion", "TextLabel", nullptr));
    } // retranslateUi

};

namespace Ui {
    class thirdQuestion: public Ui_thirdQuestion {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_THIRDQUESTION_H
