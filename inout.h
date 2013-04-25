#ifndef INOUT_H
#define INOUT_H

#include<QFile>
#include<QDebug>
#include<QTextStream>
#include<QString>

void Writeint(QString Filename,qint8 index);
void Writestr(QString Filename,QString index);
void Write(QString Filename,QChar index);

QString Read(QString Filename);

void Writedate(QString Filename,QString index);

void changeindex(QString value, QString indexpath);

#endif // INOUT_H

