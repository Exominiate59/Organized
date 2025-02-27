/*
** EPITECH PROJECT, 2024
** my_strlen
** File description:
** print size of string
*/

#include "../../include/my.h"

int my_strlen(char const *str)
{
    int i;

    for (i = 0; str[i]; i++);
    return i;
}
