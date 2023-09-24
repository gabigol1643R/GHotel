#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "fm_reserva.h"
#include "fm_checkout.h"
#include "fm_disponiveis.h"

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


void MainWindow::on_btn_checkout_clicked()
{
    fm_checkout f_checkout;
    f_checkout.exec();
}


void MainWindow::on_btn_disponiveis_clicked()
{
    fm_disponiveis f_disponiveis;
    f_disponiveis.exec();
}

