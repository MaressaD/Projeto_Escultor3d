#include "color.h"
#include <QPainter>
#include <QBrush>
#include <QPen>

color::color(QWidget *parent)
    : QWidget{parent}
{
    r=g=b=255;
    a=255;
}

void color::paintEvent(QPaintEvent *event)
{
    QPainter painter(this);
    QBrush brush;
    QPen pen;

    //brush
    brush.setColor(QColor(r,g,b,a));
    brush.setStyle(Qt::SolidPattern);
    //caneta
    pen.setColor(QColor(0,0,0,255));
    pen.setWidth(2);

    painter.setBrush(brush);
    painter.setPen(pen);
    //fundo
    painter.drawRect(0,0,width(),height());
}

void color::setRed(int _r)
{
    r=_r;
    repaint();
}

void color::setGreen(int _g)
{
    g=_g;
    repaint();

}

void color::setBlue(int _b)
{
    b=_b;
    repaint();
}

void color::setAlpha(int _a)
{
    a=_a;
    repaint();
}
