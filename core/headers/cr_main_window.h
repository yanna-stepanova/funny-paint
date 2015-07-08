#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QFrame>
#include "headers/cr_singleton.h"

namespace Ui {
class MainWindow;
}

class MainWindow : public QFrame
{
    Q_OBJECT
public:
    explicit MainWindow(QWidget *parent = 0);
    virtual ~MainWindow();

signals:

public slots:

protected:



private slots:

    void on_pbClear_clicked();

    void on_pbStraightLine_clicked();

    void on_pbPencil_clicked();

private:
    Ui::MainWindow *m_ui;
    Singleton* m_singleton;
};

#endif // MAINWINDOW_H
