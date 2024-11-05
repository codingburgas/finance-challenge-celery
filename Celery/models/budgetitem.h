#ifndef BUDGETITEM_H
#define BUDGETITEM_H

#include <string>
#include <QtSql/QSqlDatabase>
#include <QtSql/QSqlQuery>
#include <QtSql/QSqlError>

using namespace std;

class budgetItem
{
public:
    budgetItem();
    budgetItem(const string &name, double planned, double spent);

    // Budget item properties
    string name;
    double planned=0; // Planned budget
    double spent=0;   // Amount spent

    // Database methods
    bool saveToDatabase();
    bool loadFromDatabase(const string &itemName);
    bool updateInDatabase();
    bool deleteFromDatabase();
};

#endif // BUDGETITEM_H
