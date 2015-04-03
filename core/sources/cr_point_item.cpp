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
    _painter->save();
    _painter->setPen(QPen(Qt::red, 5, Qt::SolidLine));
    _painter->setBrush(this->brush());
    _painter->drawPoint(this->pos()); // рисуем в координатах, относительных для объекта. т.е. не в абсолютных
    _painter->restore();
}

void PointItem::mousePressEvent(QGraphicsSceneMouseEvent *_event)
{
/*    if ( _event->buttons() & Qt::LeftButton )
    {
        _event->accept();

        //setPoint(_event->pos());
        update();
    }*/
}

void PointItem::mouseMoveEvent(QGraphicsSceneMouseEvent *_event)
{

}
