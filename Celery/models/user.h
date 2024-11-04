#ifndef USER_H
#define USER_H

#include <string>
#include <vector>
#include <QtSql/QSqlDatabase>
#include <QtSql/QSqlQuery>
#include <QtSql/QSqlError>
#include <QCryptographicHash>
#include "savinggoal.h"
#include "budgetitem.h"
#include "transaction.h"

using namespace std;

class user
{
public:
    user();

    // User properties
    string username;
    string passHash;
    string email;
    double balance;
    int saving;
    int spending;

    vector<transaction> spendings;
    vector<savingGoal> savingGoals;
    vector<budgetItem> budgetPlan;

    // Database methods
    bool saveToDatabase();
    bool loadFromDatabase(const string& username, const string& password);
    bool updatePassword(const string& newPassHash);

    bool addTransaction(double amount, const string& category);

    bool saveUpdatesToDatabase();

    // Hashing method
    static std::string hashPassword(const std::string& password);
};

bool initializeDatabase();
bool setupDatabaseSchema();
bool loadFromDatabase(const string& username, const string& password);

#endif // USER_H
extern user currentUser;
