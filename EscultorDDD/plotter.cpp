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
    nc=nl=np=0;
    r=0;
    rx=ry=rz=0;
    dl=dc=0;
    dimx=dimy=dimz=0;
    lIndex=cIndex=pIndex=0;
    palette=QColor(255,255,255,255);
    s = new Sculptor(nl,nc,np);
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

    if(nl!=0 && nc!=0 && np!=0){

        pen.setWidth(2);
        painter.setPen(pen);

        dc=(double)width()/nc; //distancia entre colunas
        dl=(double)height()/nl; //distancia entre linhas

        for(i=1;i<=nl;i++){
        painter.drawLine(0,i*height()/nl,width(),i*height()/nl);
        }
        for(j=1;j<=nc;j++){
        painter.drawLine(j*width()/nc,0,j*width()/nc,height());
        }


     }

        brush.setColor(QColor(0,0,0));
        painter.setBrush(brush);

        if(nl!=0 && nc!=0 && np!=0){
            for(i=1;i<nl;i++){
                for(j=1;j<nc;j++){
                int posicionL = i*dl;
                int posicionC = j*dc;
                if(sculptor2d[i][j].isOn==true){
                    brush.setColor(QColor(sculptor2d[i][j].r,sculptor2d[i][j].g,sculptor2d[i][j].b,sculptor2d[i][j].a));
                    painter.setBrush(brush);
                    painter.drawRect(posicionC,posicionL,dc,dl);
                    }
                }
            }
        }


}


void Plotter::mousePressEvent(QMouseEvent *event){
    if(nl!=0 && nc!=0 && np!=0){
        if(event->button() == Qt::LeftButton){
            int cMousePosicion = event->x();
            int lMousePosicion = event->y();

            cIndex = cMousePosicion/dc;
            lIndex = lMousePosicion/dl;

            s->setColor(palette.red()/255.0f,palette.green()/255.0f,palette.blue()/255.0f,palette.alpha()/255.0f);

            if(method.compare("PutVoxel",Qt::CaseInsensitive)==0){
                if(gridLimit(lIndex,cIndex,pIndex)){
                    putVoxelGrid(sculptor3d[pIndex][lIndex][cIndex],palette);
                    s->putVoxel(lIndex,cIndex,pIndex);
                    qDebug() <<"voxel criado em escultor";
                }
            }
           if(method.compare("CutVoxel",Qt::CaseInsensitive)==0){
                if(gridLimit(lIndex,cIndex,pIndex)){
                cutVoxelGrid(sculptor3d[pIndex][lIndex][cIndex]);
                s->cutVoxel(lIndex,cIndex,pIndex);
               }
            }
           if(method.compare("PutBox",Qt::CaseInsensitive)==0){
                for(int k=0;k<dimz;k++){
                       for(int i=0;i<dimx;i++){
                           for(int j=0;j<dimy;j++){
                               if(gridLimit(lIndex+i,cIndex+j,pIndex+k)){
                                   putVoxelGrid(sculptor3d[pIndex+k][lIndex+i][cIndex+j],palette);
                                   s->putVoxel(lIndex+i,cIndex+j,pIndex+k);
                               }
                           }
                        }

               }
          }
          if(method.compare("CutBox",Qt::CaseInsensitive)==0){
              for(int k=0;k<dimz;k++){
                  for(int i=0;i<dimx;i++){
                      for(int j=0;j<dimy;j++){
                           if(gridLimit(lIndex+i,cIndex+j,pIndex+k)){
                           cutVoxelGrid(sculptor3d[pIndex+k][lIndex+i][cIndex+j]);
                           s->cutVoxel(lIndex+i,cIndex+j,pIndex+k);
                          }
                      }
                   }
              }
          }
          if(method.compare("PutSphere",Qt::CaseInsensitive)==0){
              double aux;
              if(pIndex>=r && lIndex>=r && cIndex>=r){
              for(int k=pIndex-r;k<=pIndex+r;k++){
                  for(int i=lIndex-r;i<=lIndex+r;i++){
                          for(int j=cIndex-r;j<=cIndex+r;j++){
                              aux=(i-lIndex)*(i-lIndex) + (j-cIndex)*(j-cIndex) + (k-pIndex)*(k-pIndex);
                              if(aux<=(r*r)){
                                  if(gridLimit(i,j,k)){
                                  putVoxelGrid(sculptor3d[k][i][j],palette);
                                  s->putVoxel(i,j,k);
                                 }
                              }
                          }
                      }
                  }
              }else{ qDebug()<< "você está tentando desenhar fora do tamanho máximo de planos, tente mudar de plano ou aumentar a grade";}
         }
          if(method.compare("CutSphere",Qt::CaseInsensitive)==0){
              double aux;
              for(int k=pIndex-r;k<=pIndex+r;k++){
                  for(int i=lIndex-r;i<=lIndex+r;i++){
                          for(int j=cIndex-r;j<=cIndex+r;j++){
                              aux=(i-lIndex)*(i-lIndex) + (j-cIndex)*(j-cIndex) + (k-pIndex)*(k-pIndex);
                              if(aux<(r*r)){
                                  if(gridLimit(i,j,k)){
                                  cutVoxelGrid(sculptor3d[k][i][j]);
                                  s->cutVoxel(i,j,k);
                                 }
                              }
                          }
                      }
                  }
         }
          if(method.compare("PutEllipsoid",Qt::CaseInsensitive)==0){
              double aux,x,y,z;
              for(int k=pIndex-rz;k<=pIndex+rz;k++){
                  for(int i=lIndex-rx;i<=lIndex+rx;i++){
                          for(int j=cIndex-ry;j<=cIndex+ry;j++){
                              x =((double)(i-lIndex)*(double)(i-lIndex))/(rx*rx);
                              y =((double)(j-cIndex)*(double)(j-cIndex))/(ry*ry);
                              z =((double)(k-pIndex)*(double)(k-pIndex))/(rz*rz);
                              aux=x+y+z;
                                  if(aux<=1){
                                      if(gridLimit(i,j,k)){
                                      putVoxelGrid(sculptor3d[k][i][j],palette);
                                      s->putVoxel(i,j,k);
                                     }
                                  }
                           }
                    }
                }
           }

          if(method.compare("CutEllipsoid",Qt::CaseInsensitive)==0){
              double aux,x,y,z;
              for(int k=pIndex-rz;k<=pIndex+rz;k++){
                  for(int i=lIndex-rx;i<=lIndex+rx;i++){
                          for(int j=cIndex-ry;j<=cIndex+ry;j++){
                              x =((double)(i-lIndex)*(double)(i-lIndex))/(rx*rx);
                              y =((double)(j-cIndex)*(float)(j-cIndex))/(ry*ry);
                              z =((double)(k-pIndex)*(float)(k-pIndex))/(rz*rz);
                              aux=x+y+z;
                                  if(aux<=1){
                                      if(gridLimit(i,j,k)){
                                      cutVoxelGrid(sculptor3d[k][i][j]);
                                      s->cutVoxel(i,j,k);
                                     }
                                  }
                           }
                    }
                }
          }
           sculptor2d = sculptor3d[pIndex];
           repaint();

        }
    }

}

bool Plotter::gridLimit(int l, int c, int p)
{
    if((c<nc)&&(l<nl)&&(p<np)){
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
void Plotter::setX(int _nc)
{
    nc=_nc;
}

void Plotter::setY(int _nl)
{
    nl=_nl;
}

void Plotter::setZ(int _np)
{
    np=_np;
}

void Plotter::buildGrid()
{
    if(nc!=0 && nl!=0 && np!=0){
               Voxel voxel_zero;
               voxel_zero.r = voxel_zero.b = voxel_zero.g = 0;
               voxel_zero.a = 0.0f;
               voxel_zero.isOn = false;

               sculptor3d.clear();
               for (int k=0;k<np;k++) {
                   vector<vector<Voxel>> aux1;
                   for(int i=0;i<nl; i++){
                       vector<Voxel> aux2;
                       for(int j=0;j<nc; j++){
                           aux2.push_back(voxel_zero);
                       }
                       aux1.push_back(aux2);
                   }
                   sculptor3d.push_back(aux1);
               }
              sculptor2d=sculptor3d[0];

               for(int i=0;i<nl;i++){
                       for(int j=0;j<nc; j++){
                           qDebug() << sculptor2d[i][j].isOn;
                       }
               }

               emit changeSlidersx(0,nc-1);
               emit changeSlidersy(0,nl-1);
               emit changeSlidersz(0,np-1);

               if(nc<nl && nc<nl){
                    emit changeSlidersR(0,nc-1);
               }
               if(nl<nc && nl<np){
                    emit changeSlidersR(0,nl-1);
               }
               if(np<nl && np<nc){
                    emit changeSlidersR(0,np-1);
               }

               emit changeSlidersPlanz(0,np);

               delete s;
               s = new Sculptor(nl,nc,np);
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
    if(nc!=0 && nl!=0 && np!=0){
    pIndex=current_plan;
    sculptor2d=sculptor3d[pIndex];
    repaint();
    }
}



