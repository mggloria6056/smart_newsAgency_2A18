#ifndef FONCTION_H
#define FONCTION_H
#include <QString>
#include <QSqlQuery>
#include <QSqlQueryModel>

class fonction
{
private:
    QString nom,caract,diplome;
    int nbheure;
public:
    fonction();
    fonction(QString,QString,int,QString);
    ~fonction(){};
    QString get_nom();
    QString get_caract();
   int get_nbheure();
    QString get_diplome();
    void set_nom(QString n);
    void set_caract(QString n);
    void set_nbheure(int n);
    void set_diplome(QString n);
    //fonctions liés au crud
    bool ajouterFonct();
    QSqlQueryModel *afficherFonct();
    bool supprimer(int);
};

#endif // FONCTION_H
