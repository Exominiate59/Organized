/*
** EPITECH PROJECT, 2024
** my_swap.c
** File description:
** swap the content of 2 integers
*/

#include <stdio.h>
#include "../../include/my.h"

void my_swap(int *a, int *b)
{
    int temp = *a;

    *a = *b;
    *b = temp;
}
