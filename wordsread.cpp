#include "wordsread.h"
#include "ui_wordsread.h"
#include<QString>
#include<QDebug>
#include<inout.h>
#include<QDir>
#include<QFileSystemModel>
#include <QtCore>
#include <QtGui>


QString index="d:/file/index.txt";

QString n=Read(index);
QChar ch=n.at(0).toAscii();
qint8 chValue=ch.toAscii()-48;

WordsRead::WordsRead(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::WordsRead)
{
    ui->setupUi(this);
    setWindowTitle(tr("Words Read"));
    for(qint8 i=1;i<=chValue;i++)
    {


        QString str=QString::number(i);
        QString word="d:/file/"+str+".txt";
        QString meaning="d:/file/meaning/"+str+".txt";
        ui->listWidget->addItem("("+str+")"+Read(word)+"-"+Read(meaning));
        connect(ui->lineEdit,SIGNAL(returnPressed()),ui->pushButton,SLOT(click()));
    }
}

WordsRead::~WordsRead()
{
    delete ui;
}

void WordsRead::on_pushButton_clicked()
{


    QString val = ui->lineEdit->text();
    QChar ok=val.at(0).toAscii();
    qint8 okValue=ok.toAscii()-48;

    if(okValue>chValue)
    {
        QMessageBox::warning(this,"Invalid Input","Enter a valid input");
    }
    else
    {
        QDir myDir("d:/file/fav");
        qint8 count=myDir.count()-2;
        QString str=QString::number(count+1);
        Writestr("d:/file/fav/"+str+".txt",val);
        ui->pushButton->close();
    }
}
