#ifndef RECEIPT_H
#define RECEIPT_H

#include <QDialog>

namespace Ui {
class receipt;
}

class receipt : public QDialog
{
    Q_OBJECT

public:
    explicit receipt(QWidget *parent = nullptr);
    ~receipt();

private:
    Ui::receipt *ui;
};

#endif // RECEIPT_H
