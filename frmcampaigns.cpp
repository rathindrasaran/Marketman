#include "frmcampaigns.h"
#include "ui_frmcampaigns.h"

frmCampaigns::frmCampaigns(QWidget *parent)
    : QFrame(parent)
    , ui(new Ui::frmCampaigns)
{
    ui->setupUi(this);
    ui->toolBox->setCurrentIndex(1);
}

frmCampaigns::~frmCampaigns()
{
    delete ui;
}
