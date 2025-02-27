/*
** EPITECH PROJECT, 2024
** my_str_isalpha
** File description:
** search if the string contains alphabetical character
*/

#include "../../include/my.h"

int my_str_isalpha(char const *str)
{
    for (int i = 0; str[i]; i++) {
        if ((str[i] >= 97 && str[i] <= 122) || (str[i] >= 90 && str[i] <= 65))
            return 1;
    }
    return 0;
}
