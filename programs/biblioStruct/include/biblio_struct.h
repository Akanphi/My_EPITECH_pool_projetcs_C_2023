#ifndef BIBLIO_STRUCT_H
	#define BIBLIO_STRUCT_H

typedef struct LivresDisponibles LivresDisponibles;
struct LivresDisponibles 
{
	char titre[100];
	char auteur[100];
	int anneePublication;
	char genre[50];
	int nombreDisponible;
	int pretPossible;

};
int my_strlen(char const *str);
int mini_printf(const char *format, ...);
void my_putchar(char c);
int my_put_nbr(int nb);
int my_putstr(char const *str);
char *my_strcpy(char *dest , char const *src);
int my_getnbr(char const *str);
char *my_strncpy(char *dest, char const *src, int n);




#endif