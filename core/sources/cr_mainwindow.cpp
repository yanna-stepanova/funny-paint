#include "headers/cr_mainwindow.h"
#include "ui_cr_mainwindow.h"

MainWindow::MainWindow(QWidget *_parent)
  : QMainWindow(_parent)
  , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::mousePressEvent(QMouseEvent *_event)
{
    _event->accept();
    if ( _event->buttons() & Qt::LeftButton )
    {        
        setPoint(_event->pos());
     /*   m_x = _event->x();
        m_y = _event->y();
        update();
      */
    }
}

void MainWindow::mouseMoveEvent(QMouseEvent *_event)
{
  _event->accept();
  if ( _event->buttons() & Qt::LeftButton )
  {     
      setPoint(_event->pos());
    /*  m_x = _event->x();
      m_y = _event->y();
      update();
    */
  }
}

void MainWindow::setPoint(const QPoint &_point)
{
    if (!m_points->contains(_point))
    {
        m_points->insert(_point);
    }
}


void MainWindow::paintEvent(QPaintEvent * /* event*/)
{
    QPainter m_painter(this);
    m_painter.setPen(QPen(Qt::black, 10, Qt::SolidLine));
    for (m_iter = m_points->begin(); m_iter != m_points->end(); ++m_iter)
      {
        m_painter.drawPoint(*m_iter);

       }

}
