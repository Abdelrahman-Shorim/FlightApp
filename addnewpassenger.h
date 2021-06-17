#ifndef ADDNEWPASSENGER_H
#define ADDNEWPASSENGER_H

#include <QDialog>

namespace Ui {
class addnewpassenger;
}

class addnewpassenger : public QDialog
{
    Q_OBJECT

public:
    explicit addnewpassenger(QWidget *parent = nullptr);
    ~addnewpassenger();

private slots:

    void on_backtologin_clicked();

    void on_toadmin_clicked();

private:
    Ui::addnewpassenger *ui;
};

#endif // ADDNEWPASSENGER_H
