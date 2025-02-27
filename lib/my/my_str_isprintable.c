/*
** EPITECH PROJECT, 2024
** my_str_isprintable
** File description:
** search if the string contains all printable characters
*/

#include "../../include/my.h"

int my_str_isprintable(char const *str)
{
    for (int i = 0; str[i]; i++) {
        if (str[i] < 32 || str[i] > 126)
            return 0;
    }
    return 1;
}
