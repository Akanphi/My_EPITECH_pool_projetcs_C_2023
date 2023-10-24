/*
** EPITECH PROJECT, 2023
** Showmem
** File description:
** Showmem
*/

#include <unistd.h>
#include "include/biblio_struct.h"

int my_put_nbr(int nb)
{
    if (nb >= 0 && nb < 10) {
    my_putchar(nb + '0');
    } else if ( nb < 0) {
    my_putchar('-');
    my_put_nbr(nb * (-1) + '0');
    } else {
    my_put_nbr(nb / 10);
    my_put_nbr(nb % 10);
    }
    return 0;
}
