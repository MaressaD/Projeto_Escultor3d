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

    if(ui->buttonPVoxel->isChecked()){
        QString name;
        getMethod(name);
        qDebug()<<"buttonPVoxel";
        //QMessageBox::information(this,"title","ok");
    }
    if(ui->buttonPBox->isChecked()){
        qDebug()<<"buttonPVoxel";
        //QMessageBox::information(this,"title","ok");
    }
    if(ui->buttonPEllipsoid->isChecked()){
        qDebug()<<"buttonPVoxel";
        //QMessageBox::information(this,"title","ok");
    }
    if(ui->buttonPSphere->isChecked()){
        qDebug()<<"buttonPVoxel";
        //QMessageBox::information(this,"title","ok");
    }
    if(ui->buttonCVoxel->isChecked()){
        qDebug()<<"buttonPVoxel";
        //QMessageBox::information(this,"title","ok");
    }
    if(ui->buttonCBox->isChecked()){
        qDebug()<<"buttonPVoxel";
        //QMessageBox::information(this,"title","ok");
    }
    if(ui->buttonCEllipsoid->isChecked()){
        qDebug()<<"buttonPVoxel";
        //QMessageBox::information(this,"title","ok");
    }
    if(ui->buttonCSphere->isChecked()){

        qDebug()<<"buttonPVoxel";
        //QMessageBox::information(this,"title","ok");
    }
}

