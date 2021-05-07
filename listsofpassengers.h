#ifndef LISTSOFPASSENGERS_H
#define LISTSOFPASSENGERS_H

#include <QDialog>

namespace Ui {
class ListsofPassengers;
}

class ListsofPassengers : public QDialog
{
    Q_OBJECT

public:
    explicit ListsofPassengers(QWidget *parent = nullptr);
    ~ListsofPassengers();

private:
    Ui::ListsofPassengers *ui;
};

#endif // LISTSOFPASSENGERS_H
