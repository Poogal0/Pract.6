#include "mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
{
    setWindowTitle("Simple Qt App");

    label1 = new QLabel(this);
    label2 = new QLabel(this);

    value1 = 42;
    value2 = 1337;

    label1->setText("Value 1: " + QString::number(value1));
    label1->setGeometry(50, 50, 150, 30);

    label2->setText("Value 2: " + QString::number(value2));
    label2->setGeometry(50, 90, 150, 30);

    resize(250, 150);
}