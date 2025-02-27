/*
** EPITECH PROJECT, 2024
** my_str_islower
** File description:
** search if the string contains lowercase alphabetical
*/

#include "../../include/my.h"

int my_str_islower(char const *str)
{
    for (int i = 0; str[i]; i++) {
        if (str[i] >= 97 && str[i] <= 122)
            return 1;
    }
    return 0;
}
