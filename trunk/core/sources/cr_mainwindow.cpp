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
    _event->accept();
    if ( _event->buttons() & Qt::LeftButton )
    {
       // m_currentPoint = _event->pos();
        m_setPoints.setPoint(_event->pos());
        update();
    }
}

void MainWindow::mouseMoveEvent(QMouseEvent *_event)
{
    //просчитать все точки между m_current  и _event.pos() и записать их в set

    if ( _event->buttons() & Qt::LeftButton )
    {
        _event->accept();
        m_setPoints.setPoint(_event->pos());
        update();
    }
}

/*void MainWindow::setPoint(const QPoint &_point)
{
    if (!m_points.contains(_point))
        m_points.insert(_point);
}*/


void MainWindow::paintEvent(QPaintEvent * /* event*/)
{
    QPainter m_painter(this);
    m_setPoints.draw(&m_painter);
}



