#include "thirdquestion.h"
#include "ui_thirdquestion.h"
#include "dashboard.h"
#include "ui_dashboard.h"
#include <QDebug>
thirdQuestion::thirdQuestion(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::thirdQuestion)
{
    ui->setupUi(this);
    QPixmap pix("://questionnaire.png");
    ui->backgroundd->setPixmap(pix);
}

thirdQuestion::~thirdQuestion()
{
    delete ui;
}

void thirdQuestion::on_okButton_clicked()
{

    QString budgetName = ui->nameAnswerr->text();
    QString budgetAmount = ui->amountAnswer->text();
    budgetItem firstItem;
    firstItem.name = budgetName.toStdString();
    firstItem.planned = budgetAmount.toDouble();
    currentUser.budgetPlan.push_back(firstItem);
    qDebug()<<firstItem.name;
    Dashboard *dashboardWindow = new Dashboard();
    dashboardWindow->show();
    this->close();
}

