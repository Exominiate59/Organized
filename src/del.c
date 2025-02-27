/*
** EPITECH PROJECT, 2024
** B-CPE-110-LIL-1-1-organized-antoine.rousselle
** File description:
** del.c
*/

#include "../libshell/shell.h"

int handle_del(char **args)
{
    if (!args || !args[0])
        return 84;
    for (int i = 0; args[i]; i++) {
        if (!my_str_isnum(args[i]))
            return 84;
    }
    return 0;
}

int print_del(list_t *current)
{
    mini_printf("%s n°%d - \"%s\" deleted.\n", current->type, current->id,
        current->name);
    free(current);
    return 0;
}

int del_node(list_t **head, int del_id)
{
    list_t *current = *head;
    list_t *temp = NULL;

    if (!current)
        return 84;
    if (current->id == del_id) {
        *head = current->next;
        print_del(current);
        return 0;
    }
    while (current && current->next) {
        if (current->next->id == del_id) {
            temp = current->next;
            current->next = temp->next;
            return print_del(temp);
        }
        current = current->next;
    }
    return 84;
}

int del(void *data, char **args)
{
    list_t **head = (list_t **)data;
    int del_id = 0;

    if (handle_del(args) == 84)
        return 84;
    for (int i = 0; args[i]; i++) {
        del_id = my_getnbr(args[i]);
        if (del_node(head, del_id) == 84)
            return 84;
    }
    return 0;
}
