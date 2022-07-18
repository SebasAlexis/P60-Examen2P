/*
 * Examen 2P
 * Alexis Lomas
 * 1751412881
 */


#include "juego.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    Juego w;
    w.show();
    return a.exec();
}
