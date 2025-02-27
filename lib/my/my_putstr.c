/*
** EPITECH PROJECT, 2024
** my_putstr
** File description:
** print string
*/

#include "../../include/my.h"

int my_putstr(char const *str)
{
    if (str == NULL) {
        my_putstr("(null)");
        return 0;
    }
    for (int i = 0; str[i]; i++)
        my_putchar(str[i]);
    return 0;
}
