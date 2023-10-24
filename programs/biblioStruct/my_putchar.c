/*
** EPITECH PROJECT, 2023
** MY PUTCHAR
** File description:
** A function to display
*/

#include <unistd.h>
#include "include/biblio_struct.h"

void my_putchar(char c)
{
    write(1, &c, 1);
}
