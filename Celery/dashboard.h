#ifndef DASHBOARD_H
#define DASHBOARD_H
#include "models/user.h"
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

    void on_plus_dashboard_clicked();

private:
    Ui::Dashboard *ui;

    bool isBalanceClicked;
    bool isBudgetClicked;
};

#endif // DASHBOARD_H
