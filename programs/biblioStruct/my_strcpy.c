/*
** EPITECH PROJECT, 2023
** MY STRCPY
** File description:
** A function that copies string
*/
#include <unistd.h>
#include "include/biblio_struct.h"

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
