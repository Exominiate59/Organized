/*
** EPITECH PROJECT, 2024
** B-CPE-110-LIL-1-1-organized-antoine.rousselle
** File description:
** verif_sort.c
*/

#include "../libshell/shell.h"

int verif_type(list_t **head, int reverse)
{
    if (head == NULL || *head == NULL)
        return 0;
    for (list_t *i = *head; i; i = i->next) {
        for (list_t *current = *head; current->next; current = current->next)
            compare_type(current, current->next, reverse);
    }
    return 0;
}

int verif_name(list_t **head, int reverse)
{
    if (head == NULL || *head == NULL)
        return 0;
    for (list_t *i = *head; i; i = i->next) {
        for (list_t *current = *head; current->next; current = current->next)
            compare_name(current, current->next, reverse);
    }
    return 0;
}

int verif_id(list_t **head, int reverse)
{
    if (head == NULL || *head == NULL)
        return 0;
    for (list_t *i = *head; i; i = i->next) {
        for (list_t *current = *head; current->next; current = current->next)
            compare_id(current, current->next, reverse);
    }
    return 0;
}
