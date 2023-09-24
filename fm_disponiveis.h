#ifndef FM_DISPONIVEIS_H
#define FM_DISPONIVEIS_H

#include <QDialog>
#include "conexao.h"

namespace Ui {
class fm_disponiveis;
}

class fm_disponiveis : public QDialog
{
    Q_OBJECT

public:
    explicit fm_disponiveis(QWidget *parent = nullptr);
    ~fm_disponiveis();

private:
    Ui::fm_disponiveis *ui;
    Conexao con;
};

#endif // FM_DISPONIVEIS_H
