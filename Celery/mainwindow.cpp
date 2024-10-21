#include "mainwindow.h"
#include "ui_mainwindow.h"
#include<QPixmap>
#include<QFrame>
MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    QPixmap pix("C:/Users/nikir/Documents/Celery/images/mainWindow.png");
    ui->label_pic->setPixmap(pix);
    ui->startNowbtn->setStyleSheet(
        "QPushButton {"
        "   background-color: #B6FD33;"
        "   border-radius: 70px;"
        "   font: bold;"
        "}"
        "QPushButton:hover {"
        "   background-color: #97D02C;"
        "}"
        );
    ui->signInbtn->setStyleSheet("color:#6F6F6F");
    ui->heading->setStyleSheet("color: white");
}

MainWindow::~MainWindow()
{
    delete ui;

}
