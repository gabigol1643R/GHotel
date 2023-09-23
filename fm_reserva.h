#ifndef FM_RESERVA_H
#define FM_RESERVA_H

#include <QDialog>

namespace Ui {
class fm_reserva;
}
#include "conexao.h"

class fm_reserva : public QDialog
{
    Q_OBJECT

public:
    explicit fm_reserva(QWidget *parent = nullptr);
    ~fm_reserva();

private slots:
    void on_buttonBox_accepted();

private:
    Ui::fm_reserva *ui;
    Conexao con;
};

#endif // FM_RESERVA_H
