/*
** EPITECH PROJECT, 2024
** my_revstr
** File description:
** reverse string
*/

#include "../../include/my.h"

char *my_revstr(char *str)
{
    int size = my_strlen(str);
    int swap;

    for (int temp = 0; temp < size / 2; temp++) {
        swap = str[temp];
        str[temp] = str[size - temp - 1];
        str[size - temp - 1] = swap;
    }
    return str;
}
