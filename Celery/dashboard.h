#ifndef DASHBOARD_H
#define DASHBOARD_H
#include "models/user.h"
#include "models/transaction.h"
#include "models/budgetitem.h"
#include <QDialog>

namespace Ui {
class Dashboard;
}

class Dashboard : public QDialog
{
    Q_OBJECT

public:
    explicit Dashboard(QWidget *parent = nullptr);
    ~Dashboard();

private slots:
    void on_currentBalance_clicked();
    void on_budget_clicked();
    void on_spendings_clicked();
    void on_editDetails_clicked();
    void on_savingGoals_clicked();
    void on_firstBudgetName_clicked();
    void clearBudgetElements();

    void on_secondBudgetName_clicked();

    void on_thirdBudgetName_clicked();

    void on_forthBudgetName_clicked();
    void budgetFunction();
private:
    Ui::Dashboard *ui;

    bool isBalanceClicked;
    bool isBudgetClicked;
    bool isSavingGoalsClicked;
    bool isSpendingsClicked;
};

#endif // DASHBOARD_H
