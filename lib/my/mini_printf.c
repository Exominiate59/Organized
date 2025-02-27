/*
** EPITECH PROJECT, 2024
** mini_printf
** File description:
** do the flag s, c, d and i of printf
*/

#include "../../include/my.h"

void verif_spec(char format, va_list arg)
{
    if (format == 'd' || format == 'i')
        my_put_nbr(va_arg(arg, int));
    if (format == 's')
        my_putstr(va_arg(arg, char *));
    if (format == 'c')
        my_putchar(va_arg(arg, int));
    if (format == '%')
        my_putchar('%');
    return;
}

int mini_printf(const char *format, ...)
{
    va_list arg;

    va_start(arg, format);
    for (int i = 0; format[i]; i++) {
        if (format[i] == '%') {
            verif_spec(format[i + 1], arg);
            i++;
        } else
            my_putchar(format[i]);
    }
    va_end(arg);
    return 0;
}
