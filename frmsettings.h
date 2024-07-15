#ifndef FRMSETTINGS_H
#define FRMSETTINGS_H

#include <QFrame>

namespace Ui {
class frmSettings;
}

class frmSettings : public QFrame
{
    Q_OBJECT

public:
    explicit frmSettings(QWidget *parent = nullptr);
    ~frmSettings();

private:
    Ui::frmSettings *ui;
};

#endif // FRMSETTINGS_H
