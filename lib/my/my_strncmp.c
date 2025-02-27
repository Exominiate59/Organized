/*
** EPITECH PROJECT, 2024
** my_strncmp
** File description:
** compare n character in string
*/

#include <stddef.h>
#include "../../include/my.h"

int my_strncmp(char const *s1, char const *s2, int n)
{
    if (s1 == NULL || s2 == NULL)
        return 1;
    for (int i = 0; (s1[i] || s2[i]) && i < n; i++) {
        if (s1[i] != s2[i])
            return s1[i] - s2[i];
    }
    return 0;
}
