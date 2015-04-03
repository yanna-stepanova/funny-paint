#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QGraphicsView>
//#include "headers/cr_scene.h"
#include "headers/cr_point_item.h"
#include "headers/cr_paint_space.h"
#include <QMouseEvent>
#include <QGraphicsScene>
#include <QGraphicsLineItem>

namespace Ui {
class MainWindow;
}

class MainWindow : public QGraphicsView
{
    Q_OBJECT
public:
    explicit MainWindow();
    virtual ~MainWindow();

signals:

public slots:

protected:
    /*virtual*/ void mousePressEvent(QMouseEvent *_event);
//    /*virtual*/ void mouseMoveEvent(QMouseEvent *_event);
//    /*virtual*/ void paintEvent(QPaintEvent * /*event*/);

private:
    Ui::MainWindow *m_ui;
    QGraphicsScene *m_scene;
    PaintSpace m_paintSpace;
    PointItem *m_point;
    QGraphicsLineItem * lineItem_;
};

#endif // MAINWINDOW_H
