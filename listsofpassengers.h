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

private slots:
    void on_backtoadmin_clicked();

    void on_toaddnewpassenger_clicked();

    void on_editpassenger_clicked();

private:
    Ui::ListsofPassengers *ui;
};

#endif // LISTSOFPASSENGERS_H
