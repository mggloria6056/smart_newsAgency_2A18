#include "mainwindow.h"
#include"connexion.h"
#include <QApplication>
#include <QDebug>
#include <QMessageBox>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    connexion c;
    bool test=c.createConnexion();
     MainWindow w;
     if(test)
     {
         w.show();
QMessageBox::information(nullptr,QObject::tr("base de donnée ouverte"),
                        QObject::tr("connexion effectué\n"
                                    "click cancel to exit."), QMessageBox::Cancel
                        );
     }
     else
     {
         QMessageBox::critical(nullptr,QObject::tr(" base de donnée non ouverte"),
                                  QObject::tr("connexion non effectué\n"
                                              "click cancel to exit."), QMessageBox::Cancel
                                  );
 }

    return a.exec();
}
