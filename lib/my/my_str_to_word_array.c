/*
** EPITECH PROJECT, 2024
** my_strdup
** File description:
** allocate memory
*/

#include "../../include/my.h"
#include <stddef.h>

static int my_str_isalphanum(char c)
{
    if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z')
        || (c >= '0' && c <= '9'))
        return 1;
    return 0;
}

static int count_word(const char *str)
{
    int count = 0;
    int in_word = 0;

    for (int i = 0; str[i]; i++) {
        if (my_str_isalphanum(str[i]) == 1 && in_word == 0) {
            in_word = 1;
            count++;
        }
        if (my_str_isalphanum(str[i]) == 0 && in_word == 1)
            in_word = 0;
    }
    return count;
}

static void extract_words(char const *str, char **word)
{
    const char *first;
    int in_word = 0;
    int len_word = 0;

    for (int i = 0; str[i];) {
        for (; str[i] && !my_str_isalphanum(str[i]); i++);
        first = &str[i];
        for (; str[i] && my_str_isalphanum(str[i]); i++);
        len_word = &str[i] - first;
        if (len_word > 0) {
            word[in_word] = malloc(len_word + 1);
            my_strncpy(word[in_word], first, len_word);
            word[in_word][len_word] = '\0';
            in_word++;
        }
    }
    word[in_word] = NULL;
}

char **my_str_to_word_array(char const *str)
{
    int count = count_word(str);
    char **word = malloc(sizeof(char *) * (count + 1));

    if (!word)
        return NULL;
    extract_words(str, word);
    return word;
}
