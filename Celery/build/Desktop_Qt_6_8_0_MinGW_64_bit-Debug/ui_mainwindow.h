/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QLabel *label_pic;
    QPushButton *startNowbtn;
    QLabel *heading;
    QPushButton *signIn;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(1920, 1080);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        label_pic = new QLabel(centralwidget);
        label_pic->setObjectName("label_pic");
        label_pic->setGeometry(QRect(0, 0, 1920, 1080));
        startNowbtn = new QPushButton(centralwidget);
        startNowbtn->setObjectName("startNowbtn");
        startNowbtn->setGeometry(QRect(244, 598, 437, 153));
        QFont font;
        font.setFamilies({QString::fromUtf8("Arial")});
        font.setPointSize(40);
        startNowbtn->setFont(font);
        startNowbtn->setCursor(QCursor(Qt::CursorShape::ArrowCursor));
        heading = new QLabel(centralwidget);
        heading->setObjectName("heading");
        heading->setGeometry(QRect(89, 181, 771, 282));
        QFont font1;
        font1.setFamilies({QString::fromUtf8("Arial")});
        font1.setPointSize(50);
        font1.setBold(true);
        heading->setFont(font1);
        signIn = new QPushButton(centralwidget);
        signIn->setObjectName("signIn");
        signIn->setGeometry(QRect(250, 770, 131, 31));
        signIn->setStyleSheet(QString::fromUtf8("background-color: rgb(51, 51, 51);\n"
"border-radius: 9px;\n"
"color: rgb(111, 111, 111);"));
        MainWindow->setCentralWidget(centralwidget);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        label_pic->setText(QCoreApplication::translate("MainWindow", "TextLabel", nullptr));
        startNowbtn->setText(QCoreApplication::translate("MainWindow", "Start now", nullptr));
        heading->setText(QCoreApplication::translate("MainWindow", "Lorem ipsum dolor sit \n"
" amet consectetur \n"
" adipiscing?", nullptr));
        signIn->setText(QCoreApplication::translate("MainWindow", "Or Sign in", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
