#include "plotter.h"
#include <QPainter>
#include <QPaintEvent>
#include <QBrush>
#include <QPen>
#include <QColor>
#include <QMouseEvent>
#include <stdlib.h>
#include <QDebug>
#include<iostream>

//#include <algorithm>
//#include <math.h>

using namespace std;





Plotter::Plotter(QWidget *parent)
    : QWidget{parent}
{
    x=y=z=0;
    r=0;
    rx=ry=rz=0;
    dimx=dimy=dimz=0;
    xIndex=yIndex=zIndex=0;
    palette=QColor(255,255,255,255);
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
    pen.setStyle(Qt::SolidLine);
    pen.setWidth(2);

    painter.setBrush(brush);
    painter.setPen(pen);
    //fundo
    painter.setPen(pen);
    painter.setBrush(brush);
    painter.drawRect(0,0,width(),height());

    //grade
    pen.setColor(QColor(0,0,0));

    if(x!=0 && y!=0 && z!=0){

        pen.setWidth(2);
        painter.setPen(pen);

        dx=(double)height()/x;
        dy=(double)width()/y;

        for(i=1;i<=x;i++){
        painter.drawLine(0,i*height()/x,width(),i*height()/x);
        }

        for(j=1;j<=y;j++){
        painter.drawLine(j*width()/y,0,j*width()/y,height());
        }
     }

        brush.setColor(QColor(0,0,0));
        painter.setBrush(brush);

        if(x!=0 && y!=0 && z!=0){
            for(i=0;i<x;i++){
                for(j=0;j<y;j++){
                int posicionX = i*dx;
                int posicionY = j*dy;
                if(sculptor2d[i][j].isOn==true){
                    brush.setColor(QColor(sculptor2d[i][j].r,sculptor2d[i][j].g,sculptor2d[i][j].b,sculptor2d[i][j].a));
                    painter.setBrush(brush);
                    painter.drawRect(posicionY,posicionX,dy,dx);
                    }
                }
            }
        }


}


void Plotter::mousePressEvent(QMouseEvent *event){
    if(x!=0 && y!=0 && z!=0){
        if(event->button() == Qt::LeftButton){
            int xMousePosicion = event->x();
            int yMousePosicion = event->y();

            xIndex = yMousePosicion/dx;
            yIndex = xMousePosicion/dy;
            //definindo as cores do escultor indo de 0 a 1;
            //int colorred = palette.red()/255.0f;
            //int colorgreen = palette.green()/255.0f;
            //int colorblue = palette.blue()/255.0f;
            //int coloralpha = palette.alpha()/255.0f;

            //s->setColor(colorred,colorgreen,colorblue,coloralpha);
            s->setColor(palette.red()/255.0f,palette.green()/255.0f,palette.blue()/255.0f,palette.alpha()/255.0f);

            if(method.compare("PutVoxel",Qt::CaseInsensitive)==0){
                if(gridLimit(xIndex,yIndex,zIndex)){
                    putVoxelGrid(sculptor3d[zIndex][xIndex][yIndex],palette);
                    s->putVoxel(xIndex,yIndex,zIndex);
                    qDebug() <<"voxel criado em escultor";
                }
            }
           if(method.compare("CutVoxel",Qt::CaseInsensitive)==0){
                if(gridLimit(xIndex,yIndex,zIndex)){
                cutVoxelGrid(sculptor3d[zIndex][xIndex][yIndex]);
                s->cutVoxel(xIndex,yIndex,zIndex);
               }
            }
           if(method.compare("PutBox",Qt::CaseInsensitive)==0){
                for(int k=0;k<dimz;k++){
                       for(int i=0;i<dimx;i++){
                           for(int j=0;j<dimy;j++){
                                if(gridLimit(xIndex+i,yIndex+j,zIndex+k)){
                                putVoxelGrid(sculptor3d[zIndex+k][xIndex+i][yIndex+j],palette);
                                s->putVoxel(xIndex+i,yIndex+j,zIndex+k);
                                }
                           }
                        }

               }
          }
          if(method.compare("CutBox",Qt::CaseInsensitive)==0){
              for(int k=0;k<dimz;k++){
                  for(int i=0;i<dimx;i++){
                      for(int j=0;j<dimy;j++){
                           if(gridLimit(xIndex+i,yIndex+j,zIndex+k)){
                           cutVoxelGrid(sculptor3d[zIndex+k][xIndex+x][yIndex+y]);
                           s->cutVoxel(xIndex+i,yIndex+j,zIndex+k);
                           }
                      }
                   }
              }
          }
          if(method.compare("PutSphere",Qt::CaseInsensitive)==0){
              for(int k=0;k<dimz;k++){
                  for(int i=0;i<dimx;i++){
                      for(int j=0;j<dimy;j++){
                           if(gridLimit(xIndex+i,yIndex+j,zIndex+k)){
                           putVoxelGrid(sculptor3d[zIndex+k][xIndex+x][yIndex+y],palette);
                           s->putVoxel(xIndex+i,yIndex+j,zIndex+k);
                           }
                      }
                   }
              }
         }
          if(method.compare("CutSphere",Qt::CaseInsensitive)==0){
              for(int k=0;k<dimz;k++){
                  for(int i=0;i<dimx;i++){
                      for(int j=0;j<dimy;j++){
                           if(gridLimit(xIndex+i,yIndex+j,zIndex+k)){
                           cutVoxelGrid(sculptor3d[zIndex+k][xIndex+x][yIndex+y]);
                           s->cutVoxel(xIndex+i,yIndex+j,zIndex+k);
                           }
                      }
                   }
              }
         }
          if(method.compare("PutEllipsoid",Qt::CaseInsensitive)==0){
              for(int k=0;k<dimz;k++){
                  for(int i=0;i<dimx;i++){
                      for(int j=0;j<dimy;j++){
                           if(gridLimit(xIndex+i,yIndex+j,zIndex+k)){
                           putVoxelGrid(sculptor3d[zIndex+k][xIndex+x][yIndex+y],palette);
                           s->putVoxel(xIndex+i,yIndex+j,zIndex+k);
                           }
                      }
                   }
              }
         }
          if(method.compare("CutEllipsoid",Qt::CaseInsensitive)==0){
              for(int k=0;k<dimz;k++){
                  for(int i=0;i<dimx;i++){
                      for(int j=0;j<dimy;j++){
                           if(gridLimit(xIndex+i,yIndex+j,zIndex+k)){
                           cutVoxelGrid(sculptor3d[zIndex+k][xIndex+x][yIndex+y]);
                           s->cutVoxel(xIndex+i,yIndex+j,zIndex+k);
                           }
                      }
                   }
              }
         }
           //ifs...
           sculptor2d = sculptor3d[zIndex];
           repaint();
           for(int i=0;i<x;i++){
                   for(int j=0;j<y; j++){
                       qDebug() << sculptor2d[i][j].isOn;
                   }
           }

        }
    }

}

bool Plotter::gridLimit(int xc, int yc, int zc)
{
    if((xc<x)&&(yc<y)&&(zc<z)){
        return true;
    }
    return false;
}

void Plotter::putVoxelGrid(Voxel &v,QColor color)
{
    v.r=color.red();
    v.g=color.green();
    v.b=color.blue();
    v.a=color.alpha();
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

void Plotter::setZ(int _z)
{
    z=_z;
}

void Plotter::buildGrid()
{
    if(x!=0 && y!=0 && z!=0){
               Voxel voxel_zero;
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
               }
              sculptor2d=sculptor3d[0];

               for(int i=0;i<x;i++){
                       for(int j=0;j<y; j++){
                           qDebug() << sculptor2d[i][j].isOn;
                       }
               }

               emit changeSlidersx(0,x-1);
               emit changeSlidersy(0,y-1);
               emit changeSlidersz(0,z-1);

               if(x<y && x<z){
                    emit changeSlidersR(0,x-1);
               }
               if(y<x && y<z){
                    emit changeSlidersR(0,y-1);
               }
               if(z<y && z<x){
                    emit changeSlidersR(0,z-1);
               }

               emit changeSlidersPlanz(0,z);

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
    palette.setRed(_r);
    repaint();
}

void Plotter::setGreenGrid(int _g)
{
    palette.setGreen(_g);
    repaint();
}

void Plotter::setBlueGrid(int _b)
{
    palette.setBlue(_b);
    repaint();
}

void Plotter::setAlphaGrid(int _a)
{
    palette.setAlpha(_a);
    repaint();
}

void Plotter::setMethod(QString m)
{
    method=m;
}

void Plotter::saveProject()
{
    s->writeOFF((char*) "project.off");
}

void Plotter::changeViewPlan(int current_plan)
{
    zIndex=current_plan;
    sculptor2d=sculptor3d[zIndex];
    repaint();
}



