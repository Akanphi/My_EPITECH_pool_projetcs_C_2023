/*
** EPITECH PROJECT, 2023
** MY PUTSTR
** File description:
** A function to displays a character
*/

#include <unistd.h>
#include "include/biblio_struct.h"

int my_putstr(char const *str)
{
    for (int i = 0; str[i] != '\0'; i++)
    my_putchar(str[i]);
    return 0;
}
