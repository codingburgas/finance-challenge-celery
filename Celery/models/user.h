#ifndef USER_H
#define USER_H
#include <string>
#include <vector>
#include "savinggoal.h"
#include "budgetitem.h"
#include "transaction.h"
using namespace std;
class user
{
public:
    user();
    string username;
    string passHash; //TODO: implement hash function ANIIIII
    string email;
    int balance;
    vector<transaction> spendings;
    vector<savingGoal> savingGoals;
    vector<budgetItem> budgetPlan;

};

#endif // USER_H
extern user currentUser;
