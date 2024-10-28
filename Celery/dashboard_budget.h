#ifndef DASHBOARD_BUDGET_H
#define DASHBOARD_BUDGET_H

#include <QDialog>

namespace Ui {
class dashboard_budget;
}

class dashboard_budget : public QDialog
{
    Q_OBJECT

public:
    explicit dashboard_budget(QWidget *parent = nullptr);
    ~dashboard_budget();

private:
    Ui::dashboard_budget *ui;
};

#endif // DASHBOARD_BUDGET_H
