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

typedef struct flag_s {
    char *c;
    int (*fonction)(list_t **head, int reverse);
}flag_t;

int add(void *data, char **args);
int del(void *data, char **args);
int sort(void *data, char **args);
int disp(void *data, char **args);
int workshop_shell(void *data);
int compare_type(list_t *a, list_t *b, int reverse);
int compare_name(list_t *a, list_t *b, int reverse);
int compare_id(list_t *a, list_t *b, int reverse);
int verif_type(list_t **head, int reverse);
int verif_name(list_t **head, int reverse);
int verif_id(list_t **head, int reverse);
void swap_nodes(list_t *a, list_t *b);

#endif /* SHELL_H */
