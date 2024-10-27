#include "dashboard.h"
#include "ui_dashboard.h"
#include <QPixmap>
Dashboard::Dashboard(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::Dashboard)
{
    ui->setupUi(this);
    QPixmap pix(":/images/dashboard.png");
    ui->backgroundd->setPixmap(pix);
    ui->currentBalance->setStyleSheet(
        "QPushButton {"
        "   background-color: transparent;"
        "   border-radius: 70px;"
        "   font: bold;"
        "   color: #B6FD33;"
        "}"
        );
    ui->savingGoals->setStyleSheet(
        "QPushButton {"
        "   background-color: transparent;"
        "   border-radius: 70px;"
        "   font: bold;"
        "   color: #B6FD33;"
        "}"
        );
    ui->spendings->setStyleSheet(
        "QPushButton {"
        "   background-color: transparent;"
        "   border-radius: 70px;"
        "   font: bold;"
        "   color: #B6FD33;"
        "}"
        );
    ui->budget->setStyleSheet(
        "QPushButton {"
        "   background-color: transparent;"
        "   border-radius: 70px;"
        "   font: bold;"
        "   color: #B6FD33;"
        "}"
        );
}

Dashboard::~Dashboard()
{
    delete ui;
}
