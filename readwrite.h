#ifndef INOUT_H
#define INOUT_H
#include<QFile>
#include<QDebug>
#include<QTextStream>
#include<QString>

void Write(QString Filename,QChar index)
{
    QFile mFile(Filename);

    if(!mFile.open(QFile::WriteOnly|QFile::Text))
    {
                   qDebug()<<"reinstall the software";
                   return;
    }
    QTextStream out(&mFile);
    out<<index;
    mFile.flush();
    mFile.close();
}

QString Read(QString Filename)
{

    QFile mFile(Filename);

    if(!mFile.open(QFile::ReadOnly|QFile::Text))
    {
                   qDebug()<<"sorry";
                   return 0;
    }
    QTextStream in(&mFile);

    QString mText=in.readLine();
    mFile.close();
    return (mText);
}

void append(QString filename,QString data)
{
    QFile mFile(filename);
    mFile.open(QIODevice::ReadWrite);
    uchar* buffer=mFile.map(0,5);
    for(int i=0;i<5;++i)
        buffer[i]-=1;
    QTextStream out(&mFile);
    out<<data;
    mFile.unmap(buffer);
    mFile.close();
}

void Writedate(QString Filename,QString index)
{
    QFile mFile(Filename);

    if(!mFile.open(QFile::WriteOnly|QFile::Text))
    {
                   qDebug()<<"reinstall the software";
                   return;
    }
    QTextStream out(&mFile);
    out<<index;
    mFile.flush();
    mFile.close();
}

void changeindex(QString value, QString indexpath)
{
    QChar ch=value.at(0).toAscii();
    qint8 chValue=ch.toAscii();
    chValue=chValue+1;
    QChar next=chValue;
    Write(indexpath,next);
}

#endif // INOUT_H

