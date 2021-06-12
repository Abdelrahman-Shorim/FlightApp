#ifndef USERHOMEPAGE_H
#define USERHOMEPAGE_H

#include <QDialog>

namespace Ui {
class userhomepage;
}

class userhomepage : public QDialog
{
    Q_OBJECT

public:
    explicit userhomepage(QWidget *parent = nullptr);
    ~userhomepage();

private slots:
    void on_editprofile_clicked();

    void on_reservation_clicked();

    void on_bookaflight_clicked();

private:
    Ui::userhomepage *ui;
};

#endif // USERHOMEPAGE_H
