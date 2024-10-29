#include "dashboard_newbalance.h"
#include "ui_dashboard_newbalance.h"
#include "dashboard.h"
#include<QPixmap>
dashboard_newBalance::dashboard_newBalance(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::dashboard_newBalance)
{
    ui->setupUi(this);
    QPixmap pix(":/images/images/dashboard-balance.png");
    ui->backgroundd->setPixmap(pix);
}

dashboard_newBalance::~dashboard_newBalance()
{
    delete ui;
}

void dashboard_newBalance::on_doneButton_clicked()
{


    int subtractAmount = ui->addOrSubAmount->text().toInt();
    QString purpose = ui->addOrSubPurpose->text();
    if(ui->newBalanceEdit->text().toInt()==0){
        currentUser.balance += subtractAmount;

        if(subtractAmount < 0){

                 vector<transaction> spendings;

            }
    }
    else{
        currentUser.balance = ui->newBalanceEdit->text().toInt();

    }


    Dashboard *dashboardWindow = new Dashboard();
    dashboardWindow->show();
    this->close();
}

