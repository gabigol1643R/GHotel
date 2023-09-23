#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "fm_reserva.h"

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


void MainWindow::on_btn_reservar_clicked()
{
    fm_reserva f_reserva;
    f_reserva.exec();
}

