#ifndef DLGATTEMPTS_H
#define DLGATTEMPTS_H

#include <QDialog>

namespace Ui {
class dlgAttempts;
}

class dlgAttempts : public QDialog
{
    Q_OBJECT

public:
    explicit dlgAttempts(QWidget *parent = nullptr);
    ~dlgAttempts();

private:
    Ui::dlgAttempts *ui;
};

#endif // DLGATTEMPTS_H
