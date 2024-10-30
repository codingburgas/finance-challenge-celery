#ifndef SAVINGGOAL_H
#define SAVINGGOAL_H

#include <string>
#include <QtSql/QSqlDatabase>
#include <QtSql/QSqlQuery>
#include <QtSql/QSqlError>

using namespace std;

class savingGoal
{
public:
    savingGoal();
    savingGoal(const string &name, double req, double saved);

    // Saving goal properties
    string name;
    double req;   // Required amount
    double saved; // Amount already saved

    // Database methods
    bool saveToDatabase();
    bool loadFromDatabase(const string &goalName);
    bool updateInDatabase();
    bool deleteFromDatabase();
};

#endif // SAVINGGOAL_H
