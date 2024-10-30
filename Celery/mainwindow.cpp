#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "register.h"
#include "ui_register.h"
#include<QPixmap>
#include<QFrame>
#include <QtSql/QSqlDatabase>
#include <QtSql/QSqlQuery>
#include <QtSql/QSqlError>
MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    QSqlDatabase db = QSqlDatabase::addDatabase("QODBC");

    QString dsn = "DRIVER={ODBC Driver 17 for SQL Server};"
                  "Server=tcp:celery.database.windows.net,1433;"
                  "Database=celery;"
                  "Uid=mishka;"
                  "Pwd=Spageti22;"
                  "Encrypt=yes;"
                  "TrustServerCertificate=no;"
                  "Connection Timeout=30;";

    db.setDatabaseName(dsn);

    if (!db.open()) {
        qDebug() << "Failed to connect to the database:" << db.lastError().text();
    } else {
        qDebug() << "Connected to Azure SQL Database successfully!";
    }


    QPixmap pix(":/images/mainWindow.png");
    ui->label_pic->setPixmap(pix);

    ui->heading->setStyleSheet("color: white");
    connect(ui->pushButtonn, &QPushButton::clicked, this, &MainWindow::on_startNowbtn_clicked);
    connect(ui->signIn, &QPushButton::clicked, this, &MainWindow::on_signIn_clicked);
}

MainWindow::~MainWindow()
{
    delete ui;

}

void MainWindow::on_startNowbtn_clicked()
{
    Register *registerWindow = new Register();
    registerWindow->show();
    this->close();
}

void MainWindow::on_signIn_clicked()
{
    Register *registerWindow = new Register();
    registerWindow->show();
    this->close();
}


void MainWindow::on_pushButton_clicked()
{

}

