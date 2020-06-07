#include "card.h"
#include <QPainter>
#include <QGraphicsScene>
#include <QImage>
#include <QPixmap>


Card::Card()
{
    pic = new QPixmap(":/images/back.jpg");
}
QRectF Card::boundingRect() const
{//0,0 is current position, which is upper left corner
    return QRectF(0,0,73, 100);
}

//width: 73, height: 97
void Card::paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget)
{
    QRect sourceRectangle(x, y, 73, 100);

    painter->drawPixmap(sourceRectangle, *pic);

}

void Card::advance(int phase)
{

}

void Card::set(int new_x, int new_y)
{
    x = new_x;
    y = new_y;
}
