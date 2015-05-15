#ifndef CR_GRAPHICS_VIEW_H
#define CR_GRAPHICS_VIEW_H

#include <QMouseEvent>
#include <QGraphicsView>

#include "headers/cr_singleton.h"

class GraphicsView
        :   public QGraphicsView
{
public:

    GraphicsView( QWidget * _parent =0 );
    /*virtual*/ void mousePressEvent(QMouseEvent *_event);
    /*virtual*/ void mouseMoveEvent(QMouseEvent *_event);


private:
    Singleton* m_singleton;
};

#endif // CR_GRAPHICS_VIEW_H

