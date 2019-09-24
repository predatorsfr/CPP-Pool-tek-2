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

void init_val(string_t *this)
{
    this->assign_s = &assign_s;
    this->assign_c = &assign_c;
    this->append_s = &append_s;
    this->append_c = &append_c;
    this->at = &at;
}

void string_init(string_t *this, const char *s)
{
    this->str = strdup(s);
    init_val(this);
}

void string_destroy(string_t *this)
{
    if(!this->str)
        free(this->str);
}
