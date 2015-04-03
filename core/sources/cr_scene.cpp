#include "headers/cr_scene.h"

PaintScene::PaintScene()
    //:PointItem(m_point)
{
    setPos(10,50);
}

QRectF PaintScene::boundingRect() const
{

}

void PaintScene::paint(QPainter *_painter, const QStyleOptionGraphicsItem *_option, QWidget *_widget)
{

}

void PaintScene::mousePressEvent(QGraphicsSceneMouseEvent *_event)
{
    if(_event->button() == Qt::LeftButton)
    {
     //  std::count << "Point Y.S."<< std::endl;
    }

}

void PaintScene::mouseMoveEvent(QGraphicsSceneMouseEvent *_event)
{

}
