#include "dashboard_newbalance.h"
#include "ui_dashboard_newbalance.h"

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
