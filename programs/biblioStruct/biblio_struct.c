#include <unistd.h>
#include <stdarg.h>
#include <stdio.h>
#include "include/biblio_struct.h"

void bibliotheque(void)
{
	LivresDisponibles biblio [25];
	int nbLivres = 0;

	my_strcpy(biblio[0].titre, "Doguicimi");
	my_strcpy(biblio[0].auteur, "Paul Hazoume");
	my_strcpy(biblio[0].genre, "Historique");
	biblio[0].anneePublication = 1867;
	biblio[0].nombreDisponible = 17;
	nbLivres++;

	my_strcpy(biblio[1].titre, "Voyage au bout de la nuit");
	my_strcpy(biblio[1].auteur, "Louis-Ferdinand Celine");
	my_strcpy(biblio[1].genre, "Drame");
	biblio[1].anneePublication = 1932;
	biblio[1].nombreDisponible = 6;
	nbLivres++;

	my_strcpy(biblio[2].titre, "Madame Bovary");
	my_strcpy(biblio[2].auteur, "Gustave Flaubert");
	my_strcpy(biblio[2].genre, "Dramatique");
	biblio[2].anneePublication = 1857;
	biblio[2].nombreDisponible = 56;
	nbLivres++;

	my_strcpy(biblio[3].titre, "Crime et Chatiment");
	my_strcpy(biblio[3].auteur, "Fiodor Dostoievski");
	my_strcpy(biblio[3].genre, "Psychologique");
	biblio[3].anneePublication = 1867;
	biblio[3].nombreDisponible = 7;
	nbLivres++;

	my_strcpy(biblio[4].titre, "Les Grandes Esperances");
	my_strcpy(biblio[4].auteur, "Charles Dickens");
	my_strcpy(biblio[4].genre, "Autobiographique");
	biblio[4].anneePublication = 1861;
	biblio[4].nombreDisponible = 3;
	nbLivres++;

	my_strcpy(biblio[5].titre, "L'Etranger");
	my_strcpy(biblio[5].auteur, "Albert Camus");
	my_strcpy(biblio[5].genre, "Absurde");
	biblio[5].anneePublication = 1942;
	biblio[5].nombreDisponible = 23;
	nbLivres++;

	my_strcpy(biblio[6].titre, "Le Pere Goriot");
	my_strcpy(biblio[6].auteur, "Honore de Balzac");
	my_strcpy(biblio[6].genre, "Dramatique");
	biblio[6].anneePublication = 1834;
	biblio[6].nombreDisponible = 1;
	nbLivres++;

	my_strcpy(biblio[7].titre, "Guerre et Paix");
	my_strcpy(biblio[7].auteur, "Leon Tolstoi");
	my_strcpy(biblio[7].genre, "Historique");
	biblio[7].anneePublication = 1839;
	biblio[7].nombreDisponible = 5;
	nbLivres++;

	my_strcpy(biblio[8].titre, "Le Proces");
	my_strcpy(biblio[8].auteur, "Franz Kafka");
	my_strcpy(biblio[8].genre, "Dystopique");
	biblio[8].anneePublication = 1925;
	biblio[8].nombreDisponible = 11;
	nbLivres++;

	my_strcpy(biblio[9].titre, "Un piege sans fin");
	my_strcpy(biblio[9].auteur, "Olympe Bhely-Quenum");
	my_strcpy(biblio[9].genre, "Absurde");
	biblio[9].anneePublication = 1971;
	biblio[9].nombreDisponible = 85;
	nbLivres++;

	my_strcpy(biblio[10].titre, "L'Esclave");
	my_strcpy(biblio[10].auteur, "Felix Couchoro");
	my_strcpy(biblio[10].genre, "Dramatique");
	biblio[10].anneePublication = 1929;
	biblio[10].nombreDisponible = 4;
	nbLivres++;

	my_strcpy(biblio[11].titre, "Pour une poignee de gombo");
	my_strcpy(biblio[11].auteur, "Sophie Adonon");
	my_strcpy(biblio[11].genre, "Romance");
	biblio[11].anneePublication = 2013;
	biblio[11].nombreDisponible = 62;
	nbLivres++;
}

void afficherLivre(Struct LivresDisponibles biblio)
{
	int nb = 1;
	int i = 0;

	while(nb < nbLivres) {
		mini_printf("%d.", nb);
		nb++;
	}
	mini_printf("Titre : %s\n", biblio.titre);
	mini_printf("Titre : %s\n", biblio.auteur);
	mini_printf("Titre : %s\n", biblio.genre);
	mini_printf("Titre : %d\n", biblio.anneePublication);
	mini_printf("Titre : %d\n", biblio.nombreDisponible);


}

int main(void)
{
mini_printf("Bienvenue dans notre BIBLIOTHEQUE\n\n");
mini_printf("Voici notre catalogue : \n");



}