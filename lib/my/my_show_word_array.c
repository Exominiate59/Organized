/*
** EPITECH PROJECT, 2024
** my_strdup
** File description:
** allocate memory
*/

#include "../../include/my.h"

int my_show_word_array(char *const *tab)
{
    for (int i = 0; tab[i]; i++)
        my_putstr(tab[i]);
    return 0;
}
