<<<<<<< HEAD
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
=======
#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "headers/cr_paint_space.h"

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT
public:
    explicit MainWindow(QWidget *_parent = 0);
    virtual ~MainWindow();

signals:

public slots:

protected:
    /*virtual*/ void mousePressEvent(QMouseEvent *_event);
    /*virtual*/ void mouseMoveEvent(QMouseEvent *_event);
    /*virtual*/ void paintEvent(QPaintEvent * /*event*/);

private:
    Ui::MainWindow *m_ui;
    PaintSpace m_paintSpace;
};

#endif // MAINWINDOW_H
>>>>>>> f597d05907c73b3f8c7fd2bf9a965464802a01ab
