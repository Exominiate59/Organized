/*
** EPITECH PROJECT, 2024
** my_compute_square_root
** File description:
** program that do square root
*/

#include "../../include/my.h"

int my_compute_square_root(int nb)
{
    int r = 1;

    if (nb < 0 || nb == 0)
        return 0;
    for (; r * r < nb; r++);
    if (r * r == nb)
        return r;
    else
        return 0;
}
