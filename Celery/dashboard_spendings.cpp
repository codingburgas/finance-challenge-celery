#include "dashboard_spendings.h"
#include "ui_dashboard_spendings.h"

Dashboard_spendings::Dashboard_spendings(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::Dashboard_spendings)
{
    ui->setupUi(this);
    QPixmap pix(":/images/dashboard-spendings.png");
    ui->backgroundd->setPixmap(pix);
    ui->doneButton->setStyleSheet(
        "QPushButton {"
        "   background-color: #B6FD33;"
        "   border-radius: 70px;"
        "   font: bold;"
        "   color: #333333;"
        "}"
        );
    ui->spendingsText->setStyleSheet(
        "QLabel {"
        "   font: bold;"
        "   color: #B6FD33;"
        "}"
        );
    ui->budgetText->setStyleSheet(
        "QLabel {"
        "   font: bold;"
        "   color: #FFFFFF;"
        "}"
        );
    ui->savingGoalsText->setStyleSheet(
        "QLabel {"
        "   font: bold;"
        "   color: #FFFFFF;"
        "}"
        );
}

Dashboard_spendings::~Dashboard_spendings()
{
    delete ui;
}
