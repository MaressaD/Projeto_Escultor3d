#include "mainwindow.h"
#include "sculptor.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    w.show();
    return a.exec();

    /* Sculptor trono(10,10,10);
     trono.setColor(0.0,0.0,1.0,1.0);
     trono.putBox(0,9,0,9,0,9);
     trono.cutBox(1,8,1,9,1,9);
     trono.writeOFF("trono.off");*/
/**
     Sculptor melancia(20,20,20);
     melancia.setColor(0.3,0.9,0.4,0.5);
     melancia.putSphere(10,10,10,10);
     //melancia.cutEllipsoid(0,0,0,19,9,9);
     melancia.setColor(0.9,0.1,0.1,0.5);
     melancia.putSphere(10,10,10,9);
     melancia.cutBox(0,10,0,19,0,19);
     melancia.setColor(1.0,1.0,1.0,0.5);
     melancia.putVoxel(11,7,4);
     melancia.putVoxel(11,16,13);
     melancia.putVoxel(11,8,14);
     melancia.putVoxel(11,14,8);
     melancia.putVoxel(11,9,3);
     melancia.putVoxel(11,17,11);
     melancia.putVoxel(11,3,9);
     melancia.putVoxel(11,6,12);
     melancia.putVoxel(11,12,6);
     melancia.putVoxel(11,10,11);
     melancia.putVoxel(11,13,9);

     melancia.writeOFF("melancia2.off");
     **/
}
