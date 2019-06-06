#include "Particula.h"

#include "Particula.h"

Particula::Particula(float x, float y, float velx, float vely, float r) : QGraphicsItem()  //Un constructor por defecto, que invoca al constructor de la clase base
{

    vx = velx;
    vy = vely;
    rad = r;
    px = x;
    py = y;
}

Particula::~Particula()
{

}

QRectF Particula::boundingRect() const
{
    return QRectF(-1*rad,-1*rad,2*rad,2*rad);
}

void Particula::paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget)
{
        painter->setBrush(Qt::red);
        painter->drawEllipse(boundingRect());
}


void Particula::moverParticula(float dt, float vertlim)
{
    px += vx*dt;
    py += vy*dt;

    setPos(px, vertlim-py);
}

void Particula::colisionParticula(float horzlim, float vertlim)
{

    if((px < rad) || (px > horzlim - rad))
        vx = -1*vx;


    if((py < rad) || (py > vertlim - rad))
        vy = -1*vy;
}

