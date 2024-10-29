#ifndef SECONDQUESTION_H
#define SECONDQUESTION_H
#include "models/user.h"
#include "models/savinggoal.h"
#include <QDialog>

namespace Ui {
class secondQuestion;
}

class secondQuestion : public QDialog
{
    Q_OBJECT

public:
    explicit secondQuestion(QWidget *parent = nullptr);
    ~secondQuestion();

private slots:
    void on_okButton_clicked();

private:
    Ui::secondQuestion *ui;
};

#endif // SECONDQUESTION_H
