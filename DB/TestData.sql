USE Projetpoo;

insert into Ville(nomVille,codePos) values('Pau',64000),('HASPARREN',64240),('BOUCAU',64340);
Insert into Rue(nomRue) values('Avenue Charles de Gaulle'),('Rue des bougainvilliers'),('Boulevard de la Paix'),('Rue Haritz Barne'),('Impasse des Sittelles');
insert into Adresse(num,idVille,idRue) values(4,(select idVille from Ville where codePos = 64240),(select idRue from Rue where nomRue = 'Rue Haritz Barne'));
insert into Adresse(num,idVille,idRue) values(6,(select idVille from Ville where codePos = 64240),(select idRue from Rue where nomRue = 'Rue Haritz Barne'));
insert into Adresse(num,idVille,idRue) values(8,(select idVille from Ville where codePos = 64240),(select idRue from Rue where nomRue = 'Rue Haritz Barne'));

insert into Adresse(num,idVille,idRue) values(1,(select idVille from Ville where codePos = 64240),(select idRue from Rue where nomRue = 'Avenue Charles de Gaulle'));
insert into Adresse(num,idVille,idRue) values(2,(select idVille from Ville where codePos = 64240),(select idRue from Rue where nomRue = 'Avenue Charles de Gaulle'));
insert into Adresse(num,idVille,idRue) values(3,(select idVille from Ville where codePos = 64240),(select idRue from Rue where nomRue = 'Avenue Charles de Gaulle'));

insert into Adresse(num,idVille,idRue) values(9,(select idVille from Ville where codePos = 64340),(select idRue from Rue where nomRue = 'Avenue Charles de Gaulle'));
insert into Adresse(num,idVille,idRue) values(10,(select idVille from Ville where codePos = 64340),(select idRue from Rue where nomRue = 'Avenue Charles de Gaulle'));
insert into Adresse(num,idVille,idRue) values(11,(select idVille from Ville where codePos = 64340),(select idRue from Rue where nomRue = 'Avenue Charles de Gaulle'));

insert into Adresse(num,idVille,idRue) values(3,(select idVille from Ville where codePos = 64340),(select idRue from Rue where nomRue = 'Impasse des Sittelles'));
insert into Adresse(num,idVille,idRue) values(5,(select idVille from Ville where codePos = 64340),(select idRue from Rue where nomRue = 'Impasse des Sittelles'));
insert into Adresse(num,idVille,idRue) values(7,(select idVille from Ville where codePos = 64340),(select idRue from Rue where nomRue = 'Impasse des Sittelles'));

insert into Adresse(num,idVille,idRue) values(4,(select idVille from Ville where codePos = 64000),(select idRue from Rue where nomRue = 'Rue des bougainvilliers'));
insert into Adresse(num,idVille,idRue) values(5,(select idVille from Ville where codePos = 64000),(select idRue from Rue where nomRue = 'Rue des bougainvilliers'));
insert into Adresse(num,idVille,idRue) values(6,(select idVille from Ville where codePos = 64000),(select idRue from Rue where nomRue = 'Rue des bougainvilliers'));

insert into Adresse(num,idVille,idRue) values(52,(select idVille from Ville where codePos = 64000),(select idRue from Rue where nomRue = 'Boulevard de la Paix'));
insert into Adresse(num,idVille,idRue) values(54,(select idVille from Ville where codePos = 64000),(select idRue from Rue where nomRue = 'Boulevard de la Paix'));
insert into Adresse(num,idVille,idRue) values(56,(select idVille from Ville where codePos = 64000),(select idRue from Rue where nomRue = 'Boulevard de la Paix'));

insert into Société(nomSo,IdAdresse) values('Leroy-Merlin',(select idAdresse from Adresse inner join Rue on Adresse.idRue=Rue.idRue inner join Ville on Ville.IDVille=adresse.IDVille where nomRue ='Impasse des Sittelles' and codePos = 64340 and num = 3));
insert into Société(nomSo,IdAdresse) values('Brico Dépôt',(select idAdresse from Adresse inner join Rue on Adresse.idRue=Rue.idRue inner join Ville on Ville.IDVille=adresse.IDVille where nomRue ='Impasse des Sittelles' and codePos = 64340 and num = 5));

INSERT INTO Catalogue (nomArt, stock, seuilReap, prixHT)
VALUES
  ('Ordinateur portable XYZ', '20', '5', '800'),
  ('Souris sans fil ABC', '100', '20', '30'),
  ('Écran LCD 24 pouces', '50', '10', '200'),
  ('Clavier mécanique QWERTY', '30', '8', '50'),
  ('Disque dur externe 1 To', '40', '15', '100'),
  ('Imprimante multifonction', '15', '5', '150'),
  ('Casque audio sans fil', '25', '10', '80'),
  ('Webcam HD', '30', '12', '40'),
  ('Routeur Wi-Fi double bande', '20', '8', '90'),
  ( 'Enceinte Bluetooth', '40', '15', '60'),
  ( 'Tablette graphique professionnelle', '10', '3', '300'),
  ( 'Écouteurs sans fil haut de gamme', '50', '20', '120'),
  ( 'Unité de stockage SSD 500 Go', '35', '10', '80'),
  ( 'Laptop Gaming ultime', '15', '5', '1500'),
  ( 'Imprimante laser couleur', '18', '8', '250'),
  ( 'Caméra de surveillance HD', '12', '4', '120'),
  ( 'Aspirateur robot intelligent', '8', '2', '200'),
  ( 'Écouteurs sport résistants à leau', '30', '10', '50'),
  ( 'Moniteur incurvé 27 pouces', '25', '5', '300'),
  ( 'Stylo 3D professionnel', '15', '3', '70'),
  ( 'Ensemble clavier et souris gaming', '22', '7', '80'),
  ( 'Smartwatch multifonction', '40', '15', '100'),
  ( 'Scanner haute résolution', '10', '3', '150'),
  ( 'Étui de protection pour ordinateur portable', '50', '20', '25'),
  ( 'Disque dur externe 2 To', '30', '10', '120'),
  ( 'Enceintes de bureau Bluetooth', '15', '5', '60'),
  ( 'Câble HDMI haute vitesse', '50', '15', '10'),
  ( 'Livre "Introduction à linformatique"', '20', '5', '25'),
  ( 'Station daccueil USB-C', '12', '4', '80'),
  ( 'Imprimante 3D professionnelle', '8', '2', '500');
