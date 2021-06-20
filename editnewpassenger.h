#ifndef EDITNEWPASSENGER_H
#define EDITNEWPASSENGER_H

#include <QDialog>

namespace Ui {
class EditNewPassenger;
}

class EditNewPassenger : public QDialog
{
    Q_OBJECT

public:
    explicit EditNewPassenger(QWidget *parent = nullptr);
    ~EditNewPassenger();

private slots:

    void on_returntosermain_clicked();

    void on_backtousermain_clicked();


    void on_delete_2_clicked();

private:
    Ui::EditNewPassenger *ui;
};

#endif // EDITNEWPASSENGER_H
