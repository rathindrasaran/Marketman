#ifndef FRMLISTS_H
#define FRMLISTS_H

#include <QFrame>

namespace Ui {
class frmLists;
}

class frmLists : public QFrame
{
    Q_OBJECT

public:
    explicit frmLists(QWidget *parent = nullptr);
    ~frmLists();

private slots:
    void on_pushButton_4_clicked();

private:
    Ui::frmLists *ui;
};

#endif // FRMLISTS_H
