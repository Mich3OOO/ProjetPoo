#pragma once
#include <iostream>


using namespace System;

namespace data {

    

    ref struct Adresse {

        int numero;
        String^ nomRue;
        int codePostal;
    };

    ref struct Client {
        String ^ nomCl;
        String ^ prenomCl;
        String ^ dateNa;
        String^ Mail;
        String^ MotDePasse;
        System::Collections::Generic::List<Adresse^> ^ adresseFacturation;
        System::Collections::Generic::List<Adresse^> ^ adresseLivraison;
        int ^ societe;
    };

    

    ref struct Commande {

        String ^ refCom;
        String ^ dateliv;
        int total;
        String ^ dateemision;
    };

    ref struct Article {
        int idArt;
        String ^ nomArt;
        float prixHT;
        int nb;
    };

}
















/*
____
|M   |
|(\/)|
| \/ |
|   M|
`----`
*/