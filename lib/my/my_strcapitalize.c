/*
** EPITECH PROJECT, 2024
** my_strlen
** File description:
** print size of string
*/

#include "../../include/my.h"

char *my_strcapitalize(char *str)
{
    my_strlowcase(str);
    for (int i = 0; str[i]; i++) {
        if (i == 0 && (str[i] >= 97 && str[i] <= 122))
            str[i] -= 32;
        if (i > 0 && (str[i - 1] == ' ' || str[i - 1] == '-'
        || str[i - 1] == '+') && (str[i] >= 97 && str[i] <= 122))
            str[i] -= 32;
    }
    return str;
}
