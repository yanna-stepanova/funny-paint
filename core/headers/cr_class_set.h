#ifndef CR_CLASS_SET
#define CR_CLASS_SET

#include <QSet>
#include <QPoint>
#include <QPainter>
#include "headers/cr_hash.h"

class SetPoints
{
public:
    SetPoints();
    ~SetPoints();
    void setPoint(const QPoint &_point);
    void draw (QPainter *_painter);

private:
    typedef
    QSet<QPoint>
    Points;
    Points m_points;
    QPoint m_currentPoint;
};

#endif // CR_CLASS_SET

