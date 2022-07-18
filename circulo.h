#ifndef CIRCULO_H
#define CIRCULO_H

#include <QPoint>
#include <QPainter>
#include <QPen>

class Circulo : public QPoint
{
public:
    Circulo();
    Circulo(int xpos, int ypos);
    int xpos(int x);
    int ypos(int y);

    int getArriba(int valor);
    int getAbajo(int valor);
    int getIzq(int valor);
    int getDer(int valor);
};

#endif // CIRCULO_H
