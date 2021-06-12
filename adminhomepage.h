#ifndef ADMINHOMEPAGE_H
#define ADMINHOMEPAGE_H

#include <QDialog>

namespace Ui {
class adminhomepage;
}

class adminhomepage : public QDialog
{
    Q_OBJECT

public:
    explicit adminhomepage(QWidget *parent = nullptr);
    ~adminhomepage();

private slots:
    void on_addnewpassenger_clicked();

    void on_listofpassenger_clicked();

    void on_addnewflight_clicked();

    void on_listofflights_clicked();

    void on_listoftransactions_clicked();

private:
    Ui::adminhomepage *ui;
};

#endif // ADMINHOMEPAGE_H
