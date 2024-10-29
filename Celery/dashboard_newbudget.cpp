#include "dashboard_newbudget.h"
#include "ui_dashboard_newbudget.h"

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
