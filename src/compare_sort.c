/*
** EPITECH PROJECT, 2024
** B-CPE-110-LIL-1-1-organized-antoine.rousselle
** File description:
** compare_sort.c
*/

#include "../libshell/shell.h"

int compare_type(list_t *a, list_t *b, int reverse)
{
    int cmp = my_strcmp(a->type, b->type);

    if (cmp > 0)
        swap_nodes(a, b);
    if (reverse == 1)
        return - cmp;
    return cmp;
}

int compare_name(list_t *a, list_t *b, int reverse)
{
    int cmp = my_strcmp(a->name, b->name);

    if (cmp > 0)
        swap_nodes(a, b);
    if (reverse == 1)
        return - cmp;
    return cmp;
}

int compare_id(list_t *a, list_t *b, int reverse)
{
    int cmp = a->id - b->id;

    if (cmp > 0)
        swap_nodes(a, b);
    if (reverse == 1)
        return - cmp;
    return cmp;
}
