/*
** EPITECH PROJECT, 2024
** my_strcat
** File description:
** concatenates 2 strings
*/

#include "../../include/my.h"

char *my_strchr(const char *str, int chara)
{
    for (; *str; str++) {
        if (*str == chara)
            return (char *)str;
    }
    return NULL;
}
