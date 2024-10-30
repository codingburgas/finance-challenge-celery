#include "thirdquestion.h"
#include "ui_thirdquestion.h"
#include "dashboard.h"
#include "ui_dashboard.h"

thirdQuestion::thirdQuestion(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::thirdQuestion)
 , balance("")
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
    qDebug() <<budgetName;
    QString budgetAmount = ui->amountAnswer->text();
    qDebug() <<budgetAmount;
    Dashboard *dashboardWindow = new Dashboard();
    dashboardWindow->show();
    this->close();
}

