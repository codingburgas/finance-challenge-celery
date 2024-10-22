#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "register.h"
#include "ui_register.h"
#include<QPixmap>
#include<QFrame>
MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    QPixmap pix(":/images/mainWindow.png");
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
    connect(ui->startNowbtn, &QPushButton::clicked, this, &MainWindow::on_startNowbtn_clicked);
}

MainWindow::~MainWindow()
{
    delete ui;

}

void MainWindow::on_startNowbtn_clicked()
{
    Register *registerWindow = new Register();
    registerWindow->show();
    this->close();
}

