#ifndef FRMATTEMPTS_H
#define FRMATTEMPTS_H

#include <QFrame>

namespace Ui {
class frmAttempts;
}

class frmAttempts : public QFrame
{
    Q_OBJECT

public:
    explicit frmAttempts(QWidget *parent = nullptr);
    ~frmAttempts();

private:
    Ui::frmAttempts *ui;
};

#endif // FRMATTEMPTS_H
