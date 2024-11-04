#include "register.h"
#include "ui_register.h"
#include <QPixmap>
#include <QDebug>
#include <QMessageBox>
#include "firstquestion.h"
#include "models/user.h"
#include "dashboard.h"
#include "mainwindow.h"

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

void Register::on_loginButton_clicked() {
    QString username = ui->logUser->text();
    QString password = ui->logPass->text();

    if (username.isEmpty() || password.isEmpty()) {
        QMessageBox::warning(this, "Login Error", "Username and password cannot be empty.");
        return;
    }

    if (currentUser.loadFromDatabase(username.toStdString(), password.toStdString())) {
        qDebug() << "Login successful";

        // Open the Dashboard window and pass the currentUser data
        Dashboard *dashboardWindow = new Dashboard();
        dashboardWindow->show();

        // Close the login/register window
        this->close();
    } else {
        qDebug() << "Login failed: Incorrect username or password.";
        QMessageBox::warning(this, "Login Failed", "Incorrect username or password.");
    }
}



void Register::on_confirmButton_clicked() {
    // Retrieve input from the UI fields
    QString username = ui->regUser->text();
    QString email = ui->regEmail->text();
    QString password = ui->regPass->text();

    // Check if fields are empty
    if (username.isEmpty() || email.isEmpty() || password.isEmpty()) {
        qDebug() << "All fields are required.";
        QMessageBox::warning(this, "Registration Error", "All fields are required.");
        return;
    }

    // Set properties on the current user
    currentUser.username = username.toStdString();
    currentUser.email = email.toStdString();
    currentUser.passHash = user::hashPassword(password.toStdString());  // Hash the password

    // Debug output to verify values before saving
    qDebug() << "Registering user with username:" << username;
    qDebug() << "Email:" << email;
    qDebug() << "Password (hashed):" << QString::fromStdString(currentUser.passHash);

    // Save user to the database
    if (currentUser.saveToDatabase()) {
        qDebug() << "User registered successfully!";

        // Clear input fields after registration
        ui->regUser->clear();
        ui->regEmail->clear();
        ui->regPass->clear();

        // Proceed to next step or welcome screen
        firstQuestion *questionWindow = new firstQuestion();
        questionWindow->show();
        this->close();
    } else {
        qDebug() << "User registration failed.";
        QMessageBox::critical(this, "Registration Error", "Failed to register user. Please try again.");
    }
}

