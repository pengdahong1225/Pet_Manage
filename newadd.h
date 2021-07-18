#ifndef NEWADD_H
#define NEWADD_H

#include <QDialog>

namespace Ui {
class NewAdd;
}

class NewAdd : public QDialog
{
    Q_OBJECT

public:
    explicit NewAdd(QWidget *parent = nullptr);
    ~NewAdd();

private:
    Ui::NewAdd *ui;
};

#endif // NEWADD_H
