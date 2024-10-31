#include "dashboard_savinggoals.h"
#include "ui_dashboard_savinggoals.h"
#include "dashboard.h"

dashboard_savingGoals::dashboard_savingGoals(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::dashboard_savingGoals)

{
    ui->setupUi(this);
    QPixmap pix(":/images/images/dashboard-spendings.png");
    ui->backgroundd->setPixmap(pix);
    void on_background_linkActivated(const QString &link);

    transaction temp;
    if(currentUser.savingGoals.empty()){
        return;
    }

    ui->amountPerGiven->setText(QString::number(currentUser.spendings.rbegin()->spent));
    ui->purposeOfAmount->setText(QString::fromStdString(currentUser.spendings.rbegin()->name));
    if (currentUser.spendings.size() > 1) {
        ui->amountPerGiven_2->setText(QString::number(currentUser.spendings[currentUser.spendings.size() - 2].spent));
        ui->purposeOfAmount_2->setText(QString::fromStdString(currentUser.spendings[currentUser.spendings.size() - 2].name));
    }
    if (currentUser.spendings.size() > 2) {
        ui->amountPerGiven_3->setText(QString::number(currentUser.spendings[currentUser.spendings.size() - 3].spent));
        ui->purposeOfAmount_3->setText(QString::fromStdString(currentUser.spendings[currentUser.spendings.size() - 3].name));
    }
    if (currentUser.spendings.size() > 3) {

        ui->amountPerGiven_4->setText(QString::number(currentUser.spendings[currentUser.spendings.size() - 4].spent));
        ui->purposeOfAmount_4->setText(QString::fromStdString(currentUser.spendings[currentUser.spendings.size() - 4].name));
    }

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


