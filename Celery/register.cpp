#include "register.h"
#include "ui_register.h"
#include<QPixmap>
#include "dashboard.h"
#include "ui_dashboard.h"

Register::Register(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::Register)


{
    ui->setupUi(this);
    QPixmap pix("://questionnaire.png");
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
    Dashboard *dashboardWindow = new Dashboard();
    dashboardWindow->show();
    this->close();
}


void Register::on_confirmButton_clicked()
{
    Dashboard *dashboardWindow = new Dashboard();
    dashboardWindow->show();
    this->close();
}

