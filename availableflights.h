#ifndef AVAILABLEFLIGHTS_H
#define AVAILABLEFLIGHTS_H

#include <QDialog>

namespace Ui {
class availableflights;
}

class availableflights : public QDialog
{
    Q_OBJECT

public:
    explicit availableflights(QWidget *parent = nullptr);
    ~availableflights();


private:
    Ui::availableflights *ui;
};

#endif // AVAILABLEFLIGHTS_H
