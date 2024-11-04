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
    if (subtractAmount != 0) {
        currentUser.balance += subtractAmount;

        if (subtractAmount < 0) {
            transaction temp;
            temp.name = purpose.toStdString();
            temp.spent = subtractAmount;
            currentUser.spendings.push_back(temp);
            for (size_t i = 0; i < currentUser.budgetPlan.size(); ++i) {
                if (currentUser.budgetPlan[i].name == temp.name) {
                    currentUser.budgetPlan[i].spent -= temp.spent;
                    break;
                }
            }
        }
    }

    bool isDouble;
    double newBalance = ui->newBalanceEdit->text().toDouble(&isDouble);
    if (isDouble) {
        currentUser.balance = qRound(newBalance * 100.0) / 100.0;
    }

    // Save the updated balance to the database
    if (currentUser.saveUpdatesToDatabase()) {
        qDebug() << "Balance updated in the database successfully.";
    } else {
        qDebug() << "Failed to update balance in the database.";
    }

    Dashboard *dashboardWindow = new Dashboard();
    dashboardWindow->show();
    this->close();
}

