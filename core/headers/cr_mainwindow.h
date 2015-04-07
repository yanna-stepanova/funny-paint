#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QGraphicsView>
#include <QMouseEvent>

#include <QGraphicsScene>
#include <QGraphicsLineItem>
#include <QGraphicsItem>

#include "headers/cr_point_item.h"



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
    /*virtual*/ void mouseMoveEvent(QMouseEvent *_event);


private:
    Ui::MainWindow *m_ui;
    QGraphicsScene *m_scene;
    QGraphicsLineItem *m_line;   
    PointItem *m_point;
};

#endif // MAINWINDOW_H
