#include "secondquestion.h"
#include "ui_secondquestion.h"
#include "thirdquestion.h"
#include "ui_thirdquestion.h"
#include <QDebug>
secondQuestion::secondQuestion(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::secondQuestion)
{
    ui->setupUi(this);
    QPixmap pix(":/images/images/questions_background.png");
    ui->backgroundd->setPixmap(pix);
}

secondQuestion::~secondQuestion()
{
    delete ui;
}

void secondQuestion::on_okButton_clicked()
{
    QString savingGoalAmount = ui->targetInput->text();
    QString savingGoalName = ui->nameInpu->text();
    savingGoal goal;
    goal.name = savingGoalName.toStdString();
    goal.req = savingGoalAmount.toDouble();
    currentUser.savingGoals.push_back(goal);
    currentUser.saveToDatabase(); // Save saving goals to the database

    thirdQuestion *questionWindow = new thirdQuestion();
    questionWindow->show();
    this->close();
}

