#ifndef FRMCAMPAIGNS_H
#define FRMCAMPAIGNS_H

#include <QFrame>

namespace Ui {
class frmCampaigns;
}

class frmCampaigns : public QFrame
{
    Q_OBJECT

public:
    explicit frmCampaigns(QWidget *parent = nullptr);
    ~frmCampaigns();

private:
    Ui::frmCampaigns *ui;
};

#endif // FRMCAMPAIGNS_H
