#include "confirmreset.h"
#include "ui_confirmreset.h"
#include<inout.h>
#include<confirmreset.h>
#include<QDir>

ConfirmReset::ConfirmReset(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::ConfirmReset)
{
    ui->setupUi(this);
    setWindowTitle(tr("Are you sure?"));

}

ConfirmReset::~ConfirmReset()
{
    delete ui;
}

void ConfirmReset::on_pushButton_2_clicked()
{
    Writestr("d:/file/initial.txt","1");
    Writestr("d:/file/date.txt","date");
    Writestr("d:/file/index.txt","0");

    QDir folder("d:/file/fav");
    QFile file;
    qint8 count=folder.count()-2;
    for(qint8 i=1;i<=count;i++)
    {
        QString str=QString::number(i);
        file.remove("d:/file/fav/"+str+".txt");
    }
    QDir nfolder("d:/file/remind");
    QFile nfile;
    qint8 ncount=nfolder.count()-2;
    for(qint8 j=1;j<=ncount;j++)
    {
        QString str=QString::number(j);
        nfile.remove("d:/file/remind/"+str+".txt");
    }
}
