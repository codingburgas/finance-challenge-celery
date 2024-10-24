#include "secondquestion.h"
#include "ui_secondquestion.h"

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
