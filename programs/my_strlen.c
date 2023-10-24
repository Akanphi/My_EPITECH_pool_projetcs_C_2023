/*
** EPITECH PROJECT, 2023
** My Strlen
** File description:
** Counts and returns the numbers of characters
*/

#include <unistd.h>
#include <stdio.h>

int my_strlen(char const *str)
{
    int i;
    int count = 0;
    for (i = 0; str[i] != '\0'; i++)
    	count ++;
    return count;
}

