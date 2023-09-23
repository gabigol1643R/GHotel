#include "conexao.h"

Conexao::Conexao()
{
    bancoDeDados=QSqlDatabase::addDatabase("QSQLITE");
    bancoDeDados.setDatabaseName("/home/gabigol1012/qt/GHotel/banco.db");
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
