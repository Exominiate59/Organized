/*
** EPITECH PROJECT, 2023
** B-CPE-110 : Setting Up Shell
** File description:
** shell.h
*/

#ifndef SHELL_H
    #define SHELL_H

    #include "../include/my.h"
    #include <stdlib.h>

typedef struct list {
    void *data;
    char *name;
    int id;
    char *type;
    struct list *next;
} list_t;

int add(void *data, char **args);
int del(void *data, char **args);
int sort(void *data, char **args);
int disp(void *data, char **args);
int workshop_shell(void *data);

#endif /* SHELL_H */
