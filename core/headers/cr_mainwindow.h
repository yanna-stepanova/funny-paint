#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QtGui>
#include <QtCore>

namespace Ui {
    class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT
 public:
    explicit MainWindow(QWidget *_parent = 0);
    virtual ~MainWindow();
    void setPoint(const QPoint &_point);

 signals:

 public slots:

 protected:
    /*virtual*/ void mousePressEvent(QMouseEvent *_event);
    /*virtual*/ void mouseMoveEvent(QMouseEvent *_event);
    /*virtual*/ void paintEvent(QPaintEvent * /*event*/);

private:
   Ui::MainWindow *ui;
   QSet<QPoint> *m_points;
   QSet<QPoint>::const_iterator m_iter;
};

#endif // MAINWINDOW_H
