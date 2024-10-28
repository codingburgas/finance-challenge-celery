#include "dashboard_newbudget.h"
#include "ui_dashboard_newbudget.h"

dashboard_newBudget::dashboard_newBudget(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::dashboard_newBudget)
{
    ui->setupUi(this);
}

dashboard_newBudget::~dashboard_newBudget()
{
    delete ui;
}
