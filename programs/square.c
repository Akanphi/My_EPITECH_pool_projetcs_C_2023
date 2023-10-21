#include <unistd.h>

void my_putchar(char c)
{
    write(1, &c, 1);
}

void first_square(int k)
{
    int i;

    for (i = 1; i <= k; i++) {
        if (i == 1 || i == k) {
            my_putchar('o');
             if (i==k) {
             my_putchar('\n');
         }  
        } else{
            my_putchar('-');
        }

    }
}

void second_square(int x, int y)
{
    int i;
    int j;

for (j = 0; j < y-2; j++) {
    for (i = 1; i <= x; i++) {
    if(i == 1 || i == x ) {
        my_putchar('|');
        } else {
        my_putchar(' ');
    }
     if (i == x) {
            my_putchar('\n');
    }
    }
}
}


void rush(int x, int y)
{
first_square(x);
second_square(x, y);
if (y > 1)
    first_square(x);
}

int main ()
{

rush(9, 27);
}