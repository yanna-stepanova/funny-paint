<<<<<<< HEAD
#ifndef CR_CLASS_SET
#define CR_CLASS_SET

#include <QSet>
#include <QPointF>
#include <QPainter>
#include "headers/cr_hash.h"

class PaintSpace
{
public:
    PaintSpace();
    ~PaintSpace();
    void setPoint(const QPoint &_point);
    void setLine(const QPoint &_point);
    void draw(QPainter &_painter);
    void stepX(int _x, int _y, int _deltaX, int _deltaY, int _xDirection);
    void stepY(int _x, int _y, int _deltaX, int _deltaY, int _xDirection);

private:
    typedef
    QSet<QPoint> Points;
    Points m_points;
    QPoint m_currentPoint;
};

#endif // CR_CLASS_SET

=======
#ifndef CR_CLASS_SET
#define CR_CLASS_SET

#include <QSet>
#include <QPointF>
#include <QPainter>
#include "headers/cr_hash.h"

class PaintSpace
{
public:
    PaintSpace();
    ~PaintSpace();
    void setPoint(const QPoint &_point);
    void setLine(const QPoint &_point);
    void draw(QPainter &_painter);
    void stepX(int _x, int _y, int _deltaX, int _deltaY, int _xDirection);
    void stepY(int _x, int _y, int _deltaX, int _deltaY, int _xDirection);

private:
    typedef
    QSet<QPoint>
    Points;
    Points m_points;
    QPoint m_currentPoint;
};

#endif // CR_CLASS_SET

>>>>>>> f597d05907c73b3f8c7fd2bf9a965464802a01ab
