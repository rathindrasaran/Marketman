#include "frmlists.h"
#include "ui_frmlists.h"
#include <QFileDialog>

frmLists::frmLists(QWidget *parent)
    : QFrame(parent)
    , ui(new Ui::frmLists)
{
    ui->setupUi(this);
    ui->toolLists->setCurrentIndex(1);
}

frmLists::~frmLists()
{
    delete ui;
}

void frmLists::on_pushButton_4_clicked()
{
    QFileDialog::getOpenFileContent(tr("*"),
        [this](const QString &fileName, const QByteArray &fileContent){
            if (!fileName.isEmpty()) {
                ui->label_4->setText(fileName);
                ui->pushButton_4->setText("Upload");
            }
        }
    );
}

