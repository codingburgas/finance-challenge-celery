#include "firstquestion.h"
#include "ui_firstquestion.h"
#include "secondquestion.h"
#include "ui_secondquestion.h"
#include<QPixmap>
firstQuestion::firstQuestion(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::firstQuestion)
{
    ui->setupUi(this);
    QPixmap pix("://questionnaire.png");
    ui->backgroundd->setPixmap(pix);
}

firstQuestion::~firstQuestion()
{
    delete ui;
}

void firstQuestion::on_okButton_clicked()
{
    secondQuestion *questionWindow = new secondQuestion();
    questionWindow->show();
    this->close();
}

