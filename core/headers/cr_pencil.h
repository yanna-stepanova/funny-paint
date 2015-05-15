#ifndef CR_PENCIL_H
#define CR_PENCIL_H

#include "headers/cr_point_item.h"
#include <QGraphicsLineItem>

class Pencil
{
public:
    Pencil();
    void setPoint( QPointF _point);
    void setLineItem( QPointF _point);
private:
    QGraphicsLineItem* m_lineItem;
    PointItem* m_point;

};

#endif // CR_PENCIL_H

