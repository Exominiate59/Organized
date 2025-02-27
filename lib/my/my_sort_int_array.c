/*
** EPITECH PROJECT, 2024
** my_sort_int_array
** File description:
** sort number in array
*/

#include "../../include/my.h"

static void verif_swap(int *n1, int *n2)
{
    if (*n1 > *n2)
        my_swap(n1, n2);
}

void my_sort_int_array(int *array, int size)
{
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size - i - 1; j++)
            verif_swap(&array[j], &array[j + 1]);
    }
}
