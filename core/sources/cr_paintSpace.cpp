#include "headers/cr_paintSpace.h"

PaintSpace::PaintSpace()
    : m_currentPoint (-1, -1)
{

}

PaintSpace::~PaintSpace()
{    
}

void PaintSpace::setPoint(const QPoint &_point)
{
    m_currentPoint = _point;
    if ( !m_points.contains(_point) )
        m_points.insert(_point);
}

void PaintSpace::setLine(const QPoint &_point)
{
    int x = m_currentPoint.x();
    int y = m_currentPoint.y();
    int deltaX = _point.x() - m_currentPoint.x() ;
    int deltaY = _point.y() - m_currentPoint.y();
    int d = 2 * deltaY - deltaX;
    int d1 = 2 * deltaY;
    int d2 = 2 *(deltaY - deltaX);
    m_points.insert(QPoint (x,y));//m_currentPoint
    for (x += 1; x <= _point.x(); ++x)
    {
        m_points.insert(QPoint(x,y));
        if (d <0)
            d += d1;
        else
        {
            d += d2;
            ++y;
        }
    }
    m_currentPoint = _point;
}

void PaintSpace::draw(QPainter &_painter)
{
    _painter.setPen(QPen(Qt::black, 2, Qt::SolidLine));

    Points::const_iterator it( m_points.begin() ), itEnd( m_points.end() );

    for ( ; it != itEnd; ++it )
        _painter.drawPoint(*it);

}
