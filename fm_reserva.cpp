#include "fm_reserva.h"
#include "ui_fm_reserva.h"
#include <QMessageBox>

fm_reserva::fm_reserva(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::fm_reserva)
{
    ui->setupUi(this);


    if(!con.abrir()){
        QMessageBox::warning(this,"ERRO","Erro ao abrir banco de dados");
    }

    ui->cb_quartos->addItem("101");
    ui->cb_quartos->addItem("102");
    ui->cb_quartos->addItem("103");
    ui->cb_quartos->addItem("104");
    ui->cb_quartos->addItem("105");
}

fm_reserva::~fm_reserva()
{
    delete ui;
    con.fechar();
}

void fm_reserva::on_buttonBox_accepted()
{
    QString quarto=ui->cb_quartos->currentText();
    QString nome=ui->le_nome->text();
    QString fone=ui->le_fone->text();
    QString endereco=ui->le_endereco->text();

    QSqlQuery query;
    query.prepare("insert into reserva values ("+quarto+",'"+nome+"','"+fone+"','"+endereco+"','reservado')");
    if(query.exec()){
        QMessageBox::information(this,"Sucesso","Quarto reservado com sucesso");
    }else{
        QMessageBox::warning(this,"Erro","Não foi possível reservar esse quarto");
    }
}

