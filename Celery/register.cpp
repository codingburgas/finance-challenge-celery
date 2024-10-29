#include "register.h"
#include "ui_register.h"
#include<QPixmap>
#include "firstquestion.h"
#include "ui_firstquestion.h"

Register::Register(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::Register)


{
    ui->setupUi(this);
    QPixmap pix(":/register/register (2).png");
    ui->backgrounddd->setPixmap(pix);




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
    currentUser.passHash = ui->regPass->text().toStdString();
    currentUser.username = ui->regUser->text().toStdString();
    currentUser.email = ui->regEmail->text().toStdString();
}

