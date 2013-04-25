#include "stored.h"
#include "ui_stored.h"
#include<inout.h>
#include<QDir>

Stored::Stored(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Stored)
{
    ui->setupUi(this);

    setWindowTitle(tr("Stored Files"));

    QDir myDir("d:/file/remind");
    qint8 count=myDir.count()-2;




    for(qint8 i=1;i<=count;i++)
    {


        QString str=QString::number(i);
        QString file="d:/file/remind/"+str+".txt";

        ui->listWidget->addItem("("+str+")"+Read(file));

    }
}

Stored::~Stored()
{
    delete ui;
}
