#ifndef PLANESEATS_H
#define PLANESEATS_H

#include <QDialog>

namespace Ui {
class PlaneSeats;
}

class PlaneSeats : public QDialog
{
    Q_OBJECT

public:
    explicit PlaneSeats(QWidget *parent = nullptr);
    ~PlaneSeats();

private slots:
    void on_done_clicked();

private:
    Ui::PlaneSeats *ui;
};

#endif // PLANESEATS_H
