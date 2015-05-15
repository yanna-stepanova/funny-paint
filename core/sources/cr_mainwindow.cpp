#include "headers/cr_mainwindow.h"
#include "ui_cr_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    :   QFrame(parent)
      , m_ui(new Ui::MainWindow)
{
    m_ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete m_ui;
}

void MainWindow::on_pbClear_clicked()
{
    m_singleton->getInstance()->getScene()->clear();
    m_singleton->getInstance()->getScene()->update();
}

void MainWindow::on_pbStraightLine_clicked()
{


}

void MainWindow::on_pbPencil_clicked()
{

}
