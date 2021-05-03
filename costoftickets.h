#ifndef COSTOFTICKETS_H
#define COSTOFTICKETS_H

#include <QDialog>

namespace Ui {
class costoftickets;
}

class costoftickets : public QDialog
{
    Q_OBJECT

public:
    explicit costoftickets(QWidget *parent = nullptr);
    ~costoftickets();

private slots:
    void on_pushButton_2_clicked();

private:
    Ui::costoftickets *ui;
};

#endif // COSTOFTICKETS_H
