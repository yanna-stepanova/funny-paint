#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "headers/cr_paintSpace.h"

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
