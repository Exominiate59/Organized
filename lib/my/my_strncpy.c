/*
** EPITECH PROJECT, 2024
** my_strcpy
** File description:
** copy string
*/

#include "../../include/my.h"

char *my_strncpy(char *dest, char const *src, int n)
{
    int i = 0;

    for (; i < n && src[i]; i++)
        dest[i] = src[i];
    if (n > my_strlen(src))
        dest[i] = '\0';
    return dest;
}
