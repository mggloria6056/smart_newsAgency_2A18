#ifndef CONNEXION_H
#define CONNEXION_H
#include <QSqlDatabase>

class connexion
{
    QSqlDatabase bd;
public:
    connexion();
    bool createConnexion();
    void closeConnexion();
};

#endif // CONNEXION_H
