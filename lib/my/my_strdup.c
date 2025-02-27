/*
** EPITECH PROJECT, 2024
** my_strdup
** File description:
** allocate memory
*/

#include <stdlib.h>
#include <stddef.h>
#include "../../include/my.h"

char *my_strdup(char const *src)
{
    char *dest = malloc(sizeof(char *) * (my_strlen(src) + 250) + 1);

    if (!dest)
        return NULL;
    my_strcpy(dest, src);
    return dest;
}
