#include "mainwindow.h"
#include "dashboardview.h"

#include <QApplication>
#include <QPushButton>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    DashboardView d;

    QPushButton     *x_btnSignIn            = w.findChild<QPushButton*>("btnSignIn");
    // QLineEdit       *x_txtUsername          = w.findChild<QLineEdit*>("txtUsername");
    // QLineEdit       *x_txtPassword          = w.findChild<QLineEdit*>("txtPassword");
    QPushButton     *x_btnSignOut           = d.findChild<QPushButton*>("btnSignOut");

    w.show();

    QObject::connect(x_btnSignIn, &QPushButton::clicked, [&](){
        w.hide();
        d.show();
    });

    QObject::connect(x_btnSignOut, &QPushButton::clicked, [&](){
        d.hide();
        w.show();
    });

    return a.exec();
}
