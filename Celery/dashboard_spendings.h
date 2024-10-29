#ifndef DASHBOARD_SPENDINGS_H
#define DASHBOARD_SPENDINGS_H

#include <QDialog>

namespace Ui {
class Dashboard_spendings;
}

class Dashboard_spendings : public QDialog
{
    Q_OBJECT

public:
    explicit Dashboard_spendings(QWidget *parent = nullptr);
    ~Dashboard_spendings();

private slots:
    void on_doneButton_clicked();

private:
    Ui::Dashboard_spendings *ui;
};

#endif // DASHBOARD_SPENDINGS_H
