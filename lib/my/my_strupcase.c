/*
** EPITECH PROJECT, 2024
** my_strupcase
** File description:
** put word in uppercase
*/

#include "../../include/my.h"

char *my_strupcase(char *str)
{
    for (int i = 0; str[i]; i++) {
        if (str[i] >= 97 && str[i] <= 122)
            str[i] -= 32;
    }
    return str;
}
