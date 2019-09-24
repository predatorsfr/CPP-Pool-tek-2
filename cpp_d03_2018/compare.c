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

int compare_s( const string_t *this, const string_t *str)
{
    return (strcmp(this->str, str->str));
}
int compare_c( const string_t *this, const char *str)
{
    return (strcmp(this->str, str));
}

const char *c_str( const string_t *this)
{
    return(this->str);
}

int empty(const string_t *this)
{
    if(this->str[0] == '\0')
        return(1);
    return(0);
}
