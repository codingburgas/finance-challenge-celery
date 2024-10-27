#ifndef DASHBOARD_H
#define DASHBOARD_H

#include <QDialog>

namespace Ui {
class Dashboard;
}

class Dashboard : public QDialog
{
    Q_OBJECT

public:
    explicit Dashboard(const QString &balance, QWidget *parent = nullptr);
    ~Dashboard();

private slots:
    void on_currentBalance_clicked();

    void on_budget_clicked();

    void on_spendings_clicked();

private:
    Ui::Dashboard *ui;
    QString balance;
};

#endif // DASHBOARD_H
