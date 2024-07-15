#ifndef FRMTEMPLATES_H
#define FRMTEMPLATES_H

#include <QFrame>

namespace Ui {
class frmTemplates;
}

class frmTemplates : public QFrame
{
    Q_OBJECT

public:
    explicit frmTemplates(QWidget *parent = nullptr);
    ~frmTemplates();

private:
    Ui::frmTemplates *ui;
};

#endif // FRMTEMPLATES_H
