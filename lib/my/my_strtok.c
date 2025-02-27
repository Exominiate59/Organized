/*
** EPITECH PROJECT, 2024
** B-CPE-110-LIL-1-1-settingup-antoine.rousselle
** File description:
** my_strtok.c
*/

#include "my.h"

static char *find_next_token(char *str, const char *delim)
{
    char *start = str;
    char *end;

    for (; *start && my_strchr(delim, *start); start++);
    if (*start == '\0')
        return NULL;
    end = start;
    for (; *end && !my_strchr(delim, *end); end++);
    if (*end != '\0') {
        *end = '\0';
        return end + 1;
    }
    return NULL;
}

char *my_strtok(char *str, const char *delim)
{
    static char *last = NULL;
    char *start;

    if (str != NULL)
        last = str;
    if (last == NULL)
        return NULL;
    start = last;
    last = find_next_token(last, delim);
    return start;
}
