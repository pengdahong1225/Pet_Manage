#ifndef NEWADD_H
#define NEWADD_H

#include <QDialog>

namespace Ui {
class NewAdd;
}

typedef struct user_information{
    QString name;
    int8_t sex; //1男 -1女
    QString phone_number;
    QString postbox;
}U_IN;

class NewAdd : public QDialog
{
    Q_OBJECT

public:
    explicit NewAdd(QWidget *parent = nullptr);
    ~NewAdd();
    U_IN user_in;
public slots:
    void Load();
signals:
    void Load_Ok();
private:
    Ui::NewAdd *ui;
};

#endif // NEWADD_H
