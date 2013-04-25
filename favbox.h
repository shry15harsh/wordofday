#ifndef FAVBOX_H
#define FAVBOX_H

#include <QDialog>

namespace Ui {
    class FavBox;
}

class FavBox : public QDialog
{
    Q_OBJECT

public:
    explicit FavBox(QWidget *parent = 0);
    ~FavBox();

private:
    Ui::FavBox *ui;
};

#endif // FAVBOX_H
