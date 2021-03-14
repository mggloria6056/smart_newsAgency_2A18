#include "employe.h"
employe::employe()
{
nomPrenom="";
          id=0;
          cin="";
          adresse="";
          tel=0;
          salaire=0;
          grade="";
          email="";
          login="";
}
employe::employe(QString nomPrenom ,int id ,QString cin ,QString adresse,int tel,int salaire,QString grade,QString email,QString login){
    this->nomPrenom=nomPrenom;
    this->id=id;
    this->cin=cin;
    this->adresse=adresse;
    this->tel=tel;
    this->salaire=salaire;
    this->grade=grade;
    this->email=email;
    this->login=login;
}

void employe::set_id(int n){id=n;}
void employe::set_nomPrenom(QString n){nomPrenom=n;}
void employe::set_cin(QString n){cin=n;}
void employe::set_adresse(QString n){adresse=n;}
void employe::set_salaire(int n){salaire=n;}
void employe::set_tel(int n){tel=n;}
void employe::set_email(QString n){email=n;}
void employe::set_grade(QString n){grade=n;}
                                   void employe::set_login(QString n){login=n;}

                                   QString employe::get_nomPrenom(){return nomPrenom;}
                                   QString employe::get_cin(){return cin;}
QString employe::get_adresse(){return adresse;}
QString employe::get_grade(){return grade;}
QString employe::get_email(){return email;}
QString employe::get_login(){return login;}
int employe::get_tel(){return tel;}
int employe::get_id(){return id;}
int employe::get_salaire(){return salaire;}

bool employe::ajouter(){
    QSqlQuery query;
    QString res= QString::number(id);
    query.prepare ("insert into source_projet2A(nomPrenom,id,cin,adresse,tel,salaire,grade,email,login)""values(:nomPrenom,:id,:cin,:adresse,:tel,:salaire,:grade,:email,:login)");
//création des variables
    query.bindValue(":id",res);
    query.bindValue(":nomPrenom",nomPrenom);
    query.bindValue(":cin",cin);
    query.bindValue(":adresse",adresse);
    query.bindValue(":tel",tel);
    query.bindValue(":salaire",salaire);
    query.bindValue(":grade",grade);
    query.bindValue(":login",email);
    query.bindValue(":login",login);

return query.exec();

}
