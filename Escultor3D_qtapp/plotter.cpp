#include "plotter.h"
#include <QPainter>
#include <QBrush>
#include <QPen>

Plotter::Plotter(QWidget *parent)
    : QWidget{parent}
{

}

void Plotter::paintEvent(QPaintEvent *event)
{
    QPainter painter(this);
    QBrush brush;
    QPen pen;
    int a;
    int b=20;
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

    for(a=1;a<=b;a++){
    painter.drawLine(0,a*height()/b,width(),a*height()/b);
    }

    for(a=1;a<=b;a++){
    painter.drawLine(a*width()/b,0,a*width()/b,height());
    }
}
