/*
** EPITECH PROJECT, 2019
** add_mul
** File description:
** add_mul
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "string.h"

void append_s(string_t *this, const string_t *s)
{
    this->str = realloc(&s, sizeof(strlen(s->str)));
    strcat(this->str, s->str);
}

void append_c(string_t * this, const char *str)
{
    this->str = realloc(&str, sizeof(strlen(this->str)));
    strcat(this->str, str);
}
