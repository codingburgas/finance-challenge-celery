#include "register.h"
#include "ui_register.h"
#include<QPixmap>
#include "firstquestion.h".h"
#include "ui_firstquestion.h"

Register::Register(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::Register)


{
    ui->setupUi(this);
    QPixmap pix(":/register/register (2).png");
    ui->backgroundd->setPixmap(pix);
    ui->loginButton->setStyleSheet(
        "QPushButton {"
        "   background-color: transparent;"
        "   border-radius: 70px;"
        "   font: bold;"
        "}"

        );
    ui->confirmButton->setStyleSheet(
        "QPushButton {"
        "   background-color: transparent;"
        "   border-radius: 70px;"
        "   font: bold;"
        "}"

        );



}

Register::~Register()
{
    delete ui;
}

void Register::on_loginButton_clicked()
{
    firstQuestion *questionWindow = new firstQuestion();
    questionWindow->show();
    this->close();
}


void Register::on_confirmButton_clicked()
{
    firstQuestion *questionWindow = new firstQuestion();
    questionWindow->show();
    this->close();
}

