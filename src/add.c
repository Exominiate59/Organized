/*
** EPITECH PROJECT, 2024
** B-CPE-110-LIL-1-1-organized-antoine.rousselle
** File description:
** add.c
*/

#include "../libshell/shell.h"

int handle_error(char *arg)
{
    if (!arg)
        return 84;
    if (!my_strcmp(arg, "WIRE") || !my_strcmp(arg, "ACTUATOR") ||
        !my_strcmp(arg, "DEVICE") || !my_strcmp(arg, "SENSORS") ||
        !my_strcmp(arg, "PROCESSORS"))
        return 0;
    return 84;
}

int handle_add(char **args)
{
    for (int i = 0; args[i]; i += 2) {
    if (!args[i + 1] || handle_error(args[i]) == 84)
        return 84;
    }
    return 0;
}

int add(void *data, char **args)
{
    list_t **new_data = data;
    list_t *new;
    static int id_count = 0;

    if (handle_add(args) == 84)
        return 84;
    for (int i = 0; args[i]; i += 2) {
        new = malloc(sizeof(list_t));
        if (!new)
            return 84;
        new->id = id_count;
        id_count++;
        new->type = my_strdup(args[i]);
        if (!new->type)
            return 84;
        new->name = my_strdup(args[i + 1]);
        if (!new->name)
            return 84;
        new->next = *new_data;
        *new_data = new;
        mini_printf("%s n°%d - \"%s\" added.\n", (*new_data)->type,
            (*new_data)->id, (*new_data)->name);
    }
    return 0;
}
