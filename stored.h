#ifndef STORED_H
#define STORED_H

#include <QDialog>

namespace Ui {
    class Stored;
}

class Stored : public QDialog
{
    Q_OBJECT

public:
    explicit Stored(QWidget *parent = 0);
    ~Stored();

private:
    Ui::Stored *ui;
};

#endif // STORED_H
