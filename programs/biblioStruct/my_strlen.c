/*
** EPITECH PROJECT, 2023
** STRLEN
** File description:
** Display the length
*/

#include <unistd.h>
#include "include/biblio_struct.h"

int my_strlen(char const *str)
{
    int i = 0;

    while (str[i] != '\0') {
        i++;
    }
    return i;
}
