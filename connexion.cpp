#include "connexion.h"
#include <iostream>


connexion::connexion()
{

}

bool connexion::createConnexion(){

    bool test= false;
    bd= QSqlDatabase::addDatabase("QODBC");
    bd.setDatabaseName("source_projet2A");
    bd.setUserName("gloria");
    bd.setPassword("esprit21");

    if(bd.open())
        test=true;
    return test;

}

void connexion::closeConnexion(){bd.close();}
