#include "frmreplies.h"
#include "ui_frmreplies.h"

frmReplies::frmReplies(QWidget *parent)
    : QFrame(parent)
    , ui(new Ui::frmReplies)
{
    ui->setupUi(this);
    ui->toolBox->setCurrentIndex(0);
}

frmReplies::~frmReplies()
{
    delete ui;
}
