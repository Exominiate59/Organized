/*
** EPITECH PROJECT, 2024
** my_strcpy
** File description:
** copy string
*/

#include "../../include/my.h"

char *my_strcpy(char *dest, char const *src)
{
    int i = 0;

    for (; src[i]; i++)
        dest[i] = src[i];
    dest[i] = '\0';
    return dest;
}
