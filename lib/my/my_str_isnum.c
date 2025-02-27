/*
** EPITECH PROJECT, 2024
** my_str_isnum
** File description:
** search if the string contains digits
*/

#include "../../include/my.h"

int my_str_isnum(char const *str)
{
    for (int i = 0; str[i]; i++) {
        if ((str[i] >= 48 && str[i] <= 57))
            return 1;
    }
    return 0;
}
