#pragma once
#include <iostream>


using namespace System;

namespace data {

    ref struct Adresse {

        int numero;
        String ^ ville;
        String ^ codePostal;
    };

    ref struct Client {
        String ^ nomCl;
        String ^ prenomCl;
        String ^ dateNa;
        String^ Mail;
        String^ MotDePasse;
        Adresse adresseFacturation;
        Adresse adresseLivraison;
        int ^ societe;
    };

    ref struct Personnel {

        String ^ nomP;
        String ^ prenomP;
        String ^ dateEm;
        String ^ superviseur;
        Adresse adresse;
    };

    ref struct Commande {

        String ^ refCom;
        String ^ dateliv;
        int total;
        String ^ dateemision;
    };

    ref struct Article {

        String ^ nomArt;
        int stock;
        float seuilReap;
        float prixHT;
        float  seuil;
    };

}
















/*
ʕ•ᴥ•ʔ
*/