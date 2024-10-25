/********************************************************************************
** Form generated from reading UI file 'firstquestion.ui'
**
** Created by: Qt User Interface Compiler version 6.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FIRSTQUESTION_H
#define UI_FIRSTQUESTION_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_firstQuestion
{
public:
    QLabel *question;
    QLabel *backgroundd;
    QLineEdit *answer;
    QPushButton *okButton;

    void setupUi(QDialog *firstQuestion)
    {
        if (firstQuestion->objectName().isEmpty())
            firstQuestion->setObjectName("firstQuestion");
        firstQuestion->resize(1920, 1080);
        question = new QLabel(firstQuestion);
        question->setObjectName("question");
        question->setGeometry(QRect(525, 322, 869, 108));
        QFont font;
        font.setFamilies({QString::fromUtf8("Arial")});
        font.setPointSize(42);
        font.setBold(true);
        question->setFont(font);
        question->setStyleSheet(QString::fromUtf8("color: white;"));
        backgroundd = new QLabel(firstQuestion);
        backgroundd->setObjectName("backgroundd");
        backgroundd->setGeometry(QRect(0, 0, 1920, 1080));
        answer = new QLineEdit(firstQuestion);
        answer->setObjectName("answer");
        answer->setGeometry(QRect(600, 480, 635, 120));
        answer->setStyleSheet(QString::fromUtf8("background-color: #333333;\n"
"border-radius: 9px;\n"
" padding: 10px 240px ;\n"
"color: white;\n"
"font-size: 50px;\n"
"font-weight: bold;\n"
"\n"
""));
        okButton = new QPushButton(firstQuestion);
        okButton->setObjectName("okButton");
        okButton->setGeometry(QRect(865, 808, 80, 96));
        QFont font1;
        font1.setFamilies({QString::fromUtf8("Arial")});
        font1.setPointSize(31);
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
        answer->raise();
        okButton->raise();

        retranslateUi(firstQuestion);

        QMetaObject::connectSlotsByName(firstQuestion);
    } // setupUi

    void retranslateUi(QDialog *firstQuestion)
    {
        firstQuestion->setWindowTitle(QCoreApplication::translate("firstQuestion", "Dialog", nullptr));
        question->setText(QCoreApplication::translate("firstQuestion", "What is your current balance?", nullptr));
        backgroundd->setText(QCoreApplication::translate("firstQuestion", "TextLabel", nullptr));
        okButton->setText(QCoreApplication::translate("firstQuestion", "OK", nullptr));
    } // retranslateUi

};

namespace Ui {
    class firstQuestion: public Ui_firstQuestion {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FIRSTQUESTION_H
