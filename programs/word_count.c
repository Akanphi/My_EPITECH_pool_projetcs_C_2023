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

int my_is_digit(int c)
{
	if (c >= '0' && c <= '9') {
		return 1;
} else {
	return 0;
}
}

int word_count(char *str)
{
	int i = 0;
	int j = 0;
	int inWord = 0;

	while (str[i] != '\0') {
		if(my_is_digit(str[i]) == 0 && my_is_alpha(str[i]) == 0 && str[i] != 39) {
			inWord = 0;
		} else {

			if (inWord == 0) {
				j++;
				inWord = 1;
			}
		}
		i++;
	}

	return j;
}


int main()
{
	char *str="Alors, Dieu a promis d'offrir son fils unique. Amen !";
	int a = word_count(str);
	printf("Str compte %d mots\n", a);

	return 0;
}