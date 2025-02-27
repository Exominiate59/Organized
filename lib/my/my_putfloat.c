/*
** EPITECH PROJECT, 2024
** my_putfloat
** File description:
** ptint a float decimal
*/

#include "../../include/my.h"

int my_putfloat(double freq)
{
    long long int dozen = (long long int)freq;
    double decimal = freq - dozen;
    int decimal_char;
    int cpt = 0;

    cpt += my_put_nbr(dozen);
    my_putchar('.');
    cpt++;
    decimal += 0.0000005;
    for (int i = 0; i < 6; i++) {
        decimal *= 10;
        decimal_char = (int)decimal;
        my_putchar('0' + decimal_char);
        decimal -= decimal_char;
        cpt++;
    }
    return cpt;
}
