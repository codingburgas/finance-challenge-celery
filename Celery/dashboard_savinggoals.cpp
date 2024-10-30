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
}

dashboard_savingGoals::~dashboard_savingGoals()
{
    delete ui;
}


