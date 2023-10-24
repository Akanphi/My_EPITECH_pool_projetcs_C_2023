/*
** EPITECH PROJECT, 2023
** GETNUMBER
** File description:
** A function that gets a number
*/

#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
#include "include/biblio_struct.h"

int my_getnbr(char const *str)
{
	int j = 0;
	int t = 0;
	int signe = 1;
	int i = 0;

for (int i = 0 ; str[i] != '\0'; i++) {
	while (str[i] == '-') {
		signe = signe * (-1);
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9') {
		j = (j * 10) + (str[i]-48);
		i++;
	}	
	}

return (j * signe);
}
