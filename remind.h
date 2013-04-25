#ifndef REMIND_H
#define REMIND_H

#include <QDialog>

namespace Ui {
    class Remind;
}

class Remind : public QDialog
{
    Q_OBJECT

public:
    explicit Remind(QWidget *parent = 0);
    ~Remind();

private slots:
    void on_pushButton_clicked();

    void on_pushButton_3_clicked();

private:
    Ui::Remind *ui;
};

#endif // REMIND_H
