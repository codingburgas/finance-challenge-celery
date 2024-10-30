#include "savinggoal.h"
#include <QDebug>

savingGoal::savingGoal() {}

savingGoal::savingGoal(const string &name, double req, double saved)
    : name(name), req(req), saved(saved) {}

bool savingGoal::saveToDatabase() {
    QSqlQuery query;
    query.prepare("INSERT INTO saving_goals (name, required, saved) "
                  "VALUES (:name, :required, :saved)");
    query.bindValue(":name", QString::fromStdString(name));
    query.bindValue(":required", req);
    query.bindValue(":saved", saved);

    if (!query.exec()) {
        qDebug() << "Failed to save saving goal to database:" << query.lastError().text();
        return false;
    }
    qDebug() << "Saving goal saved successfully!";
    return true;
}

bool savingGoal::loadFromDatabase(const string &goalName) {
    QSqlQuery query;
    query.prepare("SELECT name, required, saved FROM saving_goals WHERE name = :name");
    query.bindValue(":name", QString::fromStdString(goalName));

    if (!query.exec()) {
        qDebug() << "Failed to load saving goal from database:" << query.lastError().text();
        return false;
    }

    if (query.next()) {
        name = query.value("name").toString().toStdString();
        req = query.value("required").toDouble();
        saved = query.value("saved").toDouble();
        qDebug() << "Saving goal loaded successfully!";
        return true;
    } else {
        qDebug() << "Saving goal not found!";
        return false;
    }
}

bool savingGoal::updateInDatabase() {
    QSqlQuery query;
    query.prepare("UPDATE saving_goals SET required = :required, saved = :saved WHERE name = :name");
    query.bindValue(":required", req);
    query.bindValue(":saved", saved);
    query.bindValue(":name", QString::fromStdString(name));

    if (!query.exec()) {
        qDebug() << "Failed to update saving goal:" << query.lastError().text();
        return false;
    }
    qDebug() << "Saving goal updated successfully!";
    return true;
}

bool savingGoal::deleteFromDatabase() {
    QSqlQuery query;
    query.prepare("DELETE FROM saving_goals WHERE name = :name");
    query.bindValue(":name", QString::fromStdString(name));

    if (!query.exec()) {
        qDebug() << "Failed to delete saving goal from database:" << query.lastError().text();
        return false;
    }
    qDebug() << "Saving goal deleted successfully!";
    return true;
}
