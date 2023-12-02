/*
** EPITECH PROJECT, 2023
** MY STRNCPY
** File description:
** Copy n functions
*/

#include <unistd.h>

char *my_strncpy(char *dest, char const *src, int n)
{
    for (int i = 0; i < n; i++) {
        dest[i] = src [i];
    }
    return dest;
}
