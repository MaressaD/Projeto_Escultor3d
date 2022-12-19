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

/*void MainWindow::selectMethod(bool)
{
    if(ui->buttonPVoxel->clicked()){
        qDebug()<<"buttonPVoxel";
        QMessageBox::information(this,"title","ok");
    }

}
*/



/*void MainWindow::on_pbuttonmethod_clicked()
{
    if(ui->buttonPVoxel->isCheckable()){
        qDebug()<<"buttonPVoxel";
        QMessageBox::information(this,"title","ok");
    }

}*/


void MainWindow::on_buttonPVoxel_clicked(bool checked)
{
    if(ui->buttonPVoxel->isChecked()){
        qDebug()<<"buttonPVoxel";
        QMessageBox::information(this,"title","ok");
    }
}

