#include "thirdquestion.h"
#include "ui_thirdquestion.h"
#include "dashboard.h"
#include <QDebug>
thirdQuestion::thirdQuestion(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::thirdQuestion)
{
    ui->setupUi(this);
    QPixmap pix(":/images/images/questions_background.png");
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
    firstItem.totalAmount = budgetAmount.toDouble();
    currentUser.budgetPlan.push_back(firstItem);

    // Save all data after the final question
    currentUser.saveToDatabase();

    Dashboard *dashboardWindow = new Dashboard();
    dashboardWindow->show();
    this->close();
}

