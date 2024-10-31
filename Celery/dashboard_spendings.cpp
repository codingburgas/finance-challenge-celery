#include "dashboard_spendings.h"
#include "ui_dashboard_spendings.h"

#include "ui_dashboard.h"


#include "dashboard.h"
Dashboard_spendings::Dashboard_spendings(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::Dashboard_spendings)
{
    ui->setupUi(this);
    QPixmap pix(":/images/images/dashboard-spendings.png");
    ui->backgroundd->setPixmap(pix);
    transaction temp;
    if(currentUser.spendings.empty()){
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

Dashboard_spendings::~Dashboard_spendings()
{
    delete ui;
}

void Dashboard_spendings::on_doneButton_clicked()
{

    Dashboard *dashboardWindow = new Dashboard();
    dashboardWindow->show();

    this->close();
}

