#include "headers/cr_class_set.h"

SetPoints::SetPoints()
    : m_currentPoint (-1, -1)
{

}

SetPoints::~SetPoints()
{

}

void SetPoints::setPoint(const QPoint &_point)
{
    m_currentPoint = _point;
    if (!m_points.contains(_point))
        m_points.insert(_point);
}

void SetPoints::draw(QPainter *_painter)
{
    _painter->setPen(QPen(Qt::black, 1, Qt::SolidLine));

    Points::const_iterator it( m_points.begin() ), itEnd( m_points.end() );

    for ( ; it != itEnd; ++it )
        _painter->drawPoint(*it);
}
