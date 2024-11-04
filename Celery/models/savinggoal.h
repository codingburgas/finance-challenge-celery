#ifndef SAVINGGOAL_H
#define SAVINGGOAL_H

#include <string>
using namespace std;

class savingGoal {
public:
    string name;       // Name of the saving goal
    double req = 0;   // Required/target amount for the goal
    double saved = 0;      // Amount already saved

    savingGoal() = default;
    savingGoal(const string &name, double target, double savedAmount)
        : name(name), req(target), saved(savedAmount) {}
};

#endif // SAVINGGOAL_H
