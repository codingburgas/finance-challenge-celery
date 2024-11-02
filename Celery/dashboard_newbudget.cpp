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
}

dashboard_newBudget::~dashboard_newBudget()
{
    delete ui;
}

void dashboard_newBudget::on_doneButton_clicked()
{

    // int editbudget = ui->editCurrentBudget->text().toInt();
    // QString howMuch = ui->writeHowMuchSpent->text();
    // if(editbudget!=0){
    //     currentUser.budget += editbudget;

    //     if(editbudget < 0){

    //         transaction temp;
    //         temp.name = howMuch.toStdString();
    //         temp.spent = editbudget;
    //         currentUser.spendings.push_back(temp);

    //     }
    // }
    // else{
    //     currentUser.budget = ui->editCurrentBudget->text().toInt();

    // }


    Dashboard *dashboard = new Dashboard();
    dashboard->show();
    this->close();
}

void dashboard_newBudget::on_submitNewBudget_clicked()
{

}

void dashboard_newBudget::on_submitEditBudget_clicked()
{
    QString budgetName=ui->budgetName->text();
    int i=0;
    while(budgetName!=currentUser.budgetPlan[i].name){
        i++;
    }
    if(i==currentUser.budgetPlan.size()){
        return;
    }

    double amount=ui->writeHowMuchSpent->text().toDouble();
    if(amount>0){
        currentUser.budgetPlan[i].spent+=amount;
        currentUser.balance-=amount;
        transaction fromBudget(budgetName.toStdString(),-amount,0,"");
        currentUser.spendings.push_back(fromBudget);
    }
    amount=ui->editCurrentBudget->text().toDouble();
    if(amount>=0){
        currentUser.budgetPlan[i].planned=amount;
    }
}

