#ifndef CR_SINGLETON_H
#define CR_SINGLETON_H

#include "headers/cr_point_item.h"
#include <QGraphicsScene>
#include <QGraphicsLineItem>


class Singleton
{
public:
        static Singleton* getInstance();
        QGraphicsScene* getScene();
        void setPoint( QPointF _point);
        void setLineItem( QPointF _point);

private:
        Singleton();
        Singleton(const Singleton& );
        Singleton& operator=(const Singleton&);
private:
        static Singleton* uniqueInstance;
        QGraphicsScene* m_scene;
        QGraphicsLineItem* m_lineItem;
        PointItem* m_point;
};
#endif // CR_SINGLETON_H

