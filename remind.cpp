#include "remind.h"
#include "ui_remind.h"
#include<inout.h>
#include<QDir>
#include<stored.h>

Remind::Remind(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Remind)
{
    ui->setupUi(this);
    setWindowTitle(tr("Add Files"));
}

Remind::~Remind()
{
    delete ui;
}

void Remind::on_pushButton_clicked()
{
    QString name=ui->lineEdit->text();
    QString des=ui->lineEdit_2->text();
    QDir myfolder("d:/file/remind");
    qint8 count=myfolder.count()-1;
    QString str=QString::number(count);
    Writestr("d:/file/remind/"+str+".txt",name+"--"+des);
    ui->pushButton->close();
}

void Remind::on_pushButton_3_clicked()
{
    Stored mystored;
    mystored.setModal(true);
    mystored.exec();
}
