/********************************************************************************
** Form generated from reading UI file 'firstquestion.ui'
**
** Created by: Qt User Interface Compiler version 6.8.0
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
        firstQuestion->resize(1500, 775);
        question = new QLabel(firstQuestion);
        question->setObjectName("question");
        question->setGeometry(QRect(499, 221, 547, 74));
        QFont font;
        font.setFamilies({QString::fromUtf8("Arial")});
        font.setPointSize(23);
        font.setBold(true);
        question->setFont(font);
        question->setStyleSheet(QString::fromUtf8("color: white;"));
        backgroundd = new QLabel(firstQuestion);
        backgroundd->setObjectName("backgroundd");
        backgroundd->setGeometry(QRect(0, 0, 1500, 775));
        answer = new QLineEdit(firstQuestion);
        answer->setObjectName("answer");
        answer->setGeometry(QRect(442, 359, 573, 82));
        answer->setStyleSheet(QString::fromUtf8("background-color: #333333;\n"
"border-radius: 9px;\n"
" padding: 10px 200px ;\n"
"color: white;\n"
"font-size: 50px;\n"
"font-weight: bold;\n"
"\n"
""));
        okButton = new QPushButton(firstQuestion);
        okButton->setObjectName("okButton");
        okButton->setGeometry(QRect(700, 567, 64, 66));
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
