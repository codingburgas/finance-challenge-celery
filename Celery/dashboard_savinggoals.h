#ifndef DASHBOARD_SAVINGGOALS_H
#define DASHBOARD_SAVINGGOALS_H
#include "models/user.h"
#include "models/savinggoal.h"
#include <QDialog>

namespace Ui {
class dashboard_savingGoals;
}

class dashboard_savingGoals : public QDialog
{
    Q_OBJECT

public:
    explicit dashboard_savingGoals(QWidget *parent = nullptr);
    ~dashboard_savingGoals();

private slots:
    void on_doneButton_clicked();

    void on_background_linkActivated(const QString &link);

    void on_editDetailsButton_clicked();

    void on_submitEditGoal_clicked();

    void on_submitNewGoal_clicked();

private:
    Ui::dashboard_savingGoals *ui;
};

#endif // DASHBOARD_SAVINGGOALS_H
