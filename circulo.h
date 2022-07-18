#ifndef CIRCULO_H
#define CIRCULO_H

#include <QPoint>
#include <QPainter>
#include <QPen>

class Circulo : public QPoint
{
private:
    int posX;
    int posY;
    int tam;

public:
    Circulo();
    Circulo(int xpos, int ypos);

    void subir();
    void bajar();
    void izquierda();
    void derecha();

    int getPosX() const;
    void setPosX(int value);

    int getPosY() const;
    void setPosY(int value);

    int getTam() const;
    void setTam(int value);

};

#endif // CIRCULO_H
