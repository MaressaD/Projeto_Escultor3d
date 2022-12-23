#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QDebug>
#include <QString>
#include <QMessageBox>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    connect(this,SIGNAL(getMethod(QString)),ui->widget,SLOT(setMethod(QString)));
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_buttonPVoxel_clicked(bool checked)
{
    QString name;
    if(ui->buttonPVoxel->isChecked()){
        name = "PutVoxel";
        getMethod(name);
        qDebug()<<name;
        //QMessageBox::information(this,"title","ok");
    }
    if(ui->buttonPBox->isChecked()){
        getMethod("PutBox");
        //qDebug()<<"buttonPVoxel";
        //QMessageBox::information(this,"title","ok");
    }
    if(ui->buttonPEllipsoid->isChecked()){
        getMethod("PuEllipsoid");
        //qDebug()<<"buttonPVoxel";
        //QMessageBox::information(this,"title","ok");
    }
    if(ui->buttonPSphere->isChecked()){
        getMethod("PutSphere");
        //qDebug()<<"buttonPVoxel";
        //QMessageBox::information(this,"title","ok");
    }
    if(ui->buttonCVoxel->isChecked()){
        getMethod("CutVoxel");
        //qDebug()<<"buttonPVoxel";
        //QMessageBox::information(this,"title","ok");
    }
    if(ui->buttonCBox->isChecked()){
        getMethod("CutBox");
        //qDebug()<<"buttonPVoxel";
        //QMessageBox::information(this,"title","ok");
    }
    if(ui->buttonCEllipsoid->isChecked()){
        getMethod("CutEllipsoid");
        //qDebug()<<"buttonPVoxel";
        //QMessageBox::information(this,"title","ok");
    }
    if(ui->buttonCSphere->isChecked()){
        getMethod("CutSphere");
        //qDebug()<<"buttonPVoxel";
        //QMessageBox::information(this,"title","ok");
    }
}
