#include "frmreminders.h"
#include "ui_frmreminders.h"

frmReminders::frmReminders(QWidget *parent)
    : QFrame(parent)
    , ui(new Ui::frmReminders)
{
    ui->setupUi(this);
    ui->toolBox->setCurrentIndex(1);
}

frmReminders::~frmReminders()
{
    delete ui;
}
