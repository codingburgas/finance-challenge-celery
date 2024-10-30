#ifndef DASHBOARD_NEWBUDGET_H
#define DASHBOARD_NEWBUDGET_H

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

private:
    Ui::dashboard_newBudget *ui;
};

#endif // DASHBOARD_NEWBUDGET_H
