#include "dashboard_savinggoals.h"
#include "ui_dashboard_savinggoals.h"
#include "dashboard.h"
#include "ui_dashboard.h"
dashboard_savingGoals::dashboard_savingGoals(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::dashboard_savingGoals)

{
    ui->setupUi(this);
    QPixmap pix(":/images/images/dashboard_newbudget.png");
    ui->backgroundd->setPixmap(pix);
    void on_background_linkActivated(const QString &link);

    updateTargetSummary();

}

void dashboard_savingGoals::updateTargetSummary(){
    int maxTarget=currentUser.savingGoals[0].req, maxIndex=0;
    int minTarget=currentUser.savingGoals[0].req, minIndex=0;
    int maxSaved=currentUser.savingGoals[0].saved, maxSIndex=0;
    for (int i = 1; i < currentUser.savingGoals.size(); i++)
    {
        if (currentUser.savingGoals[i].req > maxTarget)
        {
            maxTarget = currentUser.savingGoals[i].req;
            maxIndex=i;
        }

        if (currentUser.savingGoals[i].req < minTarget)
        {
            minTarget = currentUser.savingGoals[i].req;
            minIndex=i;
        }

        if (currentUser.savingGoals[i].saved > maxSaved)
        {
            maxSaved = currentUser.savingGoals[i].saved;
            maxSIndex=i;
        }

    }

    ui->htName->setText(QString::fromStdString(currentUser.savingGoals[maxIndex].name));
    ui->htAmount->setText(QString::number(currentUser.savingGoals[maxIndex].req));

    ui->ltName->setText(QString::fromStdString(currentUser.savingGoals[minIndex].name));
    ui->ltAmount->setText(QString::number(currentUser.savingGoals[minIndex].req));

    ui->masName->setText(QString::fromStdString(currentUser.savingGoals[maxSIndex].name));
    ui->masAmount->setText(QString::number(currentUser.savingGoals[maxSIndex].saved));
}

dashboard_savingGoals::~dashboard_savingGoals()
{
    delete ui;
}

void dashboard_savingGoals::on_background_linkActivated(const QString &link)
{
    // Implementation of what should happen when this link is activated
    // You can add any action you want to perform here
}

void dashboard_savingGoals::on_doneButton_clicked()
{

    Dashboard *dashboardWindow = new Dashboard;
    dashboardWindow->show();
    this->close();
}

void dashboard_savingGoals::on_editDetailsButton_clicked()
{

}

void dashboard_savingGoals::on_submitEditGoal_clicked()
{
    QString goalName=ui->goalName->text();
    int i=0;
    while (goalName.toStdString() != currentUser.savingGoals[i].name) {

        i++;
    }
    if(i==currentUser.savingGoals.size()){
        return;
    }

    double amountSpent=ui->writeHowMuchSpent->text().toDouble();
    double amountNew=ui->editCurrentGoal->text().toDouble();
    if(amountSpent == 0){
        currentUser.savingGoals[i].req=amountNew;
    }
    if(amountNew == 0){
        currentUser.savingGoals[i].saved+=amountSpent;
        currentUser.balance-=amountSpent;
        transaction fromGoal(goalName.toStdString(),-amountSpent,0,"");
        currentUser.spendings.push_back(fromGoal);
    }

    updateTargetSummary();
}


void dashboard_savingGoals::on_submitNewGoal_clicked()
{
    QString newGoalName = ui->writeName->text();
    QString newGoalAmount = ui->writeAmount->text();
    savingGoal newGoal;
    newGoal.name = newGoalName.toStdString();
    newGoal.req = newGoalAmount.toDouble();
    currentUser.savingGoals.push_back(newGoal);

    updateTargetSummary();
}

