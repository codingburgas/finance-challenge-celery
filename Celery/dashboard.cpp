#include "dashboard.h"
#include "ui_dashboard.h"
#include "dashboard_spendings.h"
#include "dashboard_newbalance.h"
#include "dashboard_newbudget.h"
#include "dashboard_savinggoals.h"

#include <QPixmap>
Dashboard::Dashboard( QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::Dashboard)
    , isBalanceClicked(false)
    , isBudgetClicked(true)
{
    ui->setupUi(this);
    QPixmap pix(":/images/dashboard.png");
    ui->backgrounddd->setPixmap(pix);


}

Dashboard::~Dashboard()
{
    delete ui;
}

void Dashboard::on_currentBalance_clicked()
{
    isBudgetClicked = false;
    isBalanceClicked = true;
    ui->label->setText("Current Balance");
    ui->mainn->setText(QString::number(currentUser.balance));
    ui->currentBalance->setStyleSheet("text-decoration: underline; color:white; background-color:transparent;");
    ui->budget->setStyleSheet("text-decoration: none; color:white; background-color:transparent;");

}


void Dashboard::on_budget_clicked()
{
    isBudgetClicked = true;
    isBalanceClicked = false;
    ui->label->setText("Budget");
    ui->currentBalance->setStyleSheet("text-decoration: none; color:white; background-color:transparent;");
    ui->budget->setStyleSheet("text-decoration: underlined; color:white; background-color:transparent;");
}


void Dashboard::on_spendings_clicked()
{
    Dashboard_spendings *spendingsWindow = new Dashboard_spendings();
    spendingsWindow->show();
    this->close();
}

void Dashboard::on_savingGoals_clicked()
{
    dashboard_savingGoals *savingWindow = new dashboard_savingGoals();
    savingWindow->show();
    this->close();
}


void Dashboard::on_editDetails_clicked()
{
    if(isBudgetClicked){

        dashboard_newBudget *newBudget = new dashboard_newBudget();
        newBudget->show();
        this->close();
    }

    if(isBalanceClicked){
        dashboard_newBalance *balanceWindow = new dashboard_newBalance();
        balanceWindow->show();
        this->close();
    }
}



