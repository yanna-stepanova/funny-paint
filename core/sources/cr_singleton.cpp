#include "headers/cr_singleton.h"

Singleton* Singleton::uniqueInstance  = 0;

Singleton::Singleton()
{
     m_scene = new QGraphicsScene();
}

Singleton* Singleton::getInstance()
{
    if( uniqueInstance )
        return uniqueInstance;

    return uniqueInstance = new Singleton(), uniqueInstance; // благодаря оператору "," вернется последний аргумент uniqueInstance и его примет return, а также выполнится оптимизация "ретурнэкспреш"
}

QGraphicsScene* Singleton::getScene()
{
    return m_scene;
}

void Singleton::setPoint(QPointF _point )
{
    m_point = new PointItem ();
    m_point->setPos( _point );
    m_scene->addItem( m_point );
    m_scene->update();
}

void Singleton::setLineItem(QPointF _point )
{
    m_lineItem = new QGraphicsLineItem();
    QLineF m_line = QLineF ( m_point->getPoint(), _point );
    m_lineItem->setLine(m_line);
    m_lineItem->setPen(QPen (Qt::blue,5));
    m_scene->addLine(m_lineItem->line(), m_lineItem->pen());
    m_point->setPos( _point );
    m_scene->update();
}
