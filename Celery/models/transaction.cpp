
#include "transaction.h"
#include <QDebug>

transaction::transaction() {}

transaction::transaction(const string &name, double spent, int id, const string &date)
    : name(name), spent(spent), id(id), date(date) {}

