#ifndef FRMCONTACTS_H
#define FRMCONTACTS_H

#include <QFrame>

namespace Ui {
class frmContacts;
}

class frmContacts : public QFrame
{
    Q_OBJECT

public:
    explicit frmContacts(QWidget *parent = nullptr);
    ~frmContacts();

private slots:
    void on_pushButton_10_clicked();

private:
    Ui::frmContacts *ui;
};

#endif // FRMCONTACTS_H
