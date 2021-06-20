#ifndef LISTOFFLIGHTS_H
#define LISTOFFLIGHTS_H

#include <QDialog>

namespace Ui {
class listofflights;
}

class listofflights : public QDialog
{
    Q_OBJECT

public:
    explicit listofflights(QWidget *parent = nullptr);
    ~listofflights();

private slots:
    void on_editpassenger_clicked();

    void on_toadminpage_clicked();

    void on_addnewflight_clicked();

private:
    Ui::listofflights *ui;
};

#endif // LISTOFFLIGHTS_H
