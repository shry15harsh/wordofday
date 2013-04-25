#ifndef WORDSREAD_H
#define WORDSREAD_H

#include <QDialog>

namespace Ui {
    class WordsRead;
}

class WordsRead : public QDialog
{
    Q_OBJECT

public:
    explicit WordsRead(QWidget *parent = 0);
    ~WordsRead();

private slots:
    void on_pushButton_clicked();

    void on_textEdit_textChanged();

private:
    Ui::WordsRead *ui;
};

#endif // WORDSREAD_H
