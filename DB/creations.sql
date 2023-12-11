CREATE DATABASE Projetpoo;
USE Projetpoo;

CREATE TABLE Ville(
   IDVille INT IDENTITY,
   nomVille VARCHAR(50),
   codePos INT NOT NULL,
   PRIMARY KEY(IDVille),
   UNIQUE(codePos)
);

CREATE TABLE Rue(
   idRue INT IDENTITY,
   nomRue VARCHAR(50),
   PRIMARY KEY(idRue)
);

CREATE TABLE Moyen_Paiement(
   idp INT IDENTITY,
   moyenp VARCHAR(50) NOT NULL,
   PRIMARY KEY(idp)
);

CREATE TABLE Catalogue(
   arRref INT IDENTITY,
   nomArt VARCHAR(50) NOT NULL,
   stock INT,
   seuilReap INT,
   prixHT DECIMAL(15,2) NOT NULL,
   PRIMARY KEY(arRref)
);

CREATE TABLE adresse(
   IdAdresse INT IDENTITY,
   num INT NOT NULL,
   IDVille INT NOT NULL,
   idRue INT NOT NULL,
   PRIMARY KEY(IdAdresse),
   FOREIGN KEY(IDVille) REFERENCES Ville(IDVille),
   FOREIGN KEY(idRue) REFERENCES Rue(idRue)
);

CREATE TABLE Personnel(
   idPerso INT IDENTITY,
   nomP VARCHAR(50) NOT NULL,
   prenomP VARCHAR(50) NOT NULL,
   dateEm DATE NOT NULL,
   mailPer VARCHAR(100) NOT NULL,
   verifiPer VARCHAR(100) NOT NULL,
   IdAdresse INT NOT NULL,
   PRIMARY KEY(idPerso),
   FOREIGN KEY(IdAdresse) REFERENCES adresse(IdAdresse)
);

CREATE TABLE Supérieur(
   idSup INT IDENTITY,
   idPerso INT NOT NULL,
   PRIMARY KEY(idSup),
   UNIQUE(idPerso),
   FOREIGN KEY(idPerso) REFERENCES Personnel(idPerso)
);

CREATE TABLE subalterne(
   idPerso INT,
   idSup INT NOT NULL,
   PRIMARY KEY(idPerso),
   FOREIGN KEY(idPerso) REFERENCES Personnel(idPerso),
   FOREIGN KEY(idSup) REFERENCES Supérieur(idSup)
);

CREATE TABLE Société(
   idSo INT IDENTITY,
   nomSo VARCHAR(50) NOT NULL,
   IdAdresse INT NOT NULL,
   PRIMARY KEY(idSo),
   FOREIGN KEY(IdAdresse) REFERENCES adresse(IdAdresse)
);

CREATE TABLE Client(
   numCl INT IDENTITY,
   nomCl VARCHAR(50) NOT NULL,
   prenomCl VARCHAR(50) NOT NULL,
   dateNa DATE NOT NULL,
   mailCl VARCHAR(100) NOT NULL,
   verifiCl VARCHAR(100) NOT NULL,
   idSo INT,
   PRIMARY KEY(numCl),
   FOREIGN KEY(idSo) REFERENCES Société(idSo)
);

CREATE TABLE Commande(
   idCom INT IDENTITY,
   refCom VARCHAR(50),
   dateLivP DATE NOT NULL,
   totalHT DECIMAL(15,2) NOT NULL,
   totalTVA DECIMAL(15,2) NOT NULL,
   totalTTC DECIMAL(15,2) NOT NULL,
   dateEm DATE,
   dateRe DATE NOT NULL,
   numCl INT NOT NULL,
   PRIMARY KEY(idCom),
   FOREIGN KEY(numCl) REFERENCES Client(numCl)
);

CREATE TABLE Facturer(
   numCl INT,
   IdAdresse INT,
   PRIMARY KEY(numCl, IdAdresse),
   FOREIGN KEY(numCl) REFERENCES Client(numCl),
   FOREIGN KEY(IdAdresse) REFERENCES adresse(IdAdresse)
);

CREATE TABLE Livrer(
   numCl INT,
   IdAdresse INT,
   PRIMARY KEY(numCl, IdAdresse),
   FOREIGN KEY(numCl) REFERENCES Client(numCl),
   FOREIGN KEY(IdAdresse) REFERENCES adresse(IdAdresse)
);

CREATE TABLE Payer(
   idCom INT,
   idp INT,
   datesP DATE NOT NULL,
   Sold DECIMAL(15,2),
   PRIMARY KEY(idCom, idp),
   FOREIGN KEY(idCom) REFERENCES Commande(idCom),
   FOREIGN KEY(idp) REFERENCES Moyen_Paiement(idp)
);

CREATE TABLE Contenir(
   idCom INT,
   arRref INT,
   nb INT NOT NULL,
   prixHTMT DECIMAL(15,2) NOT NULL,
   prixTTCMT DECIMAL(15,2),
   PRIMARY KEY(idCom, arRref),
   FOREIGN KEY(idCom) REFERENCES Commande(idCom),
   FOREIGN KEY(arRref) REFERENCES Catalogue(arRref)
);
