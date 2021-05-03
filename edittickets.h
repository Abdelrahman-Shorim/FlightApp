#ifndef EDITTICKETS_H
#define EDITTICKETS_H

#include <QDialog>

namespace Ui {
class edittickets;
}

class edittickets : public QDialog
{
    Q_OBJECT

public:
    explicit edittickets(QWidget *parent = nullptr);
    ~edittickets();

private:
    Ui::edittickets *ui;
};

#endif // EDITTICKETS_H
