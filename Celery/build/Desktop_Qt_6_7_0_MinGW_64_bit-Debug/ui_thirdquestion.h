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
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_thirdQuestion
{
public:
    QLabel *question;
    QLabel *nameTxt;
    QLabel *totalTxt;
    QLineEdit *nameAnswer;
    QLineEdit *amountAnswer;
    QLabel *backgroundd;
    QPushButton *okButton;

    void setupUi(QDialog *thirdQuestion)
    {
        if (thirdQuestion->objectName().isEmpty())
            thirdQuestion->setObjectName("thirdQuestion");
        thirdQuestion->resize(1500, 800);
        question = new QLabel(thirdQuestion);
        question->setObjectName("question");
        question->setGeometry(QRect(556, 220, 381, 91));
        QFont font;
        font.setBold(true);
        font.setItalic(false);
        question->setFont(font);
        question->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"font-size: 38px;\n"
"font: bold;"));
        nameTxt = new QLabel(thirdQuestion);
        nameTxt->setObjectName("nameTxt");
        nameTxt->setGeometry(QRect(373, 382, 111, 41));
        nameTxt->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"font-size: 30px;\n"
"font: bold;"));
        totalTxt = new QLabel(thirdQuestion);
        totalTxt->setObjectName("totalTxt");
        totalTxt->setGeometry(QRect(245, 487, 211, 31));
        totalTxt->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"font-size: 30px;\n"
"font: bold;"));
        nameAnswer = new QLineEdit(thirdQuestion);
        nameAnswer->setObjectName("nameAnswer");
        nameAnswer->setGeometry(QRect(478, 359, 573, 82));
        nameAnswer->setStyleSheet(QString::fromUtf8("background-color: rgb(51, 51, 51);\n"
"border-radius: 11px;\n"
" padding: 10px ;\n"
"color: white;\n"
"font-size: 50px;\n"
"font-weight: bold;"));
        amountAnswer = new QLineEdit(thirdQuestion);
        amountAnswer->setObjectName("amountAnswer");
        amountAnswer->setGeometry(QRect(478, 463, 573, 82));
        amountAnswer->setStyleSheet(QString::fromUtf8("background-color: rgb(51, 51, 51);\n"
"border-radius: 11px;\n"
" padding: 10px ;\n"
"color: white;\n"
"font-size: 50px;\n"
"font-weight: bold;"));
        backgroundd = new QLabel(thirdQuestion);
        backgroundd->setObjectName("backgroundd");
        backgroundd->setGeometry(QRect(0, 0, 1500, 800));
        okButton = new QPushButton(thirdQuestion);
        okButton->setObjectName("okButton");
        okButton->setGeometry(QRect(720, 598, 64, 66));
        QFont font1;
        font1.setFamilies({QString::fromUtf8("Arial")});
        font1.setPointSize(16);
        font1.setBold(true);
        font1.setItalic(false);
        okButton->setFont(font1);
        okButton->setCursor(QCursor(Qt::ArrowCursor));
        okButton->setAutoFillBackground(false);
        okButton->setStyleSheet(QString::fromUtf8("background-color:transparent;\n"
"font-weight:bold;\n"
"color:white;\n"
""));
        backgroundd->raise();
        question->raise();
        nameTxt->raise();
        totalTxt->raise();
        nameAnswer->raise();
        amountAnswer->raise();
        okButton->raise();

        retranslateUi(thirdQuestion);

        QMetaObject::connectSlotsByName(thirdQuestion);
    } // setupUi

    void retranslateUi(QDialog *thirdQuestion)
    {
        thirdQuestion->setWindowTitle(QCoreApplication::translate("thirdQuestion", "Dialog", nullptr));
        question->setText(QCoreApplication::translate("thirdQuestion", "What is your budget?", nullptr));
        nameTxt->setText(QCoreApplication::translate("thirdQuestion", "Name:", nullptr));
        totalTxt->setText(QCoreApplication::translate("thirdQuestion", "Total amount:", nullptr));
        backgroundd->setText(QCoreApplication::translate("thirdQuestion", "zz", nullptr));
        okButton->setText(QCoreApplication::translate("thirdQuestion", "OK", nullptr));
    } // retranslateUi

};

namespace Ui {
    class thirdQuestion: public Ui_thirdQuestion {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_THIRDQUESTION_H
