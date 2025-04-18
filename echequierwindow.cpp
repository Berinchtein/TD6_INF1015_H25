#include "echequierwindow.hpp"
#include "./ui_echequierwindow.h"

EchequierWindow::EchequierWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::EchequierWindow)
{
    ui->setupUi(this);
}

EchequierWindow::~EchequierWindow()
{
    delete ui;
}
