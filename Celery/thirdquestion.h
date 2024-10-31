#ifndef THIRDQUESTION_H
#define THIRDQUESTION_H
#include "models/user.h"
#include "models/budgetitem.h"
#include <QDialog>

namespace Ui {
class thirdQuestion;
}

class thirdQuestion : public QDialog
{
    Q_OBJECT

public:
    explicit thirdQuestion(QWidget *parent = nullptr);
    ~thirdQuestion();

private slots:
    void on_okButton_clicked();

private:
    Ui::thirdQuestion *ui;
       QString budget;
};

#endif // THIRDQUESTION_H
