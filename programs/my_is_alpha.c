#include <unistd.h>
#include <stdio.h>

int my_is_alpha(char c)
{
	if(c >= 'A' && c <= 'Z' || c >= 'a' && c <= 'z') {
		return 1;
} else {
	return 0;
}
}