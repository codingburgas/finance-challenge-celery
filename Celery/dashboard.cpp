#include "dashboard.h"
#include "ui_dashboard.h"
#include "dashboard_spendings.h"
#include "dashboard_newbalance.h"
#include "dashboard_newbudget.h"
#include "dashboard_savinggoals.h"
#include <numeric>
#include <QPixmap>

void Dashboard::budgetFunction(){
    QPixmap celery(":/images/images/celery.png");
    ui->label->setText(QString::fromStdString(currentUser.username) + "'s Budget");

    int width = ui->mainn->width();
    int height = ui->mainn->height();

    if (currentUser.budgetPlan.empty()) {
        return;
    }

    double planned = currentUser.budgetPlan.rbegin()->planned;
    double spent = currentUser.budgetPlan.rbegin()->spent;
    double percentageRemaining = (planned > 0) ? (planned - spent) / planned : 0.0;  // Calculate the remaining percentage

    // Calculate displayedHeight based on percentage remaining
    int displayedHeight = static_cast<int>(celery.height() * percentageRemaining);
    QPixmap croppedCelery = celery.copy(0, celery.height() - displayedHeight, celery.width(), displayedHeight);
    QPixmap scaledCelery = croppedCelery.scaled(width, height, Qt::KeepAspectRatio, Qt::SmoothTransformation);
    ui->mainn->setPixmap(scaledCelery);

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

    ui->clickedBudget->setText(QString::fromStdString(currentUser.budgetPlan.rbegin()->name));
    double amountLeft = planned - spent;
    ui->clickedBudgetAmount->setText(QString::number(amountLeft) + " left");

}
void Dashboard::budgetDisplayCelery(double planned, double spent, double amountLeft){
    ui->clickedBudgetAmount->setText(QString::number(amountLeft) + " left");
    double percentageRemaining = (planned > 0) ? (planned - spent) / planned : 0.0;
    QPixmap celery(":/images/images/celery.png");
    int width = ui->mainn->width();
    int height = ui->mainn->height();

    int displayedHeight = static_cast<int>(celery.height() * percentageRemaining);
    QPixmap croppedCelery = celery.copy(0, celery.height() - displayedHeight, celery.width(), displayedHeight);
    QPixmap scaledCelery = croppedCelery.scaled(width, height, Qt::KeepAspectRatio, Qt::SmoothTransformation);
    ui->mainn->setPixmap(scaledCelery);
}

void Dashboard::sidebarBudgetClicked(int num){

    ui->clickedBudget->setText(QString::fromStdString(currentUser.budgetPlan[currentUser.budgetPlan.size() - num].name));
    double planned = currentUser.budgetPlan[currentUser.budgetPlan.size() - num].planned;
    double spent = currentUser.budgetPlan[currentUser.budgetPlan.size() - num].spent;
    double amountLeft = planned - spent;
    ui->clickedBudgetAmount->setText(QString::number(amountLeft) + " left");
    budgetDisplayCelery( planned,  spent, amountLeft);
}
void Dashboard::sidebarSavingClicked(int num){

    ui->clickedBudget->setText(QString::fromStdString(currentUser.savingGoals[currentUser.savingGoals.size() - num].name));
    double req = currentUser.savingGoals[currentUser.savingGoals.size() - num].req;
    double saved = currentUser.savingGoals[currentUser.savingGoals.size() - num].saved;
    double amountLeft = req - saved;
    ui->clickedBudgetAmount->setText(QString::number(amountLeft) + " left");
    budgetDisplayCelery( req,  saved, amountLeft);
}
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
    budgetFunction();


}
void Dashboard::clearBudgetElements()
{
    ui->firstBudgetName->setText("");
    ui->secondBudgetName->setText("");
    ui->thirdBudgetName->setText("");
    ui->forthBudgetName->setText("");
    ui->clickedBudget->setText("");
    ui->clickedBudgetAmount->setText("");
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
    clearBudgetElements();
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
    ui->currentBalance->setStyleSheet("text-decoration: none; color:white; background-color:transparent;");
    ui->spendings->setStyleSheet("text-decoration: none; color:white; background-color:transparent;");
    ui->savingGoals->setStyleSheet("text-decoration: none; color:white; background-color:transparent;");
    ui->budget->setStyleSheet("text-decoration: underlined; color:white; background-color:transparent;");
    budgetFunction();
}


void Dashboard::on_spendings_clicked()
{
    clearBudgetElements();
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
    clearBudgetElements();
    isSpendingsClicked = false;
    isSavingGoalsClicked = true;
    isBudgetClicked = false;
    isBalanceClicked = false;
    ui->label->setText(QString::fromStdString(currentUser.username) + "'s Saving Goals");
    ui->currentBalance->setStyleSheet("text-decoration: none; color:white; background-color:transparent;");
    ui->budget->setStyleSheet("text-decoration: none; color:white; background-color:transparent;");
    ui->spendings->setStyleSheet("text-decoration: none; color:white; background-color:transparent;");
    ui->savingGoals->setStyleSheet("text-decoration: underlined; color:white; background-color:transparent;");
    sidebarSavingClicked(1);
    ui->firstBudgetName->setText(QString::fromStdString(currentUser.savingGoals.rbegin()->name));
    if (currentUser.savingGoals.size() > 1) {
        ui->secondBudgetName->setText(QString::fromStdString(currentUser.savingGoals[currentUser.savingGoals.size() - 2].name));
    }
    if (currentUser.savingGoals.size() > 2) {
        ui->thirdBudgetName->setText(QString::fromStdString(currentUser.savingGoals[currentUser.savingGoals.size() - 3].name));
    }
    if (currentUser.savingGoals.size() > 3) {
        ui->forthBudgetName->setText(QString::fromStdString(currentUser.savingGoals[currentUser.savingGoals.size() - 4].name));
    }

    sidebarSavingClicked(1);

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


void Dashboard::on_firstBudgetName_clicked()
{
   sidebarBudgetClicked(1);
}


void Dashboard::on_secondBudgetName_clicked()
{
    sidebarBudgetClicked(2);
}


void Dashboard::on_thirdBudgetName_clicked()
{
    sidebarBudgetClicked(3);
}


void Dashboard::on_forthBudgetName_clicked()
{
    sidebarBudgetClicked(4);
}
