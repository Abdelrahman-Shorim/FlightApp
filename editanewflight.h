#ifndef EDITANEWFLIGHT_H
#define EDITANEWFLIGHT_H

#include <QDialog>

namespace Ui {
class EditANewFlight;
}

class EditANewFlight : public QDialog
{
    Q_OBJECT

public:
    explicit EditANewFlight(QWidget *parent = nullptr);
    ~EditANewFlight();

private:
    Ui::EditANewFlight *ui;
};

#endif // EDITANEWFLIGHT_H
