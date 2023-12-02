#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

char *my_strcpy(char *dest , char const *src)
{
    int i = 0;

    while (src[i] != '\0') {
        dest[i] = src[i];
        i++;
    }
    dest[i] = '\0';
    return dest;
}

Liste *initialisation()
{
	Liste *liste = malloc(sizeof(*liste));
	Biblio *biblio = malloc(sizeof(*biblio));

	if(liste == NULL || biblio == NULL) {
		exit(EXIT_FAILURE);
	}

	biblio->my_strcpy(roman, "Luc");
	biblio->my_strcpy(langue, "Grec");
	biblio->nombreDisponible = 3;  
}