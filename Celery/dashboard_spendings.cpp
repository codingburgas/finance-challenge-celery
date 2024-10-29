#include "dashboard_spendings.h"
#include "ui_dashboard_spendings.h"
#include "ui_dashboard.h"
#include "dashboard.h"
Dashboard_spendings::Dashboard_spendings(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::Dashboard_spendings)
{
    ui->setupUi(this);
    QPixmap pix(":/images/dashboard-spendings.png");
    ui->backgroundd->setPixmap(pix);
}

Dashboard_spendings::~Dashboard_spendings()
{
    delete ui;
}

void Dashboard_spendings::on_doneButton_clicked()
{
    Dashboard *dashboard = new Dashboard();
    dashboard->show();
    this->close();
}

