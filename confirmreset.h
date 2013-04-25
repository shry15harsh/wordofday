#ifndef CONFIRMRESET_H
#define CONFIRMRESET_H

#include <QDialog>

namespace Ui {
    class ConfirmReset;
}

class ConfirmReset : public QDialog
{
    Q_OBJECT

public:
    explicit ConfirmReset(QWidget *parent = 0);
    ~ConfirmReset();

private slots:
    void on_pushButton_2_clicked();

private:
    Ui::ConfirmReset *ui;
};

#endif // CONFIRMRESET_H
