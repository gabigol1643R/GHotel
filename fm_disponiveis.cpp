#include "fm_disponiveis.h"
#include "ui_fm_disponiveis.h"
#include <QMessageBox>
#include <QLabel>

fm_disponiveis::fm_disponiveis(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::fm_disponiveis)
{
    ui->setupUi(this);

    if(!con.abrir()){
        QMessageBox::warning(this,"ERRO","Não foi possível abrir o banco de dados");
    }

    QSqlQuery query;
    query.prepare("select id_quarto,status from reserva");
    if(query.exec()){
        while(query.next()){
            QString lbname="label"+query.value(0).toString();
            QLabel *ptr=this->findChild<QLabel*>(lbname);
            if(ptr){
                ptr->setStyleSheet("QLabel {background-color:red;color:black;}");
            }
        }
    }
}

fm_disponiveis::~fm_disponiveis()
{
    delete ui;
}
