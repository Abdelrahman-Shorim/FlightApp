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

private:
    Ui::userhomepage *ui;
};

#endif // USERHOMEPAGE_H
