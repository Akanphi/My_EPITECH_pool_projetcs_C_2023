/*
** EPITECH PROJECT, 2023
** mini_printf
** File description:
** a function that act like printf
*/

#include <unistd.h>
#include <stdarg.h>
#include "include/biblio_struct.h"

void my_putchar(char c)
{
	write(1, &c, 1);
}

int my_putstr(char const *str)
{
    for (int i = 0; str[i] != '\0'; i++)
        my_putchar(str[i]);
}

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

int my_strlen(char const *str)
{
    int i = 0;

    while (str[i] != '\0') {
        i++;
    }
    return i;
}

int mini_printf(const char *format, ...)
{
	va_list args;
	va_start(args, *format);
	int i;

	for(i = 0; format[i] != '\0'; i++) {
		if (format[i] != '%') {
			my_putchar(format[i]); 
		} else {
			if(format[i] == '%' && format[i+1] == 'd') {
				my_put_nbr(va_arg(args, int));
				i++;
			} else if (format[i] == '%' && format[i+1] == 'i') {
				my_put_nbr(va_arg(args, int));
				i++;
			} else if (format[i] == '%' && format[i+1] == 'c') {
				my_putchar(va_arg(args, int));
				i++;
		} else if (format[i] == '%' && format[i+1] == 's') {
				my_putstr(va_arg(args, char*));
				i++;
	} else if (format[i] == '%' && format[i+1] == '%') {
				my_putchar('%');
				i++;	
			}
		}
	}
	return 0;
}	

int main()
{
	char str[6];
my_strcpy(str,"world");
mini_printf("Hello %s\n",str);
}
