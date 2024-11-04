#ifndef SAVINGGOAL_H
#define SAVINGGOAL_H

#include <string>
using namespace std;

class savingGoal {
public:
    string goalName;       // Name of the saving goal
    double targetAmount = 0;   // Required/target amount for the goal
    double saved = 0;      // Amount already saved

    // Default and parameterized constructors
    savingGoal() = default;
    savingGoal(const string &goalName, double targetAmount, double saved);
};

#endif // SAVINGGOAL_H
