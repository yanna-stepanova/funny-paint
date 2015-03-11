#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QtGui>

namespace Ui {
    class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT
 public:
    explicit MainWindow(QWidget *parent = 0);
    virtual ~MainWindow();
    void draw(QPainter *_painter);


 signals:

 public slots:

 private:
    Ui::MainWindow *ui;
    int m_x,m_y;

 protected:
    void mousePressEvent(QMouseEvent *_event);
    void mouseMoveEvent(QMouseEvent *_event);
    void paintEvent(QPainter *_event);
};

#endif // MAINWINDOW_H
