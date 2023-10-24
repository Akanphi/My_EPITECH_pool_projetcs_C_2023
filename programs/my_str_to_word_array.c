#include <stdio.h>
#include <stdlib.h>
#include <string.h> // N'oubliez pas d'inclure la bibliothèque string.h

int my_strlen(const char *str)
{
    int i;
    int count = 0; // Initialisez la variable count à zéro
    for (i = 0; str[i] != '\0'; i++)
        count++;
    return count;
}

char **my_str_to_word_array(const char *str)
{
    char **dest;
    int length = my_strlen(str);
    int i;
    int j = 0;
    int k = 0;
    int l = 0;

    dest = (char **)malloc((length + 1) * sizeof(char *));
    for (i = 0; i < length; i++)
    {
        if (str[i] == ' ' || str[i] == '\0') // Vérifiez si le caractère est un espace ou la fin de la chaîne
        {
            dest[j] = (char *)malloc(k + 1); // Allouez de la mémoire pour le mot + le caractère nul

            for (l = 0; l < k; l++)
            { 
                dest[j][l] = str[i - k + l];
            }
            dest[j][k] = '\0'; // Ajoutez le caractère nul à la fin du mot
            k = 0;
            j++;
        }
        else
        {
            k++;
        }
    }
    dest[j] = NULL;
    return dest;
}

int main(int argc, char const *argv[])
{
    const char *str = "Bonjour, comment785 ça va ?";
    char **word_array = my_str_to_word_array(str);

    // Parcourez et imprimez les mots du tableau
    for (int i = 0; word_array[i] != NULL; i++)
    {
        printf("%s\n", word_array[i]);
        free(word_array[i]); // Libérez la mémoire allouée pour chaque mot
    }

    free(word_array); // Libérez la mémoire allouée pour le tableau de pointeurs
    return 0;
}
