#include "dashboard_spendings.h"
#include "ui_dashboard_spendings.h"

Dashboard_spendings::Dashboard_spendings(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::Dashboard_spendings)
{
    ui->setupUi(this);
    QPixmap pix(":/images/dashboard-spendings.png");
    ui->backgroundd->setPixmap(pix);
    transaction temp;
    ui->amountPerGiven->setText(QString::number(currentUser.spendings.rbegin()->spent));
}

Dashboard_spendings::~Dashboard_spendings()
{
    delete ui;
}
