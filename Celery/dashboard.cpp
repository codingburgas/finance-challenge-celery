#include "dashboard.h"
#include "ui_dashboard.h"
#include "dashboard_spendings.h"
#include "dashboard_newbalance.h"
#include "dashboard_newbudget.h"
#include "dashboard_savinggoals.h"
#include <numeric>
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
    ui->label->setText(QString::fromStdString(currentUser.username) + "'s Budget");
    if(currentUser.budgetPlan.empty()){
        return;
    }
    ui->firstBudgetName->setText(QString::fromStdString(currentUser.budgetPlan.rbegin()->name));
    if (currentUser.budgetPlan.size() > 1) {
        ui->secondBudgetName->setText(QString::fromStdString(currentUser.budgetPlan[currentUser.budgetPlan.size() - 2].name));
    }
    if (currentUser.budgetPlan.size() > 2) {
        ui->thirdBudgetName->setText(QString::fromStdString(currentUser.budgetPlan[currentUser.budgetPlan.size() - 3].name));
    }
    if (currentUser.budgetPlan.size() > 3) {
        ui->forthBudgetName->setText(QString::fromStdString(currentUser.budgetPlan[currentUser.budgetPlan.size() - 4].name));
    }


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
    ui->label->setText(QString::fromStdString(currentUser.username) + "'s Current Balance");
    ui->spendings->setStyleSheet("text-decoration: none; color:white; background-color:transparent;");
    ui->budget->setStyleSheet("text-decoration: none; color:white; background-color:transparent;");
    ui->savingGoals->setStyleSheet("text-decoration: none; color:white; background-color:transparent;");
    ui->mainn->setText(QString::number(currentUser.balance));
    ui->currentBalance->setStyleSheet("text-decoration: underlined; color:white; background-color:transparent;");
}


void Dashboard::on_budget_clicked()
{
    isSpendingsClicked = false;
    isBalanceClicked = false;
    isBudgetClicked = true;
    isSavingGoalsClicked = false;
    ui->label->setText(QString::fromStdString(currentUser.username) + "'s Budget");
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
    double totalSpent = 0.0;
    for (const auto& transaction : currentUser.spendings) {
        totalSpent += transaction.spent;
    }
    ui->label->setText(QString::fromStdString(currentUser.username) + "'s Spendings");
    ui->currentBalance->setStyleSheet("text-decoration: none; color:white; background-color:transparent;");
    ui->budget->setStyleSheet("text-decoration: none; color:white; background-color:transparent;");
    ui->savingGoals->setStyleSheet("text-decoration: none; color:white; background-color:transparent;");
    ui->mainn->setText(QString::number(totalSpent));
    ui->spendings->setStyleSheet("text-decoration: underlined; color:white; background-color:transparent;");
}

void Dashboard::on_savingGoals_clicked()
{
    isSpendingsClicked = false;
    isSavingGoalsClicked = true;
    isBudgetClicked = false;
    isBalanceClicked = false;
    ui->label->setText(QString::fromStdString(currentUser.username) + "'s Saving Goals");
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

void Dashboard::on_secondBudgetName_linkActivated(const QString &link)
{
    ui->mainn->setText("aaaaaaaaaaaaaaaaaaaaaaaa");
}

