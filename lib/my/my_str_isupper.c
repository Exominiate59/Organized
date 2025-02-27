/*
** EPITECH PROJECT, 2024
** my_str_isupper
** File description:
** search if the string contains uppercase alphabetical
*/

#include "../../include/my.h"

int my_str_isupper(char const *str)
{
    for (int i = 0; str[i]; i++) {
        if (str[i] >= 65 && str[i] <= 90)
            return 1;
    }
    return 0;
}
