#include <unistd.h>
#include <stdio.h>

int my_is_digit(int c)
{
	if (c >= '0' && c <= '9') {
		return 1;
} else {
	return 0;
}
}
