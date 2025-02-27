/*
** EPITECH PROJECT, 2024
** my_evil_str
** File description:
** swap string characters
*/

#include "../../include/my.h"

int my_getnbr(char const *str)
{
    long r = 0;
    int sign = 1;
    int i = 0;

    for (; str[i] == ' '; i++);
    for (; str[i] == '+' || str[i] == '-'; i++) {
        if (str[i] == '-')
            sign *= -1;
    }
    for (; str[i] >= '0' && str[i] <= '9'; i++) {
        r = r * 10 + (str[i] - '0');
        if (r > 2147483647 && sign == 1)
            return 0;
        if (r <= -2147483648 && sign == -1)
            return -2147483648;
    }
    return (int)(r * sign);
}
