#ifndef FIRSTQUESTION_H
#define FIRSTQUESTION_H

#include <QDialog>
#include <QLineEdit>
namespace Ui {
class firstQuestion;
}

class firstQuestion : public QDialog
{
    Q_OBJECT

public:

    explicit firstQuestion(QWidget *parent = nullptr);

    ~firstQuestion();

private slots:
    void on_okButton_clicked();

private:
    Ui::firstQuestion *ui;

};

#endif // FIRSTQUESTION_H
