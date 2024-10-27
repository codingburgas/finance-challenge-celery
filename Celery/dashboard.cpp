#include "dashboard.h"
#include "ui_dashboard.h"
#include "dashboard_spendings.h"
#include "ui_dashboard_spendings.h"
#include <QPixmap>
Dashboard::Dashboard(const QString &balance, QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::Dashboard)
    , balance(balance)
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

void Dashboard::on_currentBalance_clicked()
{
    ui->heading->setText("Current Balance");
     ui->input->setText(balance);
}


void Dashboard::on_budget_clicked()
{
     ui->heading->setText("Budget");
}


void Dashboard::on_spendings_clicked()
{
    Dashboard_spendings *spendingsWindow = new Dashboard_spendings();
    spendingsWindow->show();
    this->close();
}

