#ifndef PARTICULA_H
#define PARTICULA_H

#include <QGraphicsItem>
#include <QPainter>

class Particula : public QGraphicsItem
{
public:
    Particula(float x, float y, float velx, float vely, float r);
    ~Particula();
    void moverParticula(float dt, float vertlim);
    void colisionParticula(float horzlim, float vertlim);

protected:


    float vx;
    float vy;
    float rad;
    float px;
    float py;

    QRectF boundingRect() const;

    void paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget); //Se implementa para dar formato a la figura
};

#endif // PARTICULA_H
