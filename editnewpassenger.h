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
<<<<<<< HEAD
    void on_returntosermain_clicked();

    void on_backtousermain_clicked();
=======
    void on_pushButton_2_clicked();
>>>>>>> 20f6aec90d53ba2546a6b887d4e6d9cb06fa380b

private:
    Ui::EditNewPassenger *ui;
};

#endif // EDITNEWPASSENGER_H
