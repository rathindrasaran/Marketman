#include "dlgattempts.h"
#include "ui_dlgattempts.h"

dlgAttempts::dlgAttempts(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::dlgAttempts)
{
    ui->setupUi(this);
}

dlgAttempts::~dlgAttempts()
{
    delete ui;
}
