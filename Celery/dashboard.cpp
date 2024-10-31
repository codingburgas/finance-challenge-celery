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
    , isSavingGoalsClicked(false)
    , isSpendingsClicked(false)
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
    isSpendingsClicked = false;
    isBalanceClicked = true;
    isBudgetClicked = false;
    isSavingGoalsClicked = false;
    ui->label->setText("Current Balance");
    ui->spendings->setStyleSheet("text-decoration: none; color:white; background-color:transparent;");
    ui->budget->setStyleSheet("text-decoration: none; color:white; background-color:transparent;");
    ui->savingGoals->setStyleSheet("text-decoration: none; color:white; background-color:transparent;");

    ui->currentBalance->setStyleSheet("text-decoration: underlined; color:white; background-color:transparent;");
}


void Dashboard::on_budget_clicked()
{
    isSpendingsClicked = false;
    isBalanceClicked = false;
    isBudgetClicked = true;
    isSavingGoalsClicked = false;
    ui->label->setText("Budget");
    ui->currentBalance->setStyleSheet("text-decoration: none; color:white; background-color:transparent;");
    ui->spendings->setStyleSheet("text-decoration: none; color:white; background-color:transparent;");
    ui->savingGoals->setStyleSheet("text-decoration: none; color:white; background-color:transparent;");

    ui->budget->setStyleSheet("text-decoration: underlined; color:white; background-color:transparent;");
}


void Dashboard::on_spendings_clicked()
{
    isSpendingsClicked = true;
    isBalanceClicked = false;
    isBudgetClicked = false;
    isSavingGoalsClicked = false;
    ui->label->setText("Spendings");
    ui->currentBalance->setStyleSheet("text-decoration: none; color:white; background-color:transparent;");
    ui->budget->setStyleSheet("text-decoration: none; color:white; background-color:transparent;");
    ui->savingGoals->setStyleSheet("text-decoration: none; color:white; background-color:transparent;");

    ui->spendings->setStyleSheet("text-decoration: underlined; color:white; background-color:transparent;");
}

void Dashboard::on_savingGoals_clicked()
{
    isSpendingsClicked = false;
    isSavingGoalsClicked = true;
    isBudgetClicked = false;
    isBalanceClicked = false;
    ui->label->setText("Saving Goals");
    ui->currentBalance->setStyleSheet("text-decoration: none; color:white; background-color:transparent;");
    ui->budget->setStyleSheet("text-decoration: none; color:white; background-color:transparent;");
    ui->spendings->setStyleSheet("text-decoration: none; color:white; background-color:transparent;");

    ui->savingGoals->setStyleSheet("text-decoration: underlined; color:white; background-color:transparent;");
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

    if(isSavingGoalsClicked){
        dashboard_savingGoals *savingWindow = new dashboard_savingGoals();
        savingWindow->show();
        this->close();
    }

    if(isSpendingsClicked){
        Dashboard_spendings *spendings = new Dashboard_spendings();
        spendings->show();
        this->close();
    }
}
