#include "mainwindow.h"
#include <QMessageBox>
#include "ui_mainwindow.h"
#include "employe.h"
#include "fonction.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}



void MainWindow::on_ajouterFonction_clicked()
{
     QString grade= ui->lineEdit_gradeF->text();
     QString caract=ui->textEdit_caract->toPlainText();
     int nbheure=ui->lineEdit_nbheure->text().toInt();
     QString diplome=ui->lineEdit_diplome->text();
    fonction f(grade,caract,nbheure,diplome);
    bool test=f.ajouterFonct();
        if(test)
        {
  QMessageBox::information(nullptr,QObject::tr("ok"),
                           QObject::tr("ajout effectué\n"
                                       "click cancel to exit."), QMessageBox::Cancel
                           );
        }
        else
        {
            QMessageBox::critical(nullptr,QObject::tr(" not ok"),
                                     QObject::tr("ajout non effectué\n"
                                                 "click cancel to exit."), QMessageBox::Cancel
                                     );
    }



}

void MainWindow::on_ajoutEmploye_clicked()
{

}

void MainWindow::on_modifEmploye_clicked()
{

}

void MainWindow::on_suppEmploye_clicked()
{

}

void MainWindow::on_modiFonction_clicked()
{

}

void MainWindow::on_suppFonction_clicked()
{

}

void MainWindow::on_stat_clicked()
{

}
