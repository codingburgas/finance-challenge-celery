#include "budgetitem.h"
#include <QDebug>

budgetItem::budgetItem() {}

budgetItem::budgetItem(const string &name, double planned, double spent)
    : name(name), planned(planned), spent(spent) {}

bool budgetItem::saveToDatabase() {
    QSqlQuery query;
    query.prepare("INSERT INTO budget_items (name, planned, spent) "
                  "VALUES (:name, :planned, :spent)");
    query.bindValue(":name", QString::fromStdString(name));
    query.bindValue(":planned", planned);
    query.bindValue(":spent", spent);

    if (!query.exec()) {
        qDebug() << "Failed to save budget item to database:" << query.lastError().text();
        return false;
    }
    qDebug() << "Budget item saved successfully!";
    return true;
}

bool budgetItem::loadFromDatabase(const string &itemName) {
    QSqlQuery query;
    query.prepare("SELECT name, planned, spent FROM budget_items WHERE name = :name");
    query.bindValue(":name", QString::fromStdString(itemName));

    if (!query.exec()) {
        qDebug() << "Failed to load budget item from database:" << query.lastError().text();
        return false;
    }

    if (query.next()) {
        name = query.value("name").toString().toStdString();
        planned = query.value("planned").toDouble();
        spent = query.value("spent").toDouble();
        qDebug() << "Budget item loaded successfully!";
        return true;
    } else {
        qDebug() << "Budget item not found!";
        return false;
    }
}

bool budgetItem::updateInDatabase() {
    QSqlQuery query;
    query.prepare("UPDATE budget_items SET planned = :planned, spent = :spent WHERE name = :name");
    query.bindValue(":planned", planned);
    query.bindValue(":spent", spent);
    query.bindValue(":name", QString::fromStdString(name));

    if (!query.exec()) {
        qDebug() << "Failed to update budget item:" << query.lastError().text();
        return false;
    }
    qDebug() << "Budget item updated successfully!";
    return true;
}

bool budgetItem::deleteFromDatabase() {
    QSqlQuery query;
    query.prepare("DELETE FROM budget_items WHERE name = :name");
    query.bindValue(":name", QString::fromStdString(name));

    if (!query.exec()) {
        qDebug() << "Failed to delete budget item from database:" << query.lastError().text();
        return false;
    }
    qDebug() << "Budget item deleted successfully!";
    return true;
}
