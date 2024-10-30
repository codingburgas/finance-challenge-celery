#include "user.h"
#include <QDebug>
#include <QCryptographicHash>

user currentUser;
user::user() {}

string user::hashPassword(const string& password) {
    QByteArray hash = QCryptographicHash::hash(QByteArray::fromStdString(password), QCryptographicHash::Sha256);
    return QString(hash.toHex()).toStdString();
}

bool user::saveToDatabase() {
    QSqlQuery query;
    query.prepare("INSERT INTO users (username, email, password, balance) "
                  "VALUES (:username, :email, :password, :balance)");
    query.bindValue(":username", QString::fromStdString(username));
    query.bindValue(":email", QString::fromStdString(email));
    query.bindValue(":password", QString::fromStdString(passHash));
    query.bindValue(":balance", balance);

    if (!query.exec()) {
        qDebug() << "Failed to save user to database:" << query.lastError().text();
        return false;
    }
    qDebug() << "User saved successfully!";
    return true;
}

bool user::loadFromDatabase(const string& username) {
    QSqlQuery query;
    query.prepare("SELECT username, email, password, balance FROM users WHERE username = :username");
    query.bindValue(":username", QString::fromStdString(username));

    if (!query.exec()) {
        qDebug() << "Failed to load user from database:" << query.lastError().text();
        return false;
    }

    if (query.next()) {
        this->username = query.value("username").toString().toStdString();
        this->email = query.value("email").toString().toStdString();
        this->passHash = query.value("password").toString().toStdString();
        this->balance = query.value("balance").toInt();
        qDebug() << "User loaded successfully!";
        return true;
    } else {
        qDebug() << "User not found!";
        return false;
    }
}

bool user::updatePassword(const string& newPassHash) {
    QSqlQuery query;
    query.prepare("UPDATE users SET password = :password WHERE username = :username");
    query.bindValue(":password", QString::fromStdString(newPassHash));
    query.bindValue(":username", QString::fromStdString(username));

    if (!query.exec()) {
        qDebug() << "Failed to update password:" << query.lastError().text();
        return false;
    }
    this->passHash = newPassHash;
    qDebug() << "Password updated successfully!";
    return true;
}
