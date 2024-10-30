#include "dashboard_spendings.h"
#include "ui_dashboard_spendings.h"
<<<<<<< Updated upstream
#include "ui_dashboard.h"
=======
>>>>>>> Stashed changes
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
}

Dashboard_spendings::~Dashboard_spendings()
{
    delete ui;
}

void Dashboard_spendings::on_doneButton_clicked()
{
<<<<<<< Updated upstream
    Dashboard *dashboard = new Dashboard();
    dashboard->show();
=======
    Dashboard *dashboardWindow = new Dashboard();
    dashboardWindow->show();
>>>>>>> Stashed changes
    this->close();
}

