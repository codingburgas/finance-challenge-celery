#ifndef THIRDQUESTION_H
#define THIRDQUESTION_H

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

private:
    Ui::thirdQuestion *ui;
};

#endif // THIRDQUESTION_H
