#include "dashboard.h"
#include "ui_dashboard.h"
#include <QPixmap>
Dashboard::Dashboard(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::Dashboard)
{
    ui->setupUi(this);
    QPixmap pix(":/images/dashboard.png");
    ui->backgroundd->setPixmap(pix);
}

Dashboard::~Dashboard()
{
    delete ui;
}
