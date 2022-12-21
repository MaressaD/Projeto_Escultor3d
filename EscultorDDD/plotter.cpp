#include "plotter.h"
#include <QPainter>
#include <QBrush>
#include <QPen>
#include <QColor>
#include <QMouseEvent>
#include <stdlib.h>
#include <QDebug>
using namespace std;





Plotter::Plotter(QWidget *parent)
    : QWidget{parent}
{
    x=y=0;
    z=0;
    r=0;
    rx=ry=rz=0;
    dimx=dimy=dimz=0;
    palette=QColor(0,0,0,255);
    /*palette.setRed(255);
    palette.setGreen(255);
    palette.setBlue(255);
    palette.setAlpha(255);*/
    s = new Sculptor(x,y,z);
    method=" ";

}

void Plotter::paintEvent(QPaintEvent *event)
{
    QPainter painter(this);
    QBrush brush;
    QPen pen;
    int i,j;
    //brush
    brush.setColor(QColor(255,255,255));
    brush.setStyle(Qt::SolidPattern);
    //caneta
    pen.setColor(QColor(0,0,0));
    pen.setWidth(2);

    painter.setBrush(brush);
    painter.setPen(pen);
    //fundo
    painter.drawRect(0,0,width(),height());

    //grade
    pen.setColor(QColor(0,0,0));
    painter.setPen(pen);

    dx=(double)height()/x;
    dy=(double)width()/y;

    for(i=1;i<=x;i++){
    painter.drawLine(0,i*height()/x,width(),i*height()/x);
    }

    for(j=1;j<=y;j++){
    painter.drawLine(j*width()/y,0,j*width()/y,height());
    }

    brush.setColor(QColor(0,0,0));
    painter.setBrush(brush);
/*
    if(x!=0 && y!=0){
        for(i=0;i<x;i++){
            for(j=0;j<y;j++){
            int posicionX = i*dx;
            int posicionY = j*dy;
            if(sculptor2d[i][j].isOn==true){
                brush.setColor(QColor(255,0,0));
                painter.setBrush(brush);
                painter.drawRect(posicionX,posicionY,dx,dy);
                }
            }
        }
    }*/


}


void Plotter::mousePressEvent(QMouseEvent *event){
    /*if(event->button() == Qt::LeftButton){
        int xMousePosicion = event->x();
        int yMousePosicion = event->y();

        xIndex = xMousePosicion/dx;
        yIndex = yMousePosicion/dy;
        zIndex = 0;
        s->setColor(0,0,0,255);

        if(method.compare("PutVoxel",Qt::CaseInsensitive)==0){
            if(gridLimit(xIndex,yIndex,zIndex)==0){
                putVoxelGrid(sculptor3d[xIndex][yIndex][zIndex]);
                s->putVoxel(xIndex,yIndex,zIndex);
                qDebug() <<"voxel criado em escultor";
            }
            else{
                qDebug() << "exede os limites da grade de desenho, nao pode ser desenhado";
            }
        }
       if(method.compare("CutVoxel",Qt::CaseInsensitive)==0){
            if(gridLimit(xIndex,yIndex,zIndex)){
            cutVoxelGrid(sculptor3d[xIndex][yIndex][zIndex]);
            s->cutVoxel(xIndex,yIndex,zIndex);
           }
           else{
                    qDebug() << "exede os limites da grade de desenho, nao pode ser desenhado";
                }
        }
       sculptor2d = sculptor3d[zIndex];
       repaint();
    }
*/
}
bool Plotter::gridLimit(int xc, int yc, int zc)
{
    if((xc<x)&&(yc<y)&&(zc<y)){
        return true;
    }
    return false;
}

void Plotter::putVoxelGrid(Voxel &v)
{
    v.r=0;
    v.g=0;
    v.b=0;
    v.a=255;
    v.isOn=true;
}
void Plotter::cutVoxelGrid(Voxel &v)
{
   v.isOn=false;
}
void Plotter::setX(int _x)
{
    x=_x;
}

void Plotter::setY(int _y)
{
    y=_y;
}

void Plotter::buildGrid()
{
    if(x!=0 && y!=0){
              /* Voxel voxel_zero;
               voxel_zero.r = voxel_zero.b = voxel_zero.g = 0;
               voxel_zero.a = 0.0f;
               voxel_zero.isOn = false;

               sculptor3d.clear();
               for (int k=0;k<z;k++) {
                   vector<vector<Voxel>> aux1;
                   for(int i=0;i<x; i++){
                       vector<Voxel> aux2;
                       for(int j=0;j<y; j++){
                           aux2.push_back(voxel_zero);
                       }
                       aux1.push_back(aux2);
                   }
                   sculptor3d.push_back(aux1);
               }*/

               for(int i=0;i<x;i++){
                       for(int j=0;j<y; j++){
                           sculptor2d[i][j].r=sculptor2d[i][j].g=sculptor2d[i][j].b=0;
                           sculptor2d[i][j].a=0.0f;
                           sculptor2d[i][j].isOn = false;
                       }
               }


               //sculptor2d = sculptor3d[0];
               delete s;
               s = new Sculptor(x,y,z);
    repaint();
    }
}

void Plotter::setR(int _r)
{
    r=_r;
}

void Plotter::setRx(int _rx)
{
    rx=_rx;
}

void Plotter::setRy(int _ry)
{
    ry=_ry;
}

void Plotter::setRz(int _rz)
{
    rz=_rz;
}

void Plotter::setDimx(int _dimx)
{
    dimx=_dimx;
}

void Plotter::setDimy(int _dimy)
{
    dimy=_dimy;
}

void Plotter::setDimz(int _dimz)
{
    dimz=_dimz;
}

void Plotter::setRedGrid(int _r)
{
    //red=_r;
    palette.setGreen(_r);
    repaint();
}

void Plotter::setGreenGrid(int _g)
{
    //green=_g;
    palette.setGreen(_g);
    repaint();
}

void Plotter::setBlueGrid(int _b)
{
    //blue=_b;
    palette.setGreen(_b);
    repaint();
}

void Plotter::setAlphaGrid(int _a)
{
    //alpha=_a;
    palette.setGreen(_a);
    repaint();
}

void Plotter::setMethod(QString m)
{
    method=m;
}

/*void Plotter::setColor(QColor coloring)
{

}
*/
