/*
** EPITECH PROJECT, 2024
** my_put_nbr
** File description:
** print number
*/

#include "../../include/my.h"

static void print_overflow(void)
{
    my_putchar('2');
    my_putchar('1');
    my_putchar('4');
    my_putchar('7');
    my_putchar('4');
    my_putchar('8');
    my_putchar('3');
    my_putchar('6');
    my_putchar('4');
    my_putchar('8');
}

int my_put_nbr(long long nb)
{
    if (nb < 0) {
        my_putchar('-');
        nb = -nb;
    }
    if (nb == -2147483648 || nb == 2147483647) {
        print_overflow();
        return 0;
    }
    if (nb >= 10) {
        my_put_nbr(nb / 10);
        my_putchar((nb % 10) + '0');
    } else {
        my_putchar(nb + '0');
    }
    return 0;
}
