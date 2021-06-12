#ifndef LOGIN_H
#define LOGIN_H

#include <QDialog>

namespace Ui {
class Login;
}

class Login : public QDialog
{
    Q_OBJECT

public:
    explicit Login(QWidget *parent = nullptr);
    ~Login();

private slots:

    void on_admin_clicked();

    void on_passenger_clicked();

    void on_createaccount_clicked();


    void on_loginbtn_clicked();


    void on_passwordinput_cursorPositionChanged(int arg1, int arg2);

private:
    Ui::Login *ui;
};

#endif // LOGIN_H
