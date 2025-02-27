/*
** EPITECH PROJECT, 2024
** my_find_prime_sup
** File description:
** program that return 1 if the number is prime else 0
*/

#include "../../include/my.h"

int my_find_prime_sup(int nb)
{
    while (!my_is_prime(nb))
        nb++;
    return nb;
}
