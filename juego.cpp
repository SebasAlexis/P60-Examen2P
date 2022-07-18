#include "juego.h"
#include "ui_juego.h"

Juego::Juego(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::Juego)
{
    ui->setupUi(this);
    QPoint centro = ui->marco->geometry().center();
    m_circulo = new Circulo();
    m_circulo->setX(centro.x());
    m_circulo->setY(centro.y());

    lienzo=QPixmap(500,500);
    this->dibujar();

    ui->marco->setPixmap(lienzo);

}

Juego::~Juego()
{
    delete ui;
}

void Juego::paintEvent(QPaintEvent *event)
{
    ui->marco->setPixmap(lienzo);
    event->accept();
}


void Juego::on_btnArriba_released()
{
//    m_circulo->setPosY(m_circulo->getPosY()-5);
    m_circulo->subir();
    dibujar();
}


void Juego::on_btnAbajo_released()
{
    m_circulo->bajar();
    dibujar();
}


void Juego::on_btnIzqueirda_released()
{
    m_circulo->izquierda();
    dibujar();
}


void Juego::on_btnDerecha_released()
{
    m_circulo->derecha();
    dibujar();
}


void Juego::on_actionConfigraci0n_triggered()
{
    Configuracion *config = new Configuracion(this);
    int respuesta = config->exec();
    if (respuesta){
        qDebug() << config->color().name();
        qDebug() << config->dimension();
    }
}


void Juego::on_actionSalir_triggered()
{
    this->close();
}

void Juego::dibujar()
{
    lienzo.fill(Qt::white);
    QPainter painter(&lienzo);
    QPen pincel;
    pincel.setColor(Qt::black);
    pincel.setWidth(5);

    painter.setPen(pincel);
    painter.drawEllipse(m_circulo->getPosX(),m_circulo->getPosY()+10,100,100);
}

