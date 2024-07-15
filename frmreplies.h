#ifndef FRMREPLIES_H
#define FRMREPLIES_H

#include <QFrame>

namespace Ui {
class frmReplies;
}

class frmReplies : public QFrame
{
    Q_OBJECT

public:
    explicit frmReplies(QWidget *parent = nullptr);
    ~frmReplies();

private:
    Ui::frmReplies *ui;
};

#endif // FRMREPLIES_H
