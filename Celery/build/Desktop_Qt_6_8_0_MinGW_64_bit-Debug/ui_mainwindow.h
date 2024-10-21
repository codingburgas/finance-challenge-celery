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
    QLabel *signInbtn;
    QLabel *heading;

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
        signInbtn = new QLabel(centralwidget);
        signInbtn->setObjectName("signInbtn");
        signInbtn->setGeometry(QRect(269, 779, 154, 48));
        QFont font1;
        font1.setFamilies({QString::fromUtf8("Arial")});
        font1.setPointSize(22);
        signInbtn->setFont(font1);
        heading = new QLabel(centralwidget);
        heading->setObjectName("heading");
        heading->setGeometry(QRect(89, 181, 771, 282));
        QFont font2;
        font2.setFamilies({QString::fromUtf8("Arial")});
        font2.setPointSize(50);
        font2.setBold(true);
        heading->setFont(font2);
        MainWindow->setCentralWidget(centralwidget);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        label_pic->setText(QCoreApplication::translate("MainWindow", "TextLabel", nullptr));
        startNowbtn->setText(QCoreApplication::translate("MainWindow", "Start now", nullptr));
        signInbtn->setText(QCoreApplication::translate("MainWindow", "Or Sign in", nullptr));
        heading->setText(QCoreApplication::translate("MainWindow", "Lorem ipsum dolor sit \n"
" amet consectetur \n"
" adipiscing?", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
