#include "secondquestion.h"
#include "ui_secondquestion.h"
#include "thirdquestion.h"
#include "ui_thirdquestion.h"
secondQuestion::secondQuestion(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::secondQuestion)
{
    ui->setupUi(this);
    QPixmap pix("://questionnaire.png");
    ui->backgroundd->setPixmap(pix);
}

secondQuestion::~secondQuestion()
{
    delete ui;
}

void secondQuestion::on_okButton_clicked()
{
    thirdQuestion *questionWindow = new thirdQuestion();
    questionWindow->show();
    this->close();
}

