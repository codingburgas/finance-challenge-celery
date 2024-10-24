#ifndef FIRSTQUESTION_H
#define FIRSTQUESTION_H

#include <QDialog>

namespace Ui {
class firstQuestion;
}

class firstQuestion : public QDialog
{
    Q_OBJECT

public:
    explicit firstQuestion(QWidget *parent = nullptr);
    ~firstQuestion();

private:
    Ui::firstQuestion *ui;
};

#endif // FIRSTQUESTION_H
