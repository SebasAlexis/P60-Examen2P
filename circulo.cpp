#include "circulo.h"

Circulo::Circulo()
    :QPoint(0,0)
{
    posX=200;
    posY=190;
    tam=50;
}

Circulo::Circulo(int xpos, int ypos)
    :QPoint(xpos, ypos)
{
    this->posX=xpos;
    this->posY=ypos;
}

void Circulo::subir()
{
    //    posX-=5;izquierda
        //posX+=5;derecha
    posY-=5;
}

void Circulo::bajar()
{
    posY+=5;
}

void Circulo::izquierda()
{
    posX-=5;
}

void Circulo::derecha()
{
    posX+=5;
}

int Circulo::getPosX() const
{
    return posX;
}

void Circulo::setPosX(int value)
{
    posX = value;
}

int Circulo::getPosY() const
{
    return posY;
}

void Circulo::setPosY(int value)
{
    posY = value;
}

int Circulo::getTam() const
{
    return tam;
}

void Circulo::setTam(int value)
{
    tam = value;
}

