#include "dashboard_newbalance.h"
#include "ui_dashboard_newbalance.h"
#include "dashboard.h"
#include<QDebug>
dashboard_newBalance::dashboard_newBalance(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::dashboard_newBalance)
{
    ui->setupUi(this);
}

dashboard_newBalance::~dashboard_newBalance()
{
    delete ui;
}

void dashboard_newBalance::on_doneButton_clicked()
{
    qDebug() << "Final Balance:" << currentUser.balance;
    // if(ui->newBalanceEdit->text().toInt()>0){
    //     currentUser.balance = ui->newBalanceEdit->text().toInt();
    // }
    int subtractAmount = ui->subtractFromBalance->text().toInt();
    if(ui->newBalanceEdit->text().toInt()==0){


        currentUser.balance -= subtractAmount;
    }
    else{
        currentUser.balance = ui->newBalanceEdit->text().toInt();

    }

    qDebug() << "Initial Balance:" << ui->newBalanceEdit->text().toInt();
    qDebug() << "Subtract Amount:" << subtractAmount;
    qDebug() << "Final Balance:" << currentUser.balance;
    Dashboard *dashboardWindow = new Dashboard();
    dashboardWindow->show();
    this->close();
}

