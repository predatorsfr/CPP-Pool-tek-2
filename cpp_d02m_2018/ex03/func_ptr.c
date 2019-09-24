/*
** EPITECH PROJECT, 2019
** func_ptr
** File description:
** func_ptr
*/

#include "func_ptr.h"
#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

void print_normal(const char *str)
{
    printf("%s\n", str);
}
void print_reverse(const char *str)
{
    for (int i = strlen (str) - 1; i >= 0; i--) {
        printf "%c", str[i]);
    }
    printf("\n");
}
void print_upper(const char *str)
{
    int i = strlen(str);
    char *line = malloc(sizeof(char) + i);

    line = strcat(line, str);
    for (int i = 0; str[i]; i++)
        putchar(toupper(str[i]));
    putchar('\n');
}
void print_42(const char *str)
{
    str = "42";
    printf("%s\n", str);
}
void do_action(action_t action, const char *str)
{
    void(*func_ptr[4])(const char *);

    func_ptr[0] = print_normal;
    func_ptr[1] = print_reverse;
    func_ptr[2] = print_upper;
    func_ptr[3] = print_42;
    (*func_ptr[action])(str);
}
