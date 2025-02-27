/*
** EPITECH PROJECT, 2024
** my_str_isnum
** File description:
** search if the string contains digits
*/

#include "../../include/my.h"

int my_char_isnum(char carac)
{
    if (carac >= 48 && carac <= 57)
        return 1;
    return 0;
}
