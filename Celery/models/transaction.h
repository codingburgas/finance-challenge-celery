#ifndef TRANSACTION_H
#define TRANSACTION_H

#include <string>
#include <QtSql/QSqlDatabase>
#include <QtSql/QSqlQuery>
#include <QtSql/QSqlError>

using namespace std;

class transaction
{
public:
    transaction();
    transaction(const string &name, double spent, int id, const string &date);

    // Transaction properties
    string name;
    double spent;
    int id;
    string date;

    // Database methods
    bool saveToDatabase();
    bool loadFromDatabase(int transactionId);
    bool updateInDatabase();
    bool deleteFromDatabase();
};

#endif // TRANSACTION_H
