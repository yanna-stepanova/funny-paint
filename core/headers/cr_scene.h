#ifndef CR_SCENE_H
#define CR_SCENE_H
#include <QGraphicsItem>
#include "headers/cr_point_item.h"
#include <QGraphicsSceneMouseEvent>


class PaintScene : public QGraphicsItem
{
public:
    PaintScene();
    /*virtual*/QRectF boundingRect()const;
    /*virtual*/void paint(QPainter *_painter, const QStyleOptionGraphicsItem *_option, QWidget *_widget);
protected:
    /*virtual*/void mousePressEvent(QGraphicsSceneMouseEvent *_event);
    /*virtual*/void mouseMoveEvent(QGraphicsSceneMouseEvent *_event);
private:
    PointItem m_point;
};

#endif // CR_SCENE_H

