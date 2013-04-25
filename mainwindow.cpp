#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QtCore>
#include <QtGui>
#include <QString>
#include <QFile>
#include <QDebug>
#include <QTextStream>
#include<wordsread.h>
#include<about.h>
#include<inout.h>
#include<favbox.h>
#include<remind.h>
#include<QDir>
#include<QFile>
#include<confirmreset.h>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    setWindowTitle(tr("Words Manager"));
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_pushButton_2_clicked()
{
    WordsRead newWin;
    newWin.setModal(true);
    newWin.exec();

}

void MainWindow::on_pushButton_5_clicked()
{
    QString n=Read("d:/file/index.txt");
    QChar value=n.at(0).toAscii();
    Write("d:/file/log/initial.txt",value);
}


void MainWindow::on_actionWe_triggered()
{
    About aboutDialog;
    aboutDialog.setModal(true);
    aboutDialog.exec();
}


void MainWindow::on_pushButton_7_clicked()
{
    FavBox myFav;
    myFav.setModal(true);
    myFav.exec();
}


void MainWindow::on_pushButton_3_clicked()
{
    Remind manageRemind;
    manageRemind.setModal(true);
    manageRemind.exec();
}

void MainWindow::on_pushButton_4_clicked()
{
    ConfirmReset dialog;
    dialog.setModal(true);
    dialog.exec();

}
