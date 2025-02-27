/*
** EPITECH PROJECT, 2023
** mysh.h
** File description:
** mysh.h
*/

#ifndef MY_H
    #define MY_H

    #include <stdio.h>
    #include <stdlib.h>
    #include <stddef.h>
    #include <unistd.h>

struct info_param {
    int length;
    char *str;
    char *copy;
    char **word_array;
};

int my_compute_power_rec(int nb, int p);
int my_compute_square_root(int nb);
int my_find_prime_sup(int nb);
int my_getnbr(char const *str);
int my_is_prime(int nb);
int my_isneg(int n);
int my_put_nbr(int nb);
char my_putchar(char c);
int my_putstr(char const *str);
char *my_revstr(char *str);
void my_sort_int_array(int *array, int size);
int my_str_isalpha(char const *str);
int my_str_islower(char const *str);
int my_str_isnum(char const *str);
int my_str_isnum(char const *str);
int my_str_isprintable(char const *str);
int my_str_isupper(char const *str);
char *my_strcapitalize(char *str);
int my_strcmp(char const *s1, char const *s2);
char *my_strcpy(char *dest, char const *src);
int my_strlen(char const *str);
char *my_strlowcase(char *str);
int my_strncmp(char const *s1, char const *s2, int n);
char *my_strncpy(char *dest, char const *src, int n);
char *my_strstr(char *str, char const *to_find);
char *my_strupcase(char *str);
char **my_str_to_word_array(char const *str);
void my_swap(int *a, int *b);
int my_show_word_array(char *const *tab);
char *my_strchr(const char *str, int chara);

#endif
