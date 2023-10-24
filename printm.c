/*
** EPITECH PROJECT, 2023
** projet C
** File description:
** print all
*/
#include<stdlib.h>
#include<stdio.h>
#include<stddef.h>
#include<unistd.h>
#include<string.h>
#include<stdarg.h>
#include"my.h"
int switc1(const char *format, int i, va_list(ap))
{
    switch (format[i + 1]) {
    case 'i':
        my_putnbr(va_arg(ap, int));
        break;
    case 'd':
        my_putnbr(va_arg(ap, int));
        break;
    case 'c':
        my_putchar(va_arg(ap, int));
        break;
    case 's':
        my_putstr(va_arg(ap, char *));
        break;
    case '%':
        my_putchar('%');
        break;
    }
}

int my_putfloat(float f)
{
    int c;
    int a = 0;

    a = f;
    my_putnbr(a);
    my_putchar('.');
    c = (f * 1000000) - (a * 1000000);
    if (c >= 0 && c <= 9) {
        my_putchar('0');
    }
    my_putnbr(c);
}

int my_compute_power_it(int nb,int p)
{
    int i;
    int P = 1;

    for (i = 0; i < p; i++) {
	if (p == 0) {
            return 1;
	} else if (p == 1) {
	    return nb;
        } else {
            P = P * nb;
        }
    }
    return P;
    if (p < 0 || p > 2147483647 || nb < 0 || nb > 2147483647) {
        return 0;
    }
}
int unsigned_convector(int nbr)
{
    if (nbr < 0) {
        nbr = nbr * (-1); 
            } else {
        nbr = nbr * 1;
    }
    return nbr;
}
    
int nbre_de_chiffre(int nbr)
{
    int j = 0;
    for (int i = 0; nbr < 10 ; i++) {
        nbr = (nbr / 10);
        j++;
    }
    return j;
}
int base_convector(float nombre_a_convertir, int la_base)
{
    int j = nbre_de_chiffre(nombre_a_convertir);
    int reste = 0;
    int d = 0;
    for (int i = 0; nombre_a_convertir >= la_base; i++) {
        nombre_a_convertir = nombre_a_convertir / la_base;
        d = nombre_a_convertir;
        reste = (((nombre_a_convertir - d) * la_base) * my_compute_power_it(10, j)) + reste;
        j--;
    }
    return reste;
}
int switc2(const char *format, int i, va_list(ap))// %f, %o, %x,//%n//,%e,%E,%p,%u//
{
    switch (format[i + 1]) {
    case 'f':
        my_putfloat(va_arg(ap, float));
        break;
    case 'e':
        my_putfloat(va_arg(ap, float));
        break;
    case 'E':
        my_putfloat(va_arg(ap, float));
        break;
    case 'o':
        my_putnbr(base_convector(va_arg(ap, int), 8));
        break;
    case 'p':
        my_putnbr(va_arg(ap, int));
        break;
    }
}

int switc3(const char *format, int i, va_list(ap))// n, x, X//
{
    switch (format[i + 1]) {
    case 'x':
        my_putnbr(base_convector(va_arg(ap, int), 16));
        break;
    case'X':
        my_putnbr(base_convector(va_arg(ap, int), 16));
        break;
    case 'n':
        break;
    case 'u':
        my_putnbr(unsigned_convector(va_arg(ap, int)));
        break;
    }
}
int mini_printf(const char *format, ...)
{
    int l = 0;
    int i = 0;
    va_list(ap);

    va_start(ap, format);
    for (i = 0; format[i] != '\0'; i++) {
        if (format[i] == '%') {
            switc1(format, i, ap);
            i++;
        } else {
            my_putchar(format[i]);
        }
    }
}