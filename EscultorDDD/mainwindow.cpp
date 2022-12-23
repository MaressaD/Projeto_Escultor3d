#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QDebug>
#include <QString>


MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    connect(this,SIGNAL(getMethod(QString)),ui->widget,SLOT(setMethod(QString)));
    connect(ui->widget,SIGNAL(changeSlidersx(int,int)),ui->sliderXBox,SLOT(setRange(int,int)));
    connect(ui->widget,SIGNAL(changeSlidersy(int,int)),ui->sliderYBox,SLOT(setRange(int,int)));
    connect(ui->widget,SIGNAL(changeSlidersz(int,int)),ui->sliderZBox,SLOT(setRange(int,int)));
    connect(ui->widget,SIGNAL(changeSlidersx(int,int)),ui->sliderRXellipsoid,SLOT(setRange(int,int)));
    connect(ui->widget,SIGNAL(changeSlidersy(int,int)),ui->sliderRYellipsoid,SLOT(setRange(int,int)));
    connect(ui->widget,SIGNAL(changeSlidersz(int,int)),ui->sliderRZellipsoid,SLOT(setRange(int,int)));
    connect(ui->widget,SIGNAL(changeSlidersR(int,int)),ui->sliderRsphere,SLOT(setRange(int,int)));
    connect(ui->widget,SIGNAL(changeSlidersPlanz(int,int)),ui->sliderPlan,SLOT(setRange(int,int)));

}


MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_buttonPVoxel_clicked(bool checked){
    QString name;
    if(ui->buttonPVoxel->isChecked()){
        name = "PutVoxel";
        getMethod(name);
        qDebug()<<name;
    }
}


void MainWindow::on_buttonCVoxel_clicked(bool checked){
     QString name;
     if(ui->buttonCVoxel->isChecked()){
         name = "CutVoxel";
         getMethod(name);
         qDebug()<<name;
     }
}


void MainWindow::on_buttonPBox_clicked(bool checked){
    QString name;
    if(ui->buttonPBox->isChecked()){
        name = "PutBox";
        getMethod(name);
        qDebug()<<name;
    }
}


void MainWindow::on_buttonCBox_clicked(bool checked){
    QString name;
    if(ui->buttonCBox->isChecked()){
        name ="CutBox";
        getMethod(name);
        qDebug()<<name;
    }
}


void MainWindow::on_buttonPSphere_clicked(bool checked){
    QString name;
    if(ui->buttonPSphere->isChecked()){
        name = "PutSphere";
        getMethod(name);
        qDebug()<<name;
    }
}


void MainWindow::on_buttonCSphere_clicked(bool checked)
{
    QString name;
    if(ui->buttonCSphere->isChecked()){
        name = "CutSphere";
        getMethod(name);
        qDebug()<<name;
    }
}


void MainWindow::on_buttonPEllipsoid_clicked(bool checked){
    QString name;
    if(ui->buttonPEllipsoid->isChecked()){
        name = "PutEllipsoid";
        getMethod(name);
        qDebug()<<name;
    }
}


void MainWindow::on_buttonCEllipsoid_clicked(bool checked){
    QString name;
    if(ui->buttonCEllipsoid->isChecked()){
        name ="CutEllipsoid";
        getMethod(name);
        qDebug()<<name;
    }
}

