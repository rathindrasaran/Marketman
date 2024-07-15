#include "frmsettings.h"
#include "ui_frmsettings.h"

frmSettings::frmSettings(QWidget *parent)
    : QFrame(parent)
    , ui(new Ui::frmSettings)
{
    ui->setupUi(this);
    ui->toolBox->setCurrentIndex(1);
}

frmSettings::~frmSettings()
{
    delete ui;
}
