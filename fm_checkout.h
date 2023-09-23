#ifndef FM_CHECKOUT_H
#define FM_CHECKOUT_H

#include <QDialog>
#include "conexao.h"

namespace Ui {
class fm_checkout;
}

class fm_checkout : public QDialog
{
    Q_OBJECT

public:
    explicit fm_checkout(QWidget *parent = nullptr);
    ~fm_checkout();

private slots:
    void on_buttonBox_accepted();

private:
    Ui::fm_checkout *ui;
    Conexao con;
};

#endif // FM_CHECKOUT_H
