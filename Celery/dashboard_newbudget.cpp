#include "dashboard_newbudget.h"
#include "ui_dashboard_newbudget.h"
#include "ui_dashboard.h"
#include "dashboard.h"
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

void dashboard_newBudget::on_doneButton_clicked()
{

    int editbudget = ui->editCurrentBudget->text().toInt();
    QString howMuch = ui->writeHowMuchSpent->text();
    if(ui->editCurrentBudget->text().toInt()==0){
        currentUser.budget += editbudget;

        if(editbudget < 0){

            transaction temp;
            temp.name = howMuch.toStdString();
            temp.spent = editbudget;
            currentUser.spendings.push_back(temp);

        }
    }
    else{
        currentUser.budget = ui->editCurrentBudget->text().toInt();

    }


    Dashboard *dashboard = new Dashboard();
    dashboard->show();
    this->close();
}

