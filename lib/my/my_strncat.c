/*
** EPITECH PROJECT, 2024
** my_strcat
** File description:
** concatenates n characters of strings
*/

#include "../../include/my.h"

char *my_strncat(char *dest, char const *src, int nb)
{
    int len_dest = my_strlen(dest);
    int len_src = my_strlen(src);

    for (int i = 0; src[i] && i < nb; i++)
        dest[len_dest + i] = src[i];
    dest[len_src + len_dest] = '\0';
    return dest;
}
