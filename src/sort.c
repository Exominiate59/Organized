/*
** EPITECH PROJECT, 2024
** B-CPE-110-LIL-1-1-organized-antoine.rousselle
** File description:
** sort.c
*/

#include "../libshell/shell.h"

const flag_t handle[] = {
    {"TYPE", verif_type},
    {"NAME", verif_name},
    {"ID", verif_id},
    {NULL, NULL}
};

int verif_function(char *str, int reverse, list_t **head)
{
    if (!str || !head || !*head)
        return 0;
    for (int i = 0; handle[i].c; i++) {
        if (my_strcmp(str, handle[i].c) == 0)
            return handle[i].fonction(head, reverse);
    }
    return 84;
}

int parse_args(char **args, int *reverse, char **sort_type)
{
    *reverse = 0;
    *sort_type = NULL;
    for (int i = 0; args[i]; i++) {
        if (my_strcmp("-r", args[i]) == 0)
            *reverse = 1;
        if (my_strcmp("TYPE", args[i]) == 0 ||
            my_strcmp("NAME", args[i]) == 0 ||
            my_strcmp("ID", args[i]) == 0)
            *sort_type = args[i];
        if (my_strcmp("-r", args[i]) != 0 &&
            my_strcmp("TYPE", args[i]) != 0 &&
            my_strcmp("NAME", args[i]) != 0 &&
            my_strcmp("ID", args[i]) != 0)
            return 84;
    }
    if (!*sort_type)
        return 84;
    return 0;
}

int sort(void *data, char **args)
{
    list_t **head = (list_t **)data;
    int reverse = 0;
    char *sort_type = NULL;
    int result;

    if (!data || !args)
        return 84;
    result = parse_args(args, &reverse, &sort_type);
    if (result == 84)
        return 84;
    if (verif_function(sort_type, reverse, head) == 84)
        return 84;
    return 0;
}
