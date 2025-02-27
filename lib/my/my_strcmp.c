/*
** EPITECH PROJECT, 2024
** my_strcmp
** File description:
** compare string
*/

#include <stddef.h>
#include "../../include/my.h"

int my_strcmp(char const *s1, char const *s2)
{
    if (s1 == NULL || s2 == NULL)
        return 1;
    for (int i = 0; s1[i]; i++) {
        if (s1[i] != s2[i])
            return s1[i] - s2[i];
    }
    return 0;
}
