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

void assign_s(string_t *this, const string_t *str)
{
    if(!this->str)
        free(this->str);
    this->str = strdup(this->str);
}

void assign_c(string_t * this, const char *str)
{
    if(!this->str)
        free(this->str);
    this->str = strdup(this->str);
}
