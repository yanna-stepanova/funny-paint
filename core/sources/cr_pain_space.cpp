#include "headers/cr_paint_space.h"
#include <iostream>

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
    m_points.insert(m_currentPoint);
    int x = m_currentPoint.x();
    int x2 = _point.x();
    int y = m_currentPoint.y();
    int y2 = _point.y();
    if ( y > y2 )
    {
        std::swap(y,y2);
        std::swap(x,x2);       
    }
    int deltaX = x2 - x;
    int deltaY = y2 - y;
    if( deltaX > 0 )//left to right
    {
        if( deltaX>deltaY )
            stepX(x, y, deltaX, deltaY, 1);
        else
            stepY(x, y, deltaX, deltaY, 1);
    }
    else // right to left
    {
        deltaX = -deltaX;
        if( deltaX > deltaY )
            stepX(x, y, deltaX, deltaY, -1);
        else
            stepY(x, y, deltaX, deltaY, -1);
    }
    m_currentPoint = _point;
}

void PaintSpace::stepX(int _x, int _y, int _deltaX, int _deltaY, int _xDirection)
{
    //_xDirection - направление движения
    int errorPoint = 2*_deltaY - _deltaX;
    int d1 = 2*_deltaY;
    int d2 = 2*(_deltaY - _deltaX);
    m_points.insert(QPoint(_x, _y));//?
    while( --_deltaX )
    {
        if(errorPoint >= 0)
        {
            ++_y;
            errorPoint += d2;
        }
        else
        {
            errorPoint += d1;
        }
        _x += _xDirection;
        m_points.insert(QPoint(_x, _y));
    }   
}

void PaintSpace::stepY(int _x, int _y, int _deltaX, int _deltaY, int _xDirection)
{
    //_xDirection - направление движения
    int errorPoint = _deltaX - 2*_deltaY;
    int d1 = 2*_deltaX;
    int d2 = 2*(_deltaX - _deltaY);
    m_points.insert(QPoint(_x, _y));
    while( --_deltaY )
    {
        if(errorPoint >= 0)
        {
            _x +=_xDirection;
            errorPoint += d2;
        }
        else
        {
            errorPoint += d1;
        }
        ++_y;
        m_points.insert(QPoint(_x, _y));
    }
}

void PaintSpace::draw(QPainter &_painter)
{
    _painter.setPen(QPen(Qt::black, 2, Qt::SolidLine));

    Points::const_iterator it( m_points.begin() ), itEnd( m_points.end() );

    for ( ; it != itEnd; ++it )
        _painter.drawPoint(*it);

}
