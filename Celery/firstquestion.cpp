#include "firstquestion.h"
#include "ui_firstquestion.h"
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
