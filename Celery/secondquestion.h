#ifndef SECONDQUESTION_H
#define SECONDQUESTION_H

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

private:
    Ui::secondQuestion *ui;
};

#endif // SECONDQUESTION_H
