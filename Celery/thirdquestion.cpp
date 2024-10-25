#include "thirdquestion.h"
#include "ui_thirdquestion.h"

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
