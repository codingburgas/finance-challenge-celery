#include "dashboard_newbudget.h"
#include "ui_dashboard_newbudget.h"
#include "ui_dashboard.h"
#include "dashboard.h"
dashboard_newBudget::dashboard_newBudget(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::dashboard_newBudget)
{
    ui->setupUi(this);
    QPixmap pix(":/images/images/dashboard_newbudget.png");
    ui->backgroundd->setPixmap(pix);
    updateBudgetSummary();
}

void dashboard_newBudget::updateBudgetSummary(){
    int maxBudget=currentUser.budgetPlan[0].planned, maxBIndex=0;
    int minBudget=currentUser.budgetPlan[0].planned, minIndex=0;
    int maxSpent=currentUser.budgetPlan[0].spent, maxSIndex=0;
    for (int i = 1; i < currentUser.budgetPlan.size(); i++)
    {
        if (currentUser.budgetPlan[i].planned > maxBudget)
        {
            maxBudget = currentUser.budgetPlan[i].planned;
            maxBIndex=i;
        }

        if (currentUser.budgetPlan[i].planned < minBudget)
        {
            minBudget = currentUser.budgetPlan[i].planned;
            minIndex=i;
        }

        if (currentUser.budgetPlan[i].spent > maxSpent)
        {
            maxSpent = currentUser.budgetPlan[i].spent;
            maxSIndex=i;
        }
    }

    ui->hbsName->setText(QString::fromStdString(currentUser.budgetPlan[maxBIndex].name));
    ui->hbsAmount->setText(QString::number(currentUser.budgetPlan[maxBIndex].planned));

    ui->lbsName->setText(QString::fromStdString(currentUser.budgetPlan[minIndex].name));
    ui->lbsAmount->setText(QString::number(currentUser.budgetPlan[minIndex].planned));

    ui->masName->setText(QString::fromStdString(currentUser.budgetPlan[maxSIndex].name));
    ui->masAmount->setText(QString::number(currentUser.budgetPlan[maxSIndex].spent));

}

dashboard_newBudget::~dashboard_newBudget()
{
    delete ui;
}

void dashboard_newBudget::on_doneButton_clicked()
{
    Dashboard *dashboard = new Dashboard();
    dashboard->show();
    this->close();
}

void dashboard_newBudget::on_submitNewBudget_clicked()
{
    QString budgetName = ui->writeName->text();
    QString budgetAmount = ui->writeAmount->text();
    budgetItem newBudget;
    newBudget.name = budgetName.toStdString();
    newBudget.planned = budgetAmount.toDouble();
    currentUser.budgetPlan.push_back(newBudget);

    updateBudgetSummary();

}

void dashboard_newBudget::on_submitEditBudget_clicked()
{
    QString budgetName=ui->budgetName->text();
    int i=0;
    while (budgetName.toStdString() != currentUser.budgetPlan[i].name) {

        i++;
    }
    if(i==currentUser.budgetPlan.size()){
        return;
    }

    double amountSpent=ui->writeHowMuchSpent->text().toDouble();
    double amountNew=ui->editCurrentBudget->text().toDouble();
    if(amountSpent == 0){
        currentUser.budgetPlan[i].planned=amountNew;
    }
    if(amountNew == 0){
        currentUser.budgetPlan[i].spent+=amountSpent;
        currentUser.balance-=amountSpent;
        transaction fromBudget(budgetName.toStdString(),-amountSpent,0,"");
        currentUser.spendings.push_back(fromBudget);
    }

    updateBudgetSummary();
}

