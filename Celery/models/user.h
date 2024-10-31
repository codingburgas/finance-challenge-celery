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
    int balance;
    int budget;
    int saving;
    int spending;

    vector<transaction> spendings;
    vector<savingGoal> savingGoals;
    vector<budgetItem> budgetPlan;

    // Database methods
    bool saveToDatabase();
    bool loadFromDatabase(const string& username);
    bool updatePassword(const string& newPassHash);

    // Hashing method
    static string hashPassword(const string& password);
};

#endif // USER_H
extern user currentUser;
