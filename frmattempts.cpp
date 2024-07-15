#include "frmattempts.h"
#include "ui_frmattempts.h"

frmAttempts::frmAttempts(QWidget *parent)
    : QFrame(parent)
    , ui(new Ui::frmAttempts)
{
    ui->setupUi(this);
    ui->toolBox->setCurrentIndex(1);
}

frmAttempts::~frmAttempts()
{
    delete ui;
}
