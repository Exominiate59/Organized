/*
** EPITECH PROJECT, 2024
** B-CPE-110-LIL-1-1-organized-antoine.rousselle
** File description:
** disp.c
*/

#include "../libshell/shell.h"

int disp(void *data, char **args)
{
    list_t **new_data = data;
    list_t *temp;

    if (!new_data || args[0] != NULL)
        return 84;
    temp = *new_data;
    if (!temp)
        return 84;
    for (; temp; temp = temp->next)
        mini_printf("%s n°%d - \"%s\"\n", temp->type, temp->id, temp->name);
    return 0;
}
