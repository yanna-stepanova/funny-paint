#include "headers/cr_point_item.h"




PointItem::PointItem()    
{

}

QRectF PointItem::boundingRect() const
{
    qreal penHalfWidth = this->pen().widthF() / 2;
    return QRectF(  -penHalfWidth, -penHalfWidth,
                    penHalfWidth, penHalfWidth);
}

void PointItem::paint(QPainter *_painter, const QStyleOptionGraphicsItem *_option, QWidget *_widget)
{

    _painter->setPen(QPen(Qt::red, 8, Qt::SolidLine));
    _painter->setBrush(this->brush());
    _painter->drawPoint(current_point);


}

void PointItem::setPos(const QPointF &_pos)
{
    current_point = _pos;
}

QPointF PointItem::getPoint()
{
    return current_point;
}



