#include "frmcontacts.h"
#include "ui_frmcontacts.h"
#include "dlgattempts.h"
#include "ui_dlgattempts.h"
#include <QPushButton>
#include <QToolBox>

frmContacts::frmContacts(QWidget *parent)
    : QFrame(parent)
    , ui(new Ui::frmContacts)
{
    ui->setupUi(this);
    ui->toolBox->setCurrentIndex(2);
}

frmContacts::~frmContacts()
{
    delete ui;
}

void frmContacts::on_pushButton_10_clicked()
{
    dlgAttempts *d = new dlgAttempts();
    d->setWindowTitle("Attempt to Contact");
    d->findChild<QToolBox*>("toolBox")->setCurrentIndex(0);
    d->showMaximized();
    d->open();
}

