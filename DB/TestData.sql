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
