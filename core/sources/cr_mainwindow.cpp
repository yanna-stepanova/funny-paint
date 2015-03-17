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



