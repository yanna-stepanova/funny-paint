#include "headers/cr_pencil.h"



Pencil::Pencil()
{

}

void Pencil::setPoint(QPointF _point)
{
    m_point = new PointItem ();
    m_point->setPos( _point );
}

void Pencil::setLineItem(QPointF _point)
{
    m_lineItem = new QGraphicsLineItem();
    QLineF m_line = QLineF ( m_point->getPoint(), _point );
    m_lineItem->setLine(m_line);
    m_lineItem->setPen(QPen (Qt::blue,5));

    m_point->setPos( _point );
}
