#include "dashboard_savinggoals.h"
#include "ui_dashboard_savinggoals.h"
#include "dashboard.h"
#include "ui_dashboard.h"
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
    int amount = ui->amount_saving->text().toInt();
    QString forWhat = ui->for_saving->text();
    if(ui->amount_saving->text().toInt()==0){
        currentUser.saving += amount;

        if(amount < 0){

            transaction temp;
            temp.name = forWhat.toStdString();
            temp.spent = amount;
            currentUser.spendings.push_back(temp);

        }
    }
    else{
        currentUser.saving = ui->amount_saving->text().toInt();

    }
    Dashboard *dashboardWindow = new Dashboard;
    dashboardWindow->show();
    this->close();
}


