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

private:
    Ui::adminhomepage *ui;
};

#endif // ADMINHOMEPAGE_H
