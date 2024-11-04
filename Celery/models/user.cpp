#include "user.h"
#include <QDebug>
#include <QCryptographicHash>
#include "savinggoal.h"
#include "budgetitem.h"

user currentUser;
user::user() {}

std::string user::hashPassword(const std::string& password) {
    // Convert the password to QByteArray and hash it using SHA-256
    QByteArray hash = QCryptographicHash::hash(QByteArray::fromStdString(password), QCryptographicHash::Sha256);
    // Convert the hash to a hexadecimal string and return it
    return QString(hash.toHex()).toStdString();
}

bool setupDatabaseSchema() {
    QSqlQuery query;

    // Create Users Table
    if (!query.exec("CREATE TABLE IF NOT EXISTS users ("
                    "username TEXT PRIMARY KEY, "
                    "passHash TEXT NOT NULL, "
                    "email TEXT, "
                    "balance REAL DEFAULT 0.0, "
                    "saving INTEGER DEFAULT 0, "
                    "spending INTEGER DEFAULT 0)")) {
        qDebug() << "Error creating users table:" << query.lastError();
        return false;
    }

    // Create Transactions Table
    if (!query.exec("CREATE TABLE IF NOT EXISTS transactions ("
                    "id INTEGER PRIMARY KEY AUTOINCREMENT, "
                    "username TEXT, "
                    "amount REAL, "
                    "category TEXT, "
                    "FOREIGN KEY(username) REFERENCES users(username))")) {
        qDebug() << "Error creating transactions table:" << query.lastError();
        return false;
    }

    // Create Saving Goals Table
    if (!query.exec("CREATE TABLE IF NOT EXISTS saving_goals ("
                    "id INTEGER PRIMARY KEY AUTOINCREMENT, "
                    "username TEXT, "
                    "goalAmount REAL, "
                    "goalDescription TEXT, "
                    "FOREIGN KEY(username) REFERENCES users(username))")) {
        qDebug() << "Error creating saving_goals table:" << query.lastError();
        return false;
    }

    qDebug() << "Database schema set up successfully.";
    return true;
}

bool initializeDatabase() {
    QSqlDatabase db = QSqlDatabase::addDatabase("QSQLITE");
    db.setDatabaseName("finance_app.db");

    if (!db.open()) {
        qDebug() << "Error: Unable to open database" << db.lastError();
        return false;
    }

    QSqlQuery query;

    // Create Users Table
    query.exec("CREATE TABLE IF NOT EXISTS users ("
               "username TEXT PRIMARY KEY, "
               "passHash TEXT NOT NULL, "
               "email TEXT, "
               "balance REAL DEFAULT 0.0)");

    // Create Saving Goals Table
    query.exec("CREATE TABLE IF NOT EXISTS saving_goals ("
               "id INTEGER PRIMARY KEY AUTOINCREMENT, "
               "username TEXT, "
               "goalName TEXT, "
               "targetAmount REAL, "
               "FOREIGN KEY(username) REFERENCES users(username))");

    // Create Budget Items Table
    query.exec("CREATE TABLE IF NOT EXISTS budget_items ("
               "id INTEGER PRIMARY KEY AUTOINCREMENT, "
               "username TEXT, "
               "itemName TEXT, "
               "totalAmount REAL, "
               "FOREIGN KEY(username) REFERENCES users(username))");

    return true;
}

bool user::saveToDatabase() {
    // Calculate total saving from saving goals
    saving = 0;
    for (const auto& goal : savingGoals) {
        saving += goal.req;
    }

    // Calculate total spending from budget items
    spending = 0;
    for (const auto& item : budgetPlan) {
        spending += item.totalAmount;
    }

    QSqlQuery query;
    query.prepare("INSERT OR REPLACE INTO users (username, passHash, email, balance, saving, spending) "
                  "VALUES (:username, :passHash, :email, :balance, :saving, :spending)");
    query.bindValue(":username", QString::fromStdString(username));
    query.bindValue(":passHash", QString::fromStdString(passHash));
    query.bindValue(":email", QString::fromStdString(email));
    query.bindValue(":balance", balance);
    query.bindValue(":saving", saving);
    query.bindValue(":spending", spending);

    if (!query.exec()) {
        qDebug() << "Error: Could not insert user into database -" << query.lastError();
        return false;
    }

    // Save each saving goal
    for (const auto& goal : savingGoals) {
        QSqlQuery goalQuery;
        goalQuery.prepare("INSERT INTO saving_goals (username, goalName, targetAmount, saved) "
                          "VALUES (:username, :goalName, :targetAmount, :saved)");
        goalQuery.bindValue(":username", QString::fromStdString(username));
        goalQuery.bindValue(":goalName", QString::fromStdString(goal.name));
        goalQuery.bindValue(":targetAmount", goal.req);
        goalQuery.bindValue(":saved", goal.saved);

        if (!goalQuery.exec()) {
            qDebug() << "Error: Could not insert saving goal -" << goalQuery.lastError();
            return false;
        }
    }

    // Save each budget item
    for (const auto& item : budgetPlan) {
        QSqlQuery budgetQuery;
        budgetQuery.prepare("INSERT INTO budget_items (username, itemName, totalAmount) "
                            "VALUES (:username, :itemName, :totalAmount)");
        budgetQuery.bindValue(":username", QString::fromStdString(username));
        budgetQuery.bindValue(":itemName", QString::fromStdString(item.name));
        budgetQuery.bindValue(":totalAmount", item.totalAmount);

        if (!budgetQuery.exec()) {
            qDebug() << "Error: Could not insert budget item -" << budgetQuery.lastError();
            return false;
        }
    }

    return true;
}
bool user::updatePassword(const string& newPassHash) {
    QSqlQuery query;
    query.prepare("UPDATE users SET passHash = :passHash WHERE username = :username");
    query.bindValue(":passHash", QString::fromStdString(newPassHash));
    query.bindValue(":username", QString::fromStdString(this->username));

    if (!query.exec()) {
        qDebug() << "Error: Could not update password -" << query.lastError();
        return false;
    }
    this->passHash = newPassHash;
    return true;
}

bool user::addTransaction(double amount, const string& category) {
    QSqlQuery query;
    query.prepare("INSERT INTO transactions (username, amount, category) VALUES (:username, :amount, :category)");
    query.bindValue(":username", QString::fromStdString(this->username));
    query.bindValue(":amount", amount);
    query.bindValue(":category", QString::fromStdString(category));

    if (!query.exec()) {
        qDebug() << "Error: Could not insert transaction -" << query.lastError();
        return false;
    }
    return true;
}

bool user::loadFromDatabase(const string& username, const string& password) {
    // Check if the database connection is open
    if (!QSqlDatabase::database().isOpen()) {
        qDebug() << "Database connection is not open!";
        return false;
    }

    QSqlQuery query;
    query.prepare("SELECT * FROM users WHERE username = :username");
    query.bindValue(":username", QString::fromStdString(username));

    if (query.exec()) {
        if (query.next()) {
            // Retrieve the stored password hash from the database
            QString dbPassHash = query.value("passHash").toString();

            // Hash the input password and compare with the stored hash
            QString hashedInputPassword = QString::fromStdString(hashPassword(password));

            qDebug() << "Database password hash:" << dbPassHash;
            qDebug() << "Input password hash:" << hashedInputPassword;

            if (dbPassHash != hashedInputPassword) {
                qDebug() << "Incorrect password.";
                return false;
            }

            // Load user data if password is correct
            this->username = query.value("username").toString().toStdString();
            this->email = query.value("email").toString().toStdString();
            this->balance = query.value("balance").toDouble();

            // Debugging: Confirm loading balance
            qDebug() << "Loaded balance:" << this->balance;

            // Load saving goals
            savingGoals.clear();
            QSqlQuery goalQuery;
            goalQuery.prepare("SELECT goalName, targetAmount, saved FROM saving_goals WHERE username = :username");
            goalQuery.bindValue(":username", QString::fromStdString(username));

            if (goalQuery.exec()) {
                while (goalQuery.next()) {
                    savingGoal goal;
                    goal.name = goalQuery.value("goalName").toString().toStdString();
                    goal.req = goalQuery.value("targetAmount").toDouble();
                    goal.saved = goalQuery.value("saved").toDouble();

                    savingGoals.push_back(goal);

                    // Debugging: Confirm each loaded saving goal
                    qDebug() << "Loaded saving goal:" << QString::fromStdString(goal.name)
                             << "Target Amount:" << goal.req
                             << "Saved:" << goal.saved;
                }
            } else {
                qDebug() << "Failed to load saving goals -" << goalQuery.lastError();
            }

            // Load budget items
            budgetPlan.clear();
            QSqlQuery budgetQuery;
            budgetQuery.prepare("SELECT itemName, totalAmount FROM budget_items WHERE username = :username");
            budgetQuery.bindValue(":username", QString::fromStdString(username));

            if (budgetQuery.exec()) {
                while (budgetQuery.next()) {
                    budgetItem item;
                    item.name = budgetQuery.value("itemName").toString().toStdString();
                    item.totalAmount = budgetQuery.value("totalAmount").toDouble();
                    budgetPlan.push_back(item);

                    // Debugging: Confirm each loaded budget item
                    qDebug() << "Loaded budget item:" << QString::fromStdString(item.name)
                             << "Total Amount:" << item.totalAmount;
                }
            } else {
                qDebug() << "Failed to load budget items -" << budgetQuery.lastError();
            }

            return true;
        } else {
            qDebug() << "User not found or incorrect username/password combination.";
            return false;
        }
    } else {
        qDebug() << "Query execution error:" << query.lastError();
        return false;
    }
}

bool user::saveUpdatesToDatabase() {
    QSqlQuery query;
    query.prepare("UPDATE users SET balance = :balance, saving = :saving, spending = :spending WHERE username = :username");
    query.bindValue(":balance", balance);

    // Calculate the total saving and spending amounts based on savingGoals and budgetPlan
    int totalSaving = 0;
    for (const auto& goal : savingGoals) {
        totalSaving += goal.saved;
    }
    query.bindValue(":saving", totalSaving);

    int totalSpending = 0;
    for (const auto& spendingItem : spendings) {
        totalSpending += spendingItem.spent;
    }
    query.bindValue(":spending", totalSpending);

    query.bindValue(":username", QString::fromStdString(username));

    if (!query.exec()) {
        qDebug() << "Failed to update user data in the database:" << query.lastError();
        return false;
    }
    return true;
}
