#ifndef DASHBOARD_NEWBALANCE_H
#define DASHBOARD_NEWBALANCE_H

#include <QDialog>

namespace Ui {
class dashboard_newBalance;
}

class dashboard_newBalance : public QDialog
{
    Q_OBJECT

public:
    explicit dashboard_newBalance(QWidget *parent = nullptr);
    ~dashboard_newBalance();

private:
    Ui::dashboard_newBalance *ui;
};

#endif // DASHBOARD_NEWBALANCE_H
