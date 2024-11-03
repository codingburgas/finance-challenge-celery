#ifndef DASHBOARD_NEWBUDGET_H
#define DASHBOARD_NEWBUDGET_H
#include "models/user.h"
#include <QDialog>

namespace Ui {
class dashboard_newBudget;
}

class dashboard_newBudget : public QDialog
{
    Q_OBJECT

public:
    explicit dashboard_newBudget(QWidget *parent = nullptr);
    ~dashboard_newBudget();

private slots:
    void on_doneButton_clicked();

    void on_submitNewBudget_clicked();

    void on_submitEditBudget_clicked();

private:
    Ui::dashboard_newBudget *ui;

    void updateBudgetSummary();
};

#endif // DASHBOARD_NEWBUDGET_H
