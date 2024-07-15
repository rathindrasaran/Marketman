#ifndef FRMREMINDERS_H
#define FRMREMINDERS_H

#include <QFrame>

namespace Ui {
class frmReminders;
}

class frmReminders : public QFrame
{
    Q_OBJECT

public:
    explicit frmReminders(QWidget *parent = nullptr);
    ~frmReminders();

private:
    Ui::frmReminders *ui;
};

#endif // FRMREMINDERS_H
