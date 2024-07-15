#include "frmtemplates.h"
#include "ui_frmtemplates.h"

frmTemplates::frmTemplates(QWidget *parent)
    : QFrame(parent)
    , ui(new Ui::frmTemplates)
{
    ui->setupUi(this);
    ui->toolBox->setCurrentIndex(1);
}

frmTemplates::~frmTemplates()
{
    delete ui;
}
