#include "budgetitem.h"
#include <QDebug>

// Default constructor (handled by = default in the header file)


// Parameterized constructor
budgetItem::budgetItem(const string &name, double totalAmount, double spent, double planned)
    : name(name), totalAmount(totalAmount), spent(spent), planned(planned) {}
