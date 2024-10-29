#include "dashboard_budget.h"
#include "ui_dashboard_budget.h"

dashboard_budget::dashboard_budget(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::dashboard_budget)
{
    ui->setupUi(this);

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

dashboard_budget::~dashboard_budget()
{
    delete ui;
}
