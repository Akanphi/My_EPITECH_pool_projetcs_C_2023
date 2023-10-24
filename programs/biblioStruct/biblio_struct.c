#include <unistd.h>
#include <stdarg.h>
#include <stdio.h>
#include "include/biblio_struct.h"

void main(void)
{
LivresDisponibles fantastique;

mini_printf("Entrez le titre du livre :");
fgets(fantastique.titres, 100, stdin);
mini_printf("Tapez le nom de l'auteur : ");
fgets(fantastique.auteur, 100, stdin);

mini_printf("Vous voulez louer %s de %s paru en %d.\n Nous sommes desole, mais le livre n'est pas disponible a la librairie.\n", fantastique.titres, fantastique.auteur, fantastique.anneePublication);
}