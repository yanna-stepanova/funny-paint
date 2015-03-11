#include "headers/cr_mainwindow.h"
#include "ui_cr_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
  : QMainWindow(parent)
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
  if ( _event->button() ==  Qt::LeftButton )
  {
      m_x = _event->x();
      m_y = _event->y();
   }
}

void MainWindow::mouseMoveEvent(QMouseEvent *_event)
{
  _event->accept();
  if ( _event->button() ==  Qt::LeftButton )
  {
   //   QPainter painter(this);
   //   painter.drawLine( m_x, m_y, _event->x(), _event->y() );
      m_x = _event->x();
      m_y = _event->y();
  }
}

void MainWindow::draw(QPainter *_painter)
{
    _painter->setPen(QPen(Qt::red, 3, Qt::SolidLine));
    _painter->drawPoint(m_x,m_y);
}

void MainWindow::paintEvent(QPainter *_event)
{
    QPainter m_painter(this);
    m_painter.setPen(QPen(Qt::green, 3, Qt::SolidLine));
   // m_painter.drawPoint(m_x,m_y);
    draw(&m_painter);
}