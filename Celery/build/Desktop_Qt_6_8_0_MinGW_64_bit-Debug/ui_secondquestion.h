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
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_secondQuestion
{
public:
    QLabel *question;
    QLabel *nameText;
    QLabel *targetText;
    QLineEdit *targetInput;
    QLineEdit *nameInpu;
    QLabel *backgroundd;
    QPushButton *okButton;

    void setupUi(QDialog *secondQuestion)
    {
        if (secondQuestion->objectName().isEmpty())
            secondQuestion->setObjectName("secondQuestion");
        secondQuestion->resize(1500, 775);
        question = new QLabel(secondQuestion);
        question->setObjectName("question");
        question->setGeometry(QRect(610, 243, 311, 74));
        QFont font;
        font.setBold(true);
        font.setItalic(false);
        question->setFont(font);
        question->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"font-size: 38px;\n"
"font: bold;"));
        nameText = new QLabel(secondQuestion);
        nameText->setObjectName("nameText");
        nameText->setGeometry(QRect(362, 386, 121, 31));
        nameText->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"font-size: 30px;\n"
"font: bold;"));
        targetText = new QLabel(secondQuestion);
        targetText->setObjectName("targetText");
        targetText->setGeometry(QRect(357, 492, 131, 41));
        targetText->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"font-size: 30px;\n"
"font: bold;"));
        targetInput = new QLineEdit(secondQuestion);
        targetInput->setObjectName("targetInput");
        targetInput->setGeometry(QRect(469, 473, 573, 82));
        targetInput->setStyleSheet(QString::fromUtf8("background-color: rgb(51, 51, 51);\n"
"border-radius: 11px;\n"
" padding: 10px ;\n"
"color: white;\n"
"font-size: 50px;\n"
"font-weight: bold;\n"
""));
        nameInpu = new QLineEdit(secondQuestion);
        nameInpu->setObjectName("nameInpu");
        nameInpu->setGeometry(QRect(469, 359, 573, 82));
        nameInpu->setStyleSheet(QString::fromUtf8("background-color: rgb(51, 51, 51);\n"
"border-radius: 11px;\n"
" padding: 10px ;\n"
"color: white;\n"
"font-size: 50px;\n"
"font-weight: bold;"));
        backgroundd = new QLabel(secondQuestion);
        backgroundd->setObjectName("backgroundd");
        backgroundd->setGeometry(QRect(0, 0, 1500, 775));
        okButton = new QPushButton(secondQuestion);
        okButton->setObjectName("okButton");
        okButton->setGeometry(QRect(723, 600, 64, 66));
        QFont font1;
        font1.setFamilies({QString::fromUtf8("Arial")});
        font1.setPointSize(16);
        font1.setBold(true);
        font1.setItalic(false);
        okButton->setFont(font1);
        okButton->setCursor(QCursor(Qt::CursorShape::ArrowCursor));
        okButton->setAutoFillBackground(false);
        okButton->setStyleSheet(QString::fromUtf8("background-color:transparent;\n"
"font-weight:bold;\n"
"color:white;\n"
""));
        backgroundd->raise();
        question->raise();
        nameText->raise();
        targetText->raise();
        targetInput->raise();
        nameInpu->raise();
        okButton->raise();

        retranslateUi(secondQuestion);

        QMetaObject::connectSlotsByName(secondQuestion);
    } // setupUi

    void retranslateUi(QDialog *secondQuestion)
    {
        secondQuestion->setWindowTitle(QCoreApplication::translate("secondQuestion", "Dialog", nullptr));
        question->setText(QCoreApplication::translate("secondQuestion", "Set a saving goal", nullptr));
        nameText->setText(QCoreApplication::translate("secondQuestion", "Name:", nullptr));
        targetText->setText(QCoreApplication::translate("secondQuestion", "Target:", nullptr));
        backgroundd->setText(QCoreApplication::translate("secondQuestion", "TextLabel", nullptr));
        okButton->setText(QCoreApplication::translate("secondQuestion", "OK", nullptr));
    } // retranslateUi

};

namespace Ui {
    class secondQuestion: public Ui_secondQuestion {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SECONDQUESTION_H
