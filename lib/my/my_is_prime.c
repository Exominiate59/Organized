/*
** EPITECH PROJECT, 2024
** my_is_prime
** File description:
** program that return 1 if the number is prime else 0
*/

#include "../../include/my.h"

int my_is_prime(int nb)
{
    if (nb <= 1)
        return 0;
    for (int i = 2; i < nb / 2 + 1; i++) {
        if (nb % i == 0)
            return 0;
    }
    return 1;
}
