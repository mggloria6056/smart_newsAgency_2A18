#ifndef EMPLOYE_H
#define EMPLOYE_H
#include <QSqlQuery>
#include <QSqlQueryModel>
#include <QString>

class employe
{
private:
    QString nomPrenom,grade,email,login,cin,adresse;
   int id,salaire,tel;

public:
//constructeurs paramétrés
    employe(QString,int,QString,QString,int,int,QString,QString,QString);
        employe();
        ~employe();
    //les accesseurs
        void set_nomPrenom(QString n);
    void set_id(int n);
    void set_cin(QString n);
    void set_adresse(QString n);
    void set_tel(int n);
    void set_salaire(int n);
    void set_grade(QString n);
    void set_email(QString n);
    void set_login(QString n);
QString get_nomPrenom();
int get_id();
QString get_cin();
QString get_adresse();
int get_tel();
int get_salaire();
QString get_grade();
QString get_email();
QString get_login();
//fonctionnalité de l'entité employé

bool ajouter();
QSqlQueryModel *afficher();
bool supprimer(int);




};

#endif // EMPLOYE_H
