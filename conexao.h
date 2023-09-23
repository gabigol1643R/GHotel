#ifndef CONEXAO_H
#define CONEXAO_H

#include <QtSql>

class Conexao
{
public:
    Conexao();
    bool abrir();
    void fechar();
private:
    QSqlDatabase bancoDeDados;
};

#endif // CONEXAO_H
