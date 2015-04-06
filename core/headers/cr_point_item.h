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
    void setPos(const QPointF &_pos);
    QPointF getPoint();
private:
    QPointF current_point;
};

#endif // CR_POINT_ITEM_H

