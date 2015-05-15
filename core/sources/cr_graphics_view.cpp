#include "headers/cr_graphics_view.h"

GraphicsView::GraphicsView( QWidget * _parent )
    :   QGraphicsView( _parent )
{
    setScene(m_singleton->getInstance()->getScene());
}

void GraphicsView::mousePressEvent(QMouseEvent *_event)
{
    if ( _event->button() == Qt::LeftButton )
    {

        _event->accept();
        m_singleton->getInstance()->setPoint(mapToScene(mapFromGlobal(_event->globalPos())));
        /* m_point = new PointItem ();
           m_point->setPos( mapToScene(mapFromGlobal(_event->globalPos())));// преобразовываем координаты в систему вида
           m_scene->addItem(m_point);
           m_scene->update();*/
    }
}

void GraphicsView::mouseMoveEvent(QMouseEvent *_event)
{
    if (_event->buttons() & Qt::LeftButton )
    {
        _event->accept();
        m_singleton->getInstance()->setLineItem( mapToScene(mapFromGlobal(_event->globalPos())) );
    }
}
