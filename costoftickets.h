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

private:
    Ui::costoftickets *ui;
};

#endif // COSTOFTICKETS_H
