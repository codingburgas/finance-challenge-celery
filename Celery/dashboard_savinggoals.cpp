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


