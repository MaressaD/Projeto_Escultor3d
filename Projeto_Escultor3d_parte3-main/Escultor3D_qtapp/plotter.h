#ifndef PLOTTER_H
#define PLOTTER_H

#include "sculptor.h"
#include <QWidget>
#include <vector>
#include <QColor>
#include <QString>


using namespace std;
class Plotter : public QWidget
{
    Q_OBJECT
private:
    Sculptor *s;
    QString method;
    QColor palette;
    vector<vector<vector<Voxel>>> sculptor3d;
    vector<vector<Voxel>> sculptor2d;

    int red,green,blue,alpha;

    //posição indexada do mouse no momento do click
    int xIndex,yIndex,zIndex;
    //grade dimensions
    int x,y,z;
    /**x: number of lines,
     * y:number of columns,
     * z: number of planes**/
    //spacing betwen columns, lines and planes.
    double dx, dy;
    //radius sphere dimensions
    int r;
    //radius ellipsoid dimensions
    int rx,ry,rz;
    //box dimensions
    int dimx,dimy,dimz;

    bool gridLimit(int xc,int yc,int zc);
    void putVoxelGrid(Voxel &v);
    void cutVoxelGrid(Voxel &v);
public:
    explicit Plotter(QWidget *parent = nullptr);
    void paintEvent(QPaintEvent *event);
    void mousePressEvent(QMouseEvent *event);
signals:

public slots:
    void setX(int _x);
    void setY(int _y);
    void buildGrid();
    void setR(int _r);
    void setRx(int _rx);
    void setRy(int _ry);
    void setRz(int _rz);
    void setDimx(int _dimx);
    void setDimy(int _dimy);
    void setDimz(int _dimz);
    void setColor(QColor coloring);
    void setRedGrid(int _r);
    void setGreenGrid(int _g);
    void setBlueGrid(int _b);
    void setAlphaGrid(int _a);
    void setMethod(QString m);
};

#endif // PLOTTER_H
