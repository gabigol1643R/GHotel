#include "fm_checkout.h"
#include "ui_fm_checkout.h"
#include <QMessageBox>

fm_checkout::fm_checkout(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::fm_checkout)
{
    ui->setupUi(this);

    ui->cb_quartos->addItem("101");
    ui->cb_quartos->addItem("102");
    ui->cb_quartos->addItem("103");
    ui->cb_quartos->addItem("104");
    ui->cb_quartos->addItem("105");

    if(!con.abrir()){
        QMessageBox::warning(this,"ERRO","Erro ao abrir banco de dados");
    }
}

fm_checkout::~fm_checkout()
{
    delete ui;
    con.fechar();
}

void fm_checkout::on_buttonBox_accepted()
{
    QString quarto=ui->cb_quartos->currentText();
    QSqlQuery query;
    query.prepare("delete from reserva where id_quarto="+quarto+"");
    if(query.exec()){
        QMessageBox::information(this,"Sucesso","Check-out concluído com sucesso, volte sempre !");
    }else{
        QMessageBox::warning(this,"Erro","Não foi possível realizar o check-out");
    }
}

