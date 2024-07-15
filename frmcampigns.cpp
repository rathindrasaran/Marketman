#include "frmcampigns.h"
#include "ui_frmcampigns.h"

frmCampigns::frmCampigns(QWidget *parent)
    : QFrame(parent)
    , ui(new Ui::frmCampigns)
{
    ui->setupUi(this);
}

frmCampigns::~frmCampigns()
{
    delete ui;
}
