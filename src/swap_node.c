/*
** EPITECH PROJECT, 2024
** B-CPE-110-LIL-1-1-organized-antoine.rousselle
** File description:
** swap_node.c
*/

#include "../libshell/shell.h"

void swap_nodes(list_t *a, list_t *b)
{
    void *tmp_data = a->data;
    char *tmp_name = a->name;
    int tmp_id = a->id;
    char *tmp_type = a->type;

    a->data = b->data;
    a->name = b->name;
    a->id = b->id;
    a->type = b->type;
    b->data = tmp_data;
    b->name = tmp_name;
    b->id = tmp_id;
    b->type = tmp_type;
}
