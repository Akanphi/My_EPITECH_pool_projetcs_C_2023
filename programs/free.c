/*
** EPITECH PROJECT, 2023
** free
** File description:
** function to free after malloc
*/

void free_malloc(char **word_array, int number_of_words) {
    for (int i = 0; i < number_of_words; i++) {
        free(word_array[i]);
    }
    free(word_array);
}