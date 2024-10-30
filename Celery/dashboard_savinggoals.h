#ifndef DASHBOARD_SAVINGGOALS_H
#define DASHBOARD_SAVINGGOALS_H

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

    void on_backgroundd_linkActivated(const QString &link);

private:
    Ui::dashboard_savingGoals *ui;
};

#endif // DASHBOARD_SAVINGGOALS_H
