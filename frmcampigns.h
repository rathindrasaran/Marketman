#ifndef FRMCAMPIGNS_H
#define FRMCAMPIGNS_H

#include <QFrame>

namespace Ui {
class frmCampigns;
}

class frmCampigns : public QFrame
{
    Q_OBJECT

public:
    explicit frmCampigns(QWidget *parent = nullptr);
    ~frmCampigns();

private:
    Ui::frmCampigns *ui;
};

#endif // FRMCAMPIGNS_H
