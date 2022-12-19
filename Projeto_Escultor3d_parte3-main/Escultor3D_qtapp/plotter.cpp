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
    x=y=20;
    z=0;
    r=0;
    rx=ry=rz=0;
    dimx=dimy=dimz=0;
    palette.setRed(255);
    palette.setGreen(255);
    palette.setBlue(255);
    palette.setAlpha(255);
    s = new Sculptor(x,y,z);
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


    for(i=0;i<x;i++){
        for(j=0;j<y;j++){
        int posicionX = i*dx;
        int posicionY = j*dy;
        if(sculptor3d[i][j][0].isOn==true){
            painter.drawRect(posicionX,posicionY,posicionX+dx,posicionY+dy);
            }
        }
    }


}

void Plotter::mousePressEvent(QMouseEvent *event)
{
    if(event->button() == Qt::LeftButton){
        int xMousePosicion = event->x();
        int yMousePosicion = event->y();

        xIndex = xMousePosicion/dx;
        yIndex = yMousePosicion/dy;
        zIndex = 0;
        s->setColor(0,0,0,255);

        if(method.compare("PutVoxel",Qt::CaseInsensitive)==0){
            if(gridLimit(xIndex,yIndex,zIndex)==0){/*colocar condição de limite*/
                putVoxelGrid(sculptor3d[xIndex][yIndex][zIndex]);
                s->putVoxel(xIndex,yIndex,zIndex);
            }
            else{
                qDebug() << "exede os limites da grade de desenho, nao pode ser desenhado";
            }
       if(method.compare("CutVoxel",Qt::CaseInsensitive)==0){
            if(gridLimit(xIndex,yIndex,zIndex)){/*colocar condição de limite*/
            cutVoxelGrid(sculptor3d[xIndex][yIndex][zIndex]);
            s->putVoxel(xIndex,yIndex,zIndex);
           }
           else{
                    qDebug() << "exede os limites da grade de desenho, nao pode ser desenhado";
                }


        }
        sculptor2d = sculptor3d[zIndex];
    }
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
    //repaint();
}

void Plotter::setY(int _y)
{
    y=_y;
    //repaint();
}

void Plotter::buildGrid()
{
    repaint();
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

void Plotter::setColor(QColor coloring)
{

}
