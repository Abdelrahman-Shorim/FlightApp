#ifndef VISAPAYMENT_H
#define VISAPAYMENT_H

#include <QDialog>

namespace Ui {
class VisaPayment;
}

class VisaPayment : public QDialog
{
    Q_OBJECT

public:
    explicit VisaPayment(QWidget *parent = nullptr);
    ~VisaPayment();

private slots:
    void on_toreceit_clicked();

    void on_backtocostofticket_clicked();

private:
    Ui::VisaPayment *ui;
};

#endif // VISAPAYMENT_H
