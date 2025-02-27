/*
** EPITECH PROJECT, 2024
** my_putchar
** File description:
** write char
*/

#include <unistd.h>
#include "../../include/my.h"

char my_putchar(char c)
{
    return write(1, &c, 1);
}
