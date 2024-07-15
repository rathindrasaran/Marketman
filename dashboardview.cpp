#include "dashboardview.h"
#include "ui_dashboardview.h"

DashboardView::DashboardView(QWidget *parent)
    : QFrame(parent)
    , ui(new Ui::DashboardView)
{
    ui->setupUi(this);
    ui->tabWidget->setCurrentIndex(0);
}

DashboardView::~DashboardView()
{
    delete ui;
}
