/********************************************************************************
** Form generated from reading UI file 'secondquestion.ui'
**
** Created by: Qt User Interface Compiler version 6.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SECONDQUESTION_H
#define UI_SECONDQUESTION_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>

QT_BEGIN_NAMESPACE

class Ui_secondQuestion
{
public:
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLineEdit *lineEdit;
    QLineEdit *lineEdit_2;
    QLabel *label_4;
    QLabel *backgroundd;

    void setupUi(QDialog *secondQuestion)
    {
        if (secondQuestion->objectName().isEmpty())
            secondQuestion->setObjectName("secondQuestion");
        secondQuestion->resize(1920, 1080);
        label = new QLabel(secondQuestion);
        label->setObjectName("label");
        label->setGeometry(QRect(320, 50, 551, 91));
        label->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"font-size: 64px;\n"
"font: bold;"));
        label_2 = new QLabel(secondQuestion);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(350, 200, 121, 31));
        label_2->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"font-size: 30px;\n"
"font: bold;"));
        label_3 = new QLabel(secondQuestion);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(350, 250, 131, 41));
        label_3->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"font-size: 30px;\n"
"font: bold;"));
        lineEdit = new QLineEdit(secondQuestion);
        lineEdit->setObjectName("lineEdit");
        lineEdit->setGeometry(QRect(490, 210, 261, 26));
        lineEdit->setStyleSheet(QString::fromUtf8("background-color: rgb(51, 51, 51);\n"
"border-radius: 11px;\n"
""));
        lineEdit_2 = new QLineEdit(secondQuestion);
        lineEdit_2->setObjectName("lineEdit_2");
        lineEdit_2->setGeometry(QRect(490, 260, 261, 26));
        lineEdit_2->setStyleSheet(QString::fromUtf8("background-color: rgb(51, 51, 51);\n"
"border-radius: 11px;"));
        label_4 = new QLabel(secondQuestion);
        label_4->setObjectName("label_4");
        label_4->setGeometry(QRect(540, 350, 63, 20));
        label_4->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"font: bold;\n"
"font-size: 20px;"));
        backgroundd = new QLabel(secondQuestion);
        backgroundd->setObjectName("backgroundd");
        backgroundd->setGeometry(QRect(0, 0, 1921, 1081));
        backgroundd->raise();
        label->raise();
        label_2->raise();
        label_3->raise();
        lineEdit->raise();
        lineEdit_2->raise();
        label_4->raise();

        retranslateUi(secondQuestion);

        QMetaObject::connectSlotsByName(secondQuestion);
    } // setupUi

    void retranslateUi(QDialog *secondQuestion)
    {
        secondQuestion->setWindowTitle(QCoreApplication::translate("secondQuestion", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("secondQuestion", "Set a saving goal", nullptr));
        label_2->setText(QCoreApplication::translate("secondQuestion", "Name:", nullptr));
        label_3->setText(QCoreApplication::translate("secondQuestion", "Target:", nullptr));
        label_4->setText(QCoreApplication::translate("secondQuestion", "OK", nullptr));
        backgroundd->setText(QCoreApplication::translate("secondQuestion", "TextLabel", nullptr));
    } // retranslateUi

};

namespace Ui {
    class secondQuestion: public Ui_secondQuestion {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SECONDQUESTION_H
