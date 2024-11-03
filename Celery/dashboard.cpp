#include "dashboard.h"
#include "ui_dashboard.h"
#include "dashboard_spendings.h"
#include "dashboard_newbalance.h"
#include "dashboard_newbudget.h"
#include "dashboard_savinggoals.h"
#include <numeric>
#include <QPixmap>

// Helper function to clear budget labels
void Dashboard::clearBudgetElements() {
    ui->firstBudgetName->setText("");
    ui->secondBudgetName->setText("");
    ui->thirdBudgetName->setText("");
    ui->forthBudgetName->setText("");
    ui->clickedBudget->setText("");
    ui->clickedBudgetAmount->setText("");
}

// Helper function to set style for selected and non-selected sidebar items
void Dashboard::updateSidebarStyle(const QString &selected) {
    QString defaultStyle = "text-decoration: none; color:white; background-color:transparent;";
    ui->currentBalance->setStyleSheet(defaultStyle);
    ui->spendings->setStyleSheet(defaultStyle);
    ui->budget->setStyleSheet(defaultStyle);
    ui->savingGoals->setStyleSheet(defaultStyle);

    if (selected == "balance") ui->currentBalance->setStyleSheet("text-decoration: underline; color:white; background-color:transparent");
    else if (selected == "spendings") ui->spendings->setStyleSheet("text-decoration: underline; color:white; background-color:transparent");
    else if (selected == "budget") ui->budget->setStyleSheet("text-decoration: underline; color:white; background-color:transparent");
    else if (selected == "savingGoals") ui->savingGoals->setStyleSheet("text-decoration: underline; color:white; background-color:transparent");
}

// Helper function to display the celery image with the percentage remaining
void Dashboard::displayCeleryImage(double planned, double spent) {
    double percentageRemaining = (planned > 0) ? (planned - spent) / planned : 0.0;
    QPixmap celery(":/images/images/celery.png");
    int width = ui->mainn->width();
    int height = ui->mainn->height();

    int displayedHeight = static_cast<int>(celery.height() * percentageRemaining);
    QPixmap croppedCelery = celery.copy(0, celery.height() - displayedHeight, celery.width(), displayedHeight);
    QPixmap scaledCelery = croppedCelery.scaled(width, height, Qt::KeepAspectRatio, Qt::SmoothTransformation);
    ui->mainn->setPixmap(scaledCelery);
}

// Function to display budget details based on index
void Dashboard::displayBudgetDetails(int index) {
    const auto& budget = currentUser.budgetPlan[currentUser.budgetPlan.size() - index];
    ui->clickedBudget->setText(QString::fromStdString(budget.name));
    double amountLeft = budget.planned - budget.spent;
    ui->clickedBudgetAmount->setText(QString::number(amountLeft) + " left");
    displayCeleryImage(budget.planned, budget.spent);
}

// Function to display saving goal details based on index
void Dashboard::displaySavingDetails(int index) {
    const auto& goal = currentUser.savingGoals[currentUser.savingGoals.size() - index];
    ui->clickedBudget->setText(QString::fromStdString(goal.name));
    double amountLeft = goal.req - goal.saved;
    ui->clickedBudgetAmount->setText(QString::number(amountLeft) + " left");
    displayCeleryImage(goal.req, goal.saved);
}

Dashboard::Dashboard(QWidget *parent)
    : QDialog(parent), ui(new Ui::Dashboard),
    isBalanceClicked(false), isBudgetClicked(true),
    isSavingGoalsClicked(false), isSpendingsClicked(false) {
    ui->setupUi(this);
    QPixmap pix(":/images/dashboard.png");
    ui->backgrounddd->setPixmap(pix);
    budgetFunction();
}

Dashboard::~Dashboard() {
    delete ui;
}

void Dashboard::budgetFunction() {
    clearBudgetElements();
    ui->label->setText(QString::fromStdString(currentUser.username) + "'s Budget");

    if (!currentUser.budgetPlan.empty()) {
        displayBudgetDetails(1);
        ui->firstBudgetName->setText(QString::fromStdString(currentUser.budgetPlan.rbegin()->name));
        if (currentUser.budgetPlan.size() > 1) ui->secondBudgetName->setText(QString::fromStdString(currentUser.budgetPlan[currentUser.budgetPlan.size() - 2].name));
        if (currentUser.budgetPlan.size() > 2) ui->thirdBudgetName->setText(QString::fromStdString(currentUser.budgetPlan[currentUser.budgetPlan.size() - 3].name));
        if (currentUser.budgetPlan.size() > 3) ui->forthBudgetName->setText(QString::fromStdString(currentUser.budgetPlan[currentUser.budgetPlan.size() - 4].name));
    }
}

void Dashboard::on_currentBalance_clicked() {
    clearBudgetElements();
    updateSidebarStyle("balance");
    isBalanceClicked = true;
    isBudgetClicked = isSavingGoalsClicked = isSpendingsClicked = false;
    ui->label->setText(QString::fromStdString(currentUser.username) + "'s Current Balance");
    ui->mainn->setText(QString::number(currentUser.balance));
}

void Dashboard::on_budget_clicked() {
    clearBudgetElements();
    updateSidebarStyle("budget");
    isBudgetClicked = true;
    isBalanceClicked = isSavingGoalsClicked = isSpendingsClicked = false;
    budgetFunction();
}

void Dashboard::on_spendings_clicked() {
    clearBudgetElements();
    updateSidebarStyle("spendings");
    isSpendingsClicked = true;
    isBalanceClicked = isBudgetClicked = isSavingGoalsClicked = false;

    double totalSpent = std::accumulate(currentUser.spendings.begin(), currentUser.spendings.end(), 0.0, [](double sum, const auto& transaction) { return sum + transaction.spent; });
    ui->label->setText(QString::fromStdString(currentUser.username) + "'s Spendings");
    ui->mainn->setText(QString::number(totalSpent));
    ui->mainn->setAlignment(Qt::AlignCenter);
}

void Dashboard::on_savingGoals_clicked() {
    clearBudgetElements();
    updateSidebarStyle("savingGoals");
    isSavingGoalsClicked = true;
    isBalanceClicked = isBudgetClicked = isSpendingsClicked = false;

    if (!currentUser.savingGoals.empty()) {
        displaySavingDetails(1);
        ui->firstBudgetName->setText(QString::fromStdString(currentUser.savingGoals.rbegin()->name));
        if (currentUser.savingGoals.size() > 1) ui->secondBudgetName->setText(QString::fromStdString(currentUser.savingGoals[currentUser.savingGoals.size() - 2].name));
        if (currentUser.savingGoals.size() > 2) ui->thirdBudgetName->setText(QString::fromStdString(currentUser.savingGoals[currentUser.savingGoals.size() - 3].name));
        if (currentUser.savingGoals.size() > 3) ui->forthBudgetName->setText(QString::fromStdString(currentUser.savingGoals[currentUser.savingGoals.size() - 4].name));
    }
}

void Dashboard::on_editDetails_clicked() {
    if (isBudgetClicked) {
        dashboard_newBudget *newBudget = new dashboard_newBudget();
        newBudget->show();
    } else if (isBalanceClicked) {
        dashboard_newBalance *balanceWindow = new dashboard_newBalance();
        balanceWindow->show();
    } else if (isSavingGoalsClicked) {
        dashboard_savingGoals *savingWindow = new dashboard_savingGoals();
        savingWindow->show();
    } else if (isSpendingsClicked) {
        Dashboard_spendings *spendings = new Dashboard_spendings();
        spendings->show();
    }
    close();
}

void Dashboard::on_firstBudgetName_clicked() {
    if (isBudgetClicked) displayBudgetDetails(1);
    else displaySavingDetails(1);
}

void Dashboard::on_secondBudgetName_clicked() {
    if (isBudgetClicked) displayBudgetDetails(2);
    else displaySavingDetails(2);
}

void Dashboard::on_thirdBudgetName_clicked() {
    if (isBudgetClicked) displayBudgetDetails(3);
    else displaySavingDetails(3);
}

void Dashboard::on_forthBudgetName_clicked() {
    if (isBudgetClicked) displayBudgetDetails(4);
    else displaySavingDetails(4);
}
