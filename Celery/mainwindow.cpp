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
        "   border-radius: 70rem;"
        "   font: bold;"
        "}"
        "QPushButton:hover {"
        "   background-color: #97D02C;"
        "}"
        );
    ui->heading->setStyleSheet("color: white");
    connect(ui->startNowbtn, &QPushButton::clicked, this, &MainWindow::on_startNowbtn_clicked);
    connect(ui->signIn, &QPushButton::clicked, this, &MainWindow::on_signIn_clicked);
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

void MainWindow::on_signIn_clicked()
{
    Register *registerWindow = new Register();
    registerWindow->show();
    this->close();
}

