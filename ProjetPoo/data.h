#pragma once
#include <iostream>


using namespace std;

namespace data {

    struct Adresse {

        int numero;
        string ville;
        string codePostal;
    };

    struct Client {
        string nomCl;
        string prenomCl;
        string dateNa;
        Adresse adresseFacturation;
        Adresse adresseLivraison;
        string societe;
    };

    struct Personnel {

        string nomP;
        string prenomP;
        string dateEm;
        string superviseur;
        Adresse adresse;
    };

    struct Commande {

        string refCom;
        string dateliv;
        int total;
        string dateemision;
    };

    struct Article {

        string nomArt;
        int stock;
        float seuilReap;
        float prixHT;
        float  seuil;
    };

}