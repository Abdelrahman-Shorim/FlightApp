#ifndef FLIGHTREJECTED_H
#define FLIGHTREJECTED_H

#include <QDialog>

namespace Ui {
class flightrejected;
}

class flightrejected : public QDialog
{
    Q_OBJECT

public:
    explicit flightrejected(QWidget *parent = nullptr);
    ~flightrejected();

private:
    Ui::flightrejected *ui;
};

#endif // FLIGHTREJECTED_H
