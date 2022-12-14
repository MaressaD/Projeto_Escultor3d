#include "plotter.h"
#include <QPainter>
#include <QBrush>
#include <QPen>

Plotter::Plotter(QWidget *parent)
    : QWidget{parent}
{
    x=10;
    y=10;
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

    for(i=1;i<=x;i++){
    painter.drawLine(0,i*height()/x,width(),i*height()/x);
    }

    for(j=1;j<=y;j++){
    painter.drawLine(j*width()/y,0,j*width()/y,height());
    }
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
