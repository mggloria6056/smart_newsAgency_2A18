#include "fonction.h"

fonction::fonction()
{
        nom="";
        caract="";
        nbheure=0 ;
        diplome="";

}
fonction::fonction(QString nom,QString caract,int nbheure,QString diplome){

    this->nom=nom;
    this->caract=caract;
    this->nbheure=nbheure;
    this->diplome=diplome;
}

void fonction::set_nom(QString n){nom=n;}
void fonction::set_nbheure(int n){nbheure=n;}
void fonction::set_caract(QString n){caract=n;}
void fonction::set_diplome(QString n){diplome=n;}


QString fonction::get_nom(){return nom;}
int fonction::get_nbheure(){return nbheure;}
QString fonction::get_caract(){return caract;}
QString fonction::get_diplome(){return diplome;}

bool fonction::ajouterFonct(){
    QSqlQuery query;

    query.prepare ("insert into source_projet2A(nom,caractéristique,nbheure,diplome)""values(:nom,:caract,:nbheure,:diplome)");
//création des variables
    query.bindValue(":nom",nom);
    query.bindValue(":caractéristique",caract);
    query.bindValue(":nbheure",nbheure);
    query.bindValue(":diplome",diplome);



return query.exec();

}

