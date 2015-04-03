#ifndef CR_POINT_ITEM_H
#define CR_POINT_ITEM_H
#include <QAbstractGraphicsShapeItem>
#include <QGraphicsSceneMouseEvent>
#include <QPainter>

class PointItem : public QAbstractGraphicsShapeItem
{
public:
    PointItem();
    /*virtual*/ QRectF boundingRect() const; // возвращает прямоугольную область, в кот. вписывается точка

    /*virtual*/void paint(QPainter *_painter, const QStyleOptionGraphicsItem *_option, QWidget *_widget);
protected:
    /*virtual*/void mousePressEvent(QGraphicsSceneMouseEvent *_event);
    /*virtual*/void mouseMoveEvent(QGraphicsSceneMouseEvent *_event);
};

#endif // CR_POINT_ITEM_H

