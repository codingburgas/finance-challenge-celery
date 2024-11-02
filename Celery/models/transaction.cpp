
#include "transaction.h"
#include <QDebug>

transaction::transaction() {}

transaction::transaction(const string &name, double spent, int id, const string &date)
    : name(name), spent(spent), id(id), date(date) {}

bool transaction::saveToDatabase() {
    QSqlQuery query;
    query.prepare("INSERT INTO transactions (name, spent, id, date) "
                  "VALUES (:name, :spent, :id, :date)");
    query.bindValue(":name", QString::fromStdString(name));
    query.bindValue(":spent", spent);
    query.bindValue(":id", id);
    query.bindValue(":date", QString::fromStdString(date));

    if (!query.exec()) {
        qDebug() << "Failed to save transaction to database:" << query.lastError().text();
        return false;
    }
    qDebug() << "Transaction saved successfully!";
    return true;
}

bool transaction::loadFromDatabase(int transactionId) {
    QSqlQuery query;
    query.prepare("SELECT name, spent, id, date FROM transactions WHERE id = :id");
    query.bindValue(":id", transactionId);

    if (!query.exec()) {
        qDebug() << "Failed to load transaction from database:" << query.lastError().text();
        return false;
    }

    if (query.next()) {
        name = query.value("name").toString().toStdString();
        spent = query.value("spent").toDouble();
        id = query.value("id").toInt();
        date = query.value("date").toString().toStdString();
        qDebug() << "Transaction loaded successfully!";
        return true;
    } else {
        qDebug() << "Transaction not found!";
        return false;
    }
}

bool transaction::updateInDatabase() {
    QSqlQuery query;
    query.prepare("UPDATE transactions SET name = :name, spent = :spent, date = :date WHERE id = :id");
    query.bindValue(":name", QString::fromStdString(name));
    query.bindValue(":spent", spent);
    query.bindValue(":date", QString::fromStdString(date));
    query.bindValue(":id", id);

    if (!query.exec()) {
        qDebug() << "Failed to update transaction:" << query.lastError().text();
        return false;
    }
    qDebug() << "Transaction updated successfully!";
    return true;
}

bool transaction::deleteFromDatabase() {
    QSqlQuery query;
    query.prepare("DELETE FROM transactions WHERE id = :id");
    query.bindValue(":id", id);

    if (!query.exec()) {
        qDebug() << "Failed to delete transaction from database:" << query.lastError().text();
        return false;
    }
    qDebug() << "Transaction deleted successfully!";
    return true;
}
