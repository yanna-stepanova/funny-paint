#include "headers/cr_mainwindow.h"
#include "ui_cr_mainwindow.h"



MainWindow::MainWindow()
    :   m_ui(new Ui::MainWindow)
{
    m_ui->setupUi(this);
    m_scene = new QGraphicsScene(this);
    setScene(m_scene);


}

MainWindow::~MainWindow()
{
    delete m_ui;
}


void MainWindow::mousePressEvent(QMouseEvent *_event)
{

    if ( _event->button() == Qt::LeftButton )
    {
        _event->accept();

        m_point = new PointItem ();
        m_point->setPos(this->mapToScene( this->mapFromGlobal(_event->globalPos())));// преобразовываем координаты в систему вида
        m_scene->addItem(m_point);
        m_line = new QGraphicsLineItem();
        m_scene->addLine( QLineF(m_point->getPoint(), m_point->getPoint()), QPen (Qt::black,6) );



        update();


    }

}

void MainWindow::mouseMoveEvent(QMouseEvent *_event)
{
    if ( _event->buttons() & Qt::LeftButton )
    {
        _event->accept();
        m_line = new QGraphicsLineItem();

        m_scene->addLine( QLineF(m_point->getPoint(),this->mapToScene( this->mapFromGlobal(_event->globalPos()) ) ), QPen (Qt::blue,6) );
        m_point->setPos(this->mapToScene( this->mapFromGlobal(_event->globalPos())));
        update();
    }
}

void MainWindow::mouseReleaseEvent(QMouseEvent *_event)
{

}

/*void MainWindow::paintEvent(QPaintEvent * /* event*/  /*)
{
    QPainter m_painter(this);
    m_paintSpace.draw(m_painter);

}

*/

