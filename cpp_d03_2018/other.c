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

char at(const string_t *this ,size_t pos)
{
    if (pos < 0)
        return(-1);
    return(this->str[pos]);
}

void clear(string_t *this)
{
    this->str = '\0';
}

int size(const string_t *this)
{
    if (this->str == NULL)
        return(-1);
    return(strlen(this->str));
}

size_t copy(const string_t *this, char *s, size_t n, size_t pos)
{
    for(int i = 0; i != n; i++)
        s[i] = this->str[pos + i];
    return(n);
}
