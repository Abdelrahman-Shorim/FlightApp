#ifndef PAYMENTSUCCESSFUL_H
#define PAYMENTSUCCESSFUL_H

#include <QDialog>

namespace Ui {
class Paymentsuccessful;
}

class Paymentsuccessful : public QDialog
{
    Q_OBJECT

public:
    explicit Paymentsuccessful(QWidget *parent = nullptr);
    ~Paymentsuccessful();

private:
    Ui::Paymentsuccessful *ui;
};

#endif // PAYMENTSUCCESSFUL_H
