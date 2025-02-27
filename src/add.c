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

list_t *create_element(char *type, char *name, int id)
{
    list_t *new = malloc(sizeof(list_t));

    if (!new)
        return NULL;
    new->id = id;
    new->type = my_strdup(type);
    new->name = my_strdup(name);
    if (!new->type || !new->name) {
        free(new->type);
        free(new->name);
        free(new);
        return NULL;
    }
    return new;
}

int add(void *data, char **args)
{
    list_t **new_data = data;
    static int id_count = 0;
    list_t *new;

    if (handle_add(args) == 84 || !args[1])
        return 84;
    for (int i = 0; args[i]; i += 2) {
        new = create_element(args[i], args[i + 1], id_count);
        id_count++;
        if (!new)
            return 84;
        new->next = *new_data;
        *new_data = new;
        mini_printf("%s n°%d - \"%s\" added.\n", new->type, new->id,
            new->name);
    }
    return 0;
}
