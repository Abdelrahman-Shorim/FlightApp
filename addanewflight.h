#ifndef ADDANEWFLIGHT_H
#define ADDANEWFLIGHT_H

#include <QDialog>

namespace Ui {
class AddANewFlight;
}

class AddANewFlight : public QDialog
{
    Q_OBJECT

public:
    explicit AddANewFlight(QWidget *parent = nullptr);
    ~AddANewFlight();

private slots:
    void on_toadmin_clicked();

    void on_toadmin_2_clicked();

private:
    Ui::AddANewFlight *ui;
};

#endif // ADDANEWFLIGHT_H
