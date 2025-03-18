#include <iostream>
#include <vector>
#include <algorithm>
#include "ceplusplus.hpp"

entier debut()
{
    chaine s = "Tkt même pas";
    affiche << s << fin_de_ligne;

    entier i = deux;
    si(i est_egal deux)
    {
        affiche << "Woah c'est juste" << fin_de_ligne;
    }
    sinon{
        affiche << "N'arrive jamais" << fin_de_ligne;
    }

    vecteur<entier> v = {neuf, deux, quatre, trois, un};

    pour(entier a : v)
    {
        affiche << a ;
    }

    affiche << fin_de_ligne;

    trie(v.debut_du_bail(), v.fin_du_bail());

    pour(entier a : v)
    {
        affiche << a ;
    }

    affiche << fin_de_ligne;    
    retourne zero;
}