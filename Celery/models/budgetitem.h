#ifndef BUDGETITEM_H
#define BUDGETITEM_H

#include <string>
using namespace std;

class budgetItem {
public:
    string name;            // Name of the budget item
    double totalAmount = 0;  // Total amount allocated for this item
    double spent = 0;        // Amount spent on this item
    double planned = 0;      // Planned budget for this item

    // Default and parameterized constructors
    budgetItem() = default;
    budgetItem(const string &name, double totalAmount, double spent, double planned);
};

#endif // BUDGETITEM_H
