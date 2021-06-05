#ifndef EDITDELETERESERVATION_H
#define EDITDELETERESERVATION_H

#include <QDialog>

namespace Ui {
class editdeletereservation;
}

class editdeletereservation : public QDialog
{
    Q_OBJECT

public:
    explicit editdeletereservation(QWidget *parent = nullptr);
    ~editdeletereservation();

private:
    Ui::editdeletereservation *ui;
};

#endif // EDITDELETERESERVATION_H
