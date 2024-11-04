#include "dashboard_spendings.h"
#include "ui_dashboard_spendings.h"
#include "dashboard.h"
#include <QApplication>
#include <QtCharts/QChartView>
#include <QtCharts/QPieSeries>

Dashboard_spendings::Dashboard_spendings(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::Dashboard_spendings)
{
    ui->setupUi(this);
    QPixmap pix(":/images/images/dashboard-spendings.png");
    ui->background->setPixmap(pix);
    QPieSeries *seriesBudget = new QPieSeries();

    if (currentUser.budgetPlan.empty()) {
        return;
    }

    QPieSlice *slice1 = seriesBudget->append(QString::fromStdString(currentUser.budgetPlan.rbegin()->name), static_cast<qreal>(currentUser.budgetPlan.rbegin()->spent));
    slice1->setColor(QColor("#B6FD33"));

    if (currentUser.budgetPlan.size() > 1) {
        QPieSlice *slice2 = seriesBudget->append(QString::fromStdString(currentUser.budgetPlan[currentUser.budgetPlan.size() - 2].name), static_cast<qreal>(currentUser.budgetPlan[currentUser.budgetPlan.size() - 2].spent));
        slice2->setColor(QColor("#8EC627"));
    }

    if (currentUser.budgetPlan.size() > 2) {
        QPieSlice *slice3 = seriesBudget->append(QString::fromStdString(currentUser.budgetPlan[currentUser.budgetPlan.size() - 3].name), static_cast<qreal>(currentUser.budgetPlan[currentUser.budgetPlan.size() - 3].spent));
        slice3->setColor(QColor("#729C24"));
    }

    if (currentUser.budgetPlan.size() > 3) {
        QPieSlice *slice4 = seriesBudget->append(QString::fromStdString(currentUser.budgetPlan[currentUser.budgetPlan.size() - 4].name), static_cast<qreal>(currentUser.budgetPlan[currentUser.budgetPlan.size() - 4].spent));
        slice4->setColor(QColor("#546D25"));
    }

    // Create and configure chart as before
    QChart *chartBudget = new QChart();
    chartBudget->addSeries(seriesBudget);
    chartBudget->setTitle("Budget Spendings");
    chartBudget->setBackgroundBrush(Qt::NoBrush); // Set chart background to transparent
    chartBudget->setPlotAreaBackgroundVisible(false); // Hide plot area background

    QChartView *chartviewBudget = new QChartView(chartBudget);
    chartviewBudget->setRenderHint(QPainter::Antialiasing); // Enable anti-aliasing for smoother visuals
    chartviewBudget->setBackgroundBrush(Qt::NoBrush); // Set chart view background to transparent
    chartviewBudget->setStyleSheet("background: transparent"); // Set stylesheet to transparent background
    chartviewBudget->setParent(ui->pieChartBudget);

    QPieSeries *seriesGoals = new QPieSeries();

    if (currentUser.savingGoals.empty()) {
        return;
    }

    QPieSlice *slice1s = seriesGoals->append(QString::fromStdString(currentUser.savingGoals.rbegin()->name), static_cast<qreal>(currentUser.savingGoals.rbegin()->saved));
    slice1s->setColor(QColor("#B6FD33")); // Set color for the first slice (Tomato color)

    if (currentUser.savingGoals.size() > 1) {
        QPieSlice *slice2s = seriesGoals->append(QString::fromStdString(currentUser.savingGoals[currentUser.savingGoals.size() - 2].name), static_cast<qreal>(currentUser.savingGoals[currentUser.savingGoals.size() - 2].saved));
        slice2s->setColor(QColor("#8EC627")); // Set color for the second slice (Steel Blue color)
    }

    if (currentUser.savingGoals.size() > 2) {
        QPieSlice *slice3s = seriesGoals->append(QString::fromStdString(currentUser.savingGoals[currentUser.savingGoals.size() - 3].name), static_cast<qreal>(currentUser.savingGoals[currentUser.savingGoals.size() - 3].saved));
        slice3s->setColor(QColor("#729C24")); // Set color for the third slice (Lime Green color)
    }

    if (currentUser.savingGoals.size() > 3) {
        QPieSlice *slice4s = seriesGoals->append(QString::fromStdString(currentUser.savingGoals[currentUser.savingGoals.size() - 4].name), static_cast<qreal>(currentUser.savingGoals[currentUser.savingGoals.size() - 4].saved));
        slice4s->setColor(QColor("#546D25")); // Set color for the fourth slice (Gold color)
    }

    // Create and configure chart as before
    QChart *chartGoals = new QChart();
    chartGoals->addSeries(seriesGoals);
    chartGoals->setTitle("Goals Spendings");
    chartGoals->setBackgroundBrush(Qt::NoBrush); // Set chart background to transparent
    chartGoals->setPlotAreaBackgroundVisible(false); // Hide plot area background

    QChartView *chartviewGoals = new QChartView(chartGoals);
    chartviewGoals->setRenderHint(QPainter::Antialiasing); // Enable anti-aliasing for smoother visuals
    chartviewGoals->setBackgroundBrush(Qt::NoBrush); // Set chart view background to transparent
    chartviewGoals->setStyleSheet("background: transparent"); // Set stylesheet to transparent background
    chartviewGoals->setParent(ui->pieChartGoals);

    if(currentUser.spendings.empty()){
        return; // Exit early if there are no spendings
    }

    // Display spendings
    ui->amountPerGiven->setText(QString::number(currentUser.spendings.rbegin()->spent));
    ui->purposeOfAmount->setText(QString::fromStdString(currentUser.spendings.rbegin()->name));

    if (currentUser.spendings.size() > 1) {
        ui->amountPerGiven_2->setText(QString::number(currentUser.spendings[currentUser.spendings.size() - 2].spent));
        ui->purposeOfAmount_2->setText(QString::fromStdString(currentUser.spendings[currentUser.spendings.size() - 2].name));
    }
    if (currentUser.spendings.size() > 2) {
        ui->amountPerGiven_3->setText(QString::number(currentUser.spendings[currentUser.spendings.size() - 3].spent));
        ui->purposeOfAmount_3->setText(QString::fromStdString(currentUser.spendings[currentUser.spendings.size() - 3].name));
    }
    if (currentUser.spendings.size() > 3) {
        ui->amountPerGiven_4->setText(QString::number(currentUser.spendings[currentUser.spendings.size() - 4].spent));
        ui->purposeOfAmount_4->setText(QString::fromStdString(currentUser.spendings[currentUser.spendings.size() - 4].name));
    }


}

Dashboard_spendings::~Dashboard_spendings()
{
    delete ui;
}

void Dashboard_spendings::on_doneButton_clicked()
{
    int amount = ui->amount_spendings->text().toInt();
    QString forWhat = ui->for_spendings->text();

    if (amount != 0 && !forWhat.isEmpty()) {
        currentUser.spending += amount;
        transaction temp;
        temp.name = forWhat.toStdString();
        temp.spent = amount;
        currentUser.spendings.push_back(temp);
    } else {
        currentUser.spending = amount;
    }

    Dashboard *dashboardWindow = new Dashboard();
    dashboardWindow->show();
    this->close();
}
