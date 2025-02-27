/*
** EPITECH PROJECT, 2024
** my_strstr
** File description:
** find word in string
*/

#include <stddef.h>
#include "../../include/my.h"

static char *search_word(char *str, char const *to_find, int i,
    int len_to_find)
{
    int j;

    for (j = 0; j < len_to_find; j++) {
        if (str[i + j] != to_find[j])
            return NULL;
    }
    return &str[i];
}

static char *str_next(char *str, char const *to_find, int i, int len_to_find)
{
    char *result;

    if (str[i] == to_find[0]) {
        result = search_word(str, to_find, i, len_to_find);
        if (result != NULL)
            return result;
    }
    return result;
}

char *my_strstr(char *str, char const *to_find)
{
    int len_to_find = my_strlen(to_find);
    int len_str = my_strlen(str) - 1;

    if (*to_find == '\0')
        return str;
    if (len_str < len_to_find)
        return NULL;
    for (int i = 0; i <= len_str - len_to_find; i++)
        str_next(str, to_find, i, len_to_find);
    return NULL;
}
