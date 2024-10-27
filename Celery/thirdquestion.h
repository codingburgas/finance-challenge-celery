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

private slots:
    void on_okButton_clicked();

private:
    Ui::thirdQuestion *ui;
       QString balance;
};

#endif // THIRDQUESTION_H
