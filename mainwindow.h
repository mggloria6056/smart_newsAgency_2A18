#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:


    void on_ajouterFonction_clicked();

    void on_ajoutEmploye_clicked();

    void on_modifEmploye_clicked();

    void on_suppEmploye_clicked();

    void on_modiFonction_clicked();

    void on_suppFonction_clicked();

    void on_stat_clicked();

private:
    Ui::MainWindow *ui;
};
#endif // MAINWINDOW_H
