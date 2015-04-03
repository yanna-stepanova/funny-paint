<<<<<<< HEAD
#include "headers/cr_mainwindow.h"
#include "ui_cr_mainwindow.h"



MainWindow::MainWindow()
    :   m_ui(new Ui::MainWindow)
{
    m_ui->setupUi(this);
    m_scene = new QGraphicsScene;
    setScene(m_scene);
    lineItem_ = new QGraphicsLineItem(0,0, 250,250);
//    m_point = new PointItem;
  //  m_scene->addItem(m_point);

  //  PaintScene *itemPoint = new PointItem ();
    //m_scene->addItem(itemPoint);

}

MainWindow::~MainWindow()
{
    delete m_ui;
}


 void MainWindow::mousePressEvent(QMouseEvent *_event)
{

    if ( _event->buttons() & Qt::LeftButton )
    {
         _event->accept();
        m_point = new PointItem;
        m_point->setPos(_event->pos());
        m_scene->addItem(m_point);
       // m_paintSpace.setPoint(_event->pos());

        update();
    }
}
/*
void MainWindow::mouseMoveEvent(QMouseEvent *_event)
{
    //просчитать все точки между m_current  и _event.pos() и записать их в set

    if ( _event->buttons() & Qt::LeftButton )
    {
        _event->accept();
        m_paintSpace.setLine(_event->pos());
        update();
    }
}

void MainWindow::paintEvent(QPaintEvent * /* event*/  /*)
{
    QPainter m_painter(this);
    m_paintSpace.draw(m_painter);

}

*/

=======
#include "headers/cr_mainwindow.h"
#include "ui_cr_mainwindow.h"
#include <QMouseEvent>


MainWindow::MainWindow(QWidget *_parent)
    : QMainWindow(_parent)
    , m_ui(new Ui::MainWindow)   
{
    m_ui->setupUi(this);

}

MainWindow::~MainWindow()
{
    delete m_ui;
}

void MainWindow::mousePressEvent(QMouseEvent *_event)
{

    if ( _event->buttons() & Qt::LeftButton )
    {
         _event->accept();
        m_paintSpace.setPoint(_event->pos());

        update();
    }
}

void MainWindow::mouseMoveEvent(QMouseEvent *_event)
{
    //просчитать все точки между m_current  и _event.pos() и записать их в set

    if ( _event->buttons() & Qt::LeftButton )
    {
        _event->accept();
        m_paintSpace.setLine(_event->pos());
        update();
    }
}

void MainWindow::paintEvent(QPaintEvent * /* event*/)
{
    QPainter m_painter(this);
    m_paintSpace.draw(m_painter);

}



>>>>>>> f597d05907c73b3f8c7fd2bf9a965464802a01ab
