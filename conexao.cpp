#include "conexao.h"
#include <QDir>

Conexao::Conexao()
{
    bancoDeDados=QSqlDatabase::addDatabase("QSQLITE");
    bancoDeDados.setDatabaseName(QDir::homePath()+"/qt/GHotel/banco.db");
}

bool Conexao::abrir(){
    if(bancoDeDados.open()){
        return true;
    }else{
        return false;
    }
}

void Conexao::fechar(){
    bancoDeDados.close();
}
